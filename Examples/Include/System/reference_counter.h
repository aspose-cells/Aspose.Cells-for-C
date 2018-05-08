#ifndef REFERENCE_COUNTER_H
#define REFERENCE_COUNTER_H

#include "System/System.h"

namespace Aspose {
	namespace Cells {

		template <typename T> void intrusive_ptr_add_ref(T* t) {
			t->add_ref();
		}

		template <typename T> void intrusive_ptr_release(T* t) {
			if (t->release_ref() <= 0)
				delete t;
		}

		class ASPOSE_CELLS_API IRef {
		public:
			virtual ~IRef() {}

			virtual void add_ref() = 0;

			virtual int release_ref() = 0;
		};

		class ASPOSE_CELLS_API reference_counter {
		protected:
			int ref_count_;
		public:
			reference_counter() : ref_count_(0) {}

			virtual ~reference_counter() {}

			virtual void add_ref() {
				++ref_count_;
			}

			virtual int release_ref() {
				return --ref_count_;
			}

		protected:
			reference_counter& operator=(const reference_counter&) {
				return *this;
			}
		};

		template<class T>
		class SmartPointerHolder {
		public:
			SmartPointerHolder(T* counter) {
				_counter = counter;
				_counter->add_ref();
			}
			~SmartPointerHolder() {
				_counter->release_ref();
			}
		private:
			T* _counter;
		};

	}
}

#endif