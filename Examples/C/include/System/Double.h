#ifndef _SYSTEM_DOUBLE_H_
#define _SYSTEM_DOUBLE_H_

#include "System/BaseNumber.h"
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
#ifdef _Self_Number_Type
			class ASPOSE_CELLS_API Double : public BaseNumber<Double, double>, public Object
			{
			public:
				const double MaxValue = 1.7976931348623157E+308;
				const double MinValue = -1.7976931348623157E+308;

				Double();
				Double(double value);
				Double(Object& value);
				virtual ~Double();

				int CompareTo(double value);

				virtual bool Equals(Object& obj);

				bool Equals(double obj) { return _value == obj; }

				virtual int GetHashCode();

				Double& operator = (const double& value) {
					_value = value;
					return *this;
				}
			};
#else
			typedef double Double;
#endif
		}
	}
}	// namespace System

#endif	// _SYSTEM_DOUBLE_H_