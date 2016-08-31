#ifndef _SYSTEM_INT32_H_
#define _SYSTEM_INT32_H_

#include "System/BaseNumber.h"
#ifdef _Self_Number_Type
#include "System/Object.h"
#include "System/IComparable.h"
#endif

namespace Aspose {
	namespace Cells {
		namespace System {
#ifdef _Self_Number_Type
			class ASPOSE_CELLS_API Int32 : public BaseNumber<Int32, int32_t>, public Object, public IComparable //IFormattable, IConvertible, IComparable<int>, IEquatable<int>
			{
			public:
				//const int32_t MaxValue = 2147483647;
				//const int32_t MinValue = -2147483647 - 1;	// -2147483648;

				Int32();
				Int32(int32_t value);
				Int32(Object& value);
				~Int32();

				int CompareTo(Object* value);
				int CompareTo(int32_t value);

				virtual bool Equals(Object* obj);
				virtual bool Equals(Object& obj);

				bool Equals(int32_t obj) { return _value == obj; }

				virtual int GetHashCode() { return _value; }

				Int32& operator = (const int32_t& value) {
					_value = value;
					return *this;
				}


				//bool operator == (const Int32& i) const {
				//	return _value == i->_value;
				//}

				//bool operator == (const int32_t& i) const {
				//	return _value == i;
				//}

			};
#else
			typedef int32_t Int32;
#endif
		}
	}
}	// namespace System

#endif	// _SYSTEM_INT32_H_