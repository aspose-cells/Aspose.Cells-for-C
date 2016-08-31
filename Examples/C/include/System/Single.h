#ifndef _SYSTEM_SINGLE_H_
#define _SYSTEM_SINGLE_H_

#ifdef _Self_Number_Type
#include "common.h"
#include "Object.h"
#include "String.h"
#include "Int32.h"
#include "IFormatProvider.h"
#include "Globalization/NumberStyles.h"
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Globalization;
#endif

namespace Aspose {
	namespace Cells {
		namespace System {
#ifdef _Self_Number_Type
			class Double;
			class Decimal;
			class Single : public Object {
			private:
				float _value;
			public:
				Single();
				Single(const Single& v);
				operator float();
				Single(int8_t v);
				Single(uint8_t v);
				Single(int16_t v);
				Single(uint16_t v);
				Single(int32_t v);
				Single(uint32_t v);
				Single(int64_t v);
				Single(uint64_t v);
				Single(double v);
				Single(float v);
				Single(long double v);

				bool Equals(Object* obj);
				//	const char* ToString();
				int Compare(Object* obj);
				void Copy(Object* obj);
				const float value() const;


			public:
				String* ToString(IFormatProvider provider);
				String* ToString(String* format);
				String* ToString(String* format, IFormatProvider provider);
				/*
				inline Single operator +(Single lv);
				inline Single operator /(Single lv);
				inline Single operator /(Int32 lv);
				inline Single operator *(Int32 lv);
				inline Single operator *(float lv);
				inline Single operator *(Single lv);
				inline Single operator *(int lv);
				inline Single operator /(float lv);
				*/


			};
			//inline Single operator -(Single v);
			//inline Single operator -( Single rv, Single lv);
#else
			typedef float Single;
#endif
		}

	}
}
#endif	// _SYSTEM_SINGLE_H_