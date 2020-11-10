#ifndef _SYSTEM_OBJECT_H_
#define _SYSTEM_OBJECT_H_

#include <boost/intrusive_ptr.hpp>
#include "Aspose.Cells.Systems/reference_counter.h"
#include "Aspose.Cells.Systems/System.h"
#include "Aspose.Cells.Systems/TypeCode.h"
#include <assert.h>

#ifdef _DEBUG
#ifdef _VLD_
#include <vld.h>
#endif
#endif

using namespace std;
using namespace boost;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class String;
			class Type;
			class ASPOSE_CELLS_API Object : public reference_counter
			{
			public:
				Object();
				virtual ~Object();

				virtual bool Equals(intrusive_ptr<Object> obj);

				static bool Equals(intrusive_ptr<Object> objA, intrusive_ptr<Object> objB);

				static bool ReferenceEquals(intrusive_ptr<Object> objA, intrusive_ptr<Object> objB);

				virtual int GetHashCode();

				intrusive_ptr<Type> GetType();

				virtual intrusive_ptr<String> ToString();

				virtual int CompareTo(intrusive_ptr<Object> obj);

			protected:
				intrusive_ptr<Object> MemberwiseClone()
				{
					assert(1 == 0);
					return NULL;
				}

			private:
				static size_t hash_code(const type_info& info);

			};

			typedef Object* PObject;
			typedef intrusive_ptr<Object> ObjectPtr;
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_OBJECT_H_
