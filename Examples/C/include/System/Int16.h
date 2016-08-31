#ifndef _SYSTEM_INT16_H_
#define _SYSTEM_INT16_H_

#include "System/BaseNumber.h"
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
#ifdef _Self_Number_Type
			class ASPOSE_CELLS_API Int16 : public BaseNumber<Int16, int16_t>, public Object
			{
			public:
				const int16_t MaxValue = 32767;
				const int16_t MinValue = -32768;	// -32768;

				Int16();
				Int16(int16_t value);
				Int16(Object& value);
				~Int16();

				int CompareTo(int16_t value);

				virtual bool Equals(Object& obj);

				bool Equals(int16_t obj) { return _value == obj; }

				virtual int GetHashCode() { return _value; }

				Int16& operator = (const int16_t& value) {
					_value = value;
					return *this;
				}

			};
#else
			typedef int16_t Int16;
#endif
		}
	}
}	// namespace System

#endif	// _SYSTEM_INT16_H_