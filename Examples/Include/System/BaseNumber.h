#ifndef _SYSTEM_BASENUMBER_H_
#define _SYSTEM_BASENUMBER_H_

#include <stdint.h>

#include "System/Char.h"
#include "System/Byte.h"
#include "System/SByte.h"
#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/UInt32.h"
#include "System/Int64.h"
#include "System/UInt64.h"
#include "System/Double.h"
#include "System/Single.h"
#include "System/Decimal.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_BASENUMBER_H_
