#ifndef _SYSTEM_OBJECT_H_
#define _SYSTEM_OBJECT_H_
#ifdef _DEBUG
//#include "debug_new.h"
#endif

#include <boost/intrusive_ptr.hpp>
#include "System/reference_counter.h"
#include "System/System.h"
#include "System/TypeCode.h"
#include <assert.h>

#if 1
#ifdef _DEBUG
//#include <vld.h>
#endif
#endif

using namespace std;
using namespace boost;

namespace Aspose {
	namespace Cells {
		namespace System {
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

				//virtual TypeCode GetTypeCode() { return TypeCode_Object; }
				intrusive_ptr<Type> GetType();

				virtual intrusive_ptr<String> ToString();

				// improve performance
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
}	// namespace System

#endif	// _SYSTEM_OBJECT_H_
