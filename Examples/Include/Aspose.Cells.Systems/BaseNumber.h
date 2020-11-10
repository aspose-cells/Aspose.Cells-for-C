#ifndef _SYSTEM_BASENUMBER_H_
#define _SYSTEM_BASENUMBER_H_

#include <stdint.h>

#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/SByte.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/UInt16.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/UInt32.h"
#include "Aspose.Cells.Systems/Int64.h"
#include "Aspose.Cells.Systems/UInt64.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Decimal.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			template <class T, class C>
			class BaseNumber
			{
			public:
				BaseNumber() : _value(0) {}
				BaseNumber(C value) : _value(value) {}
				virtual ~BaseNumber() {};

				operator C() const {
					return _value;
				}

				T& operator ++ () {
					_value++;
					return (T&)*this;
				}

				T operator ++ (int) {
					T t;
					t->_value = _value++;
					return t;
				}

				T& operator += (C m) {
					_value += m;
					return (T&)*this;
				}

				T& operator *= (C m) {
					_value *= m;
					return (T&)*this;
				}

			protected:
				C	_value;

			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_BASENUMBER_H_
