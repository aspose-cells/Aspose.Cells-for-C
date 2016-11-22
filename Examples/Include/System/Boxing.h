#ifndef _SYSTEM_BOXING_H_
#define _SYSTEM_BOXING_H_

#include "System/Object.h"
#include "System/IComparable.h"
#include "System/ArgumentException.h"
#include "System/Collections/HashCodeHelper.h"
#include "System/PrimitiveToStringHelper.h"
#include <typeinfo>

using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace System {

			template <class T>
			class Primitive : public Object, public IComparable
			{
			public:
				Primitive(T value) : _value(value) {}
				virtual ~Primitive() {};

				operator T() const {
					return _value;
				}

				T& GetValue() {
					return _value;
				}

				void SetValue(T value) {
					_value = value;
				}

				virtual bool Equals(ObjectPtr obj)
				{
					intrusive_ptr<Primitive<T>> primitive = dynamic_pointer_cast<Primitive<T>>(obj);
					if (primitive == NULL) {
						return false;
					}
					return _value == primitive->_value;
				}

				int CompareTo(ObjectPtr value)
				{
					if (value == NULL) {
						return 1;
					}

					if ((typeid(*value.get()) != typeid(Primitive<T>)))
					{
						throw ArgumentException("Arg_MustBePrimitive");
					}

					T num = ((Primitive<T>*)value.get())->_value;
					if (_value < num) {
						return -1;
					}
					if (_value > num) {
						return 1;
					}
					return 0;
				}

				virtual int GetHashCode()
				{
					return HashCodeHelper::GetHashcode(_value);
				}

				virtual intrusive_ptr<String> ToString()
				{
					return PrimitiveToStringHelper::ToString(_value);
				}

				T	_value;

			};
			template<class T, class U>
			inline bool operator==(intrusive_ptr<Primitive<T>> const & a, intrusive_ptr<Primitive<U>> const & b) {
				return a->GetValue() == b->GetValue();
			}

			template <class T>
			T ObjectCast(ObjectPtr o) {
				intrusive_ptr<Primitive<T>> p = dynamic_pointer_cast<Primitive<T>>(o);
				return p->_value;
			}

			template <class T>
			ObjectPtr ConcreteEnum(T v)
			{
				return NEW Primitive<T>(v);
			}

			template <class T>
			T EnumCast(ObjectPtr v)
			{
				return ObjectCast<T>(v);

			}

		}
	}
}	// namespace System

#endif	// _SYSTEM_BOXING_H_
