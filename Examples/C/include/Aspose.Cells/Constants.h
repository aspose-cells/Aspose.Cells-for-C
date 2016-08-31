#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/DateTime.h"
#include "MemorySetting.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CONSTANTS() 


namespace Aspose {
namespace Cells {
	class Constants : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_JapanG();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_ChineseAm();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_ChinesePm();
			static bool HasOption(intrusive_ptr<Aspose::Cells::System::String> opts , intrusive_ptr<Aspose::Cells::System::String> key);
	public:

			 Constants();
			 static const Aspose::Cells::System::Byte BYTE_MAX_VALUE;
			 static const Aspose::Cells::System::UInt16 USHORT_MAX_VALUE;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorDiv;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorValue;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorNA;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorName;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorNumber;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorRecursive;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorNull;
			 static const intrusive_ptr<Aspose::Cells::System::String> ErrorRef;
			 static const Aspose::Cells::System::Int32 MaxRow;
			 static const Aspose::Cells::System::Int32 MaxColumn;
			 static const Aspose::Cells::System::Int32 MaxRow2003;
			 static const Aspose::Cells::System::Int32 MaxColumn2003;
			 static const intrusive_ptr<Aspose::Cells::System::String> MaxColumnName;
			 static const Aspose::Cells::System::Int32 GlobalSheetIndex;
			 static const Aspose::Cells::System::Int32 ErrorSheetIndex;
			 static const Aspose::Cells::System::Char RMB;
			 static const Aspose::Cells::System::Char WIDEPOUND;
			 static const Aspose::Cells::System::Char POUND;
			 static const Aspose::Cells::System::Char EURO;
			 static const Aspose::Cells::System::Char ChineseYear;
			 static const Aspose::Cells::System::Char ChineseMonth;
			 static const Aspose::Cells::System::Char ChineseDay;
			 static const Aspose::Cells::System::Char ChineseHour;
			 static const Aspose::Cells::System::Char ChineseMinute;
			 static const Aspose::Cells::System::Char ChineseSecond;
			 static const Aspose::Cells::System::Char ChtHour;
			 static const Aspose::Cells::System::Char KorYear;
			 static const Aspose::Cells::System::Char KorMonth;
			 static const Aspose::Cells::System::Char KorDay;
			 static const Aspose::Cells::System::Char KorHour;
			 static const Aspose::Cells::System::Char KorMinute;
			 static const Aspose::Cells::System::Char KorSecond;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> JapanG;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> ChineseAm;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> ChinesePm;
			static intrusive_ptr<Aspose::Cells::System::Object> True;
			static intrusive_ptr<Aspose::Cells::System::Object> False;
			static intrusive_ptr<Aspose::Cells::System::Object> IntZero;
			static intrusive_ptr<Aspose::Cells::System::Object> DoubleZero;
			static intrusive_ptr<Aspose::Cells::System::Object> DoubleOne;
			static intrusive_ptr<Aspose::Cells::System::Object> IntNegativeOne;
			static Aspose::Cells::System::Double EMUsPerPt;
			static Aspose::Cells::System::Int32 PositiveFixedAnglePerDegree;
			static Aspose::Cells::System::Int32 PositiveFixedPercentage;
			static intrusive_ptr<Aspose::Cells::System::DateTime> Date19000301;
			static intrusive_ptr<Aspose::Cells::System::DateTime> Date19040101;
			static intrusive_ptr<Aspose::Cells::System::DateTime> Date18991230;
			static intrusive_ptr<Aspose::Cells::System::DateTime> Date18991231;
			 static const Aspose::Cells::System::Double E;
			 static const Aspose::Cells::System::Double Log2E;
			 static const Aspose::Cells::System::Double Log10E;
			 static const Aspose::Cells::System::Double Ln2;
			 static const Aspose::Cells::System::Double Ln10;
			 static const Aspose::Cells::System::Double LnPi;
			 static const Aspose::Cells::System::Double InvE;
			 static const Aspose::Cells::System::Double SqrtE;
			 static const Aspose::Cells::System::Double Sqrt2;
			 static const Aspose::Cells::System::Double Sqrt1_2;
			 static const Aspose::Cells::System::Double HalfSqrt3;
			 static const Aspose::Cells::System::Double Pi;
			 static const Aspose::Cells::System::Double Pi_2;
			 static const Aspose::Cells::System::Double Pi_4;
			 static const Aspose::Cells::System::Double SqrtPi;
			 static const Aspose::Cells::System::Double Sqrt2Pi;
			 static const Aspose::Cells::System::Double InvPi;
			 static const Aspose::Cells::System::Double TwoInvPi;
			 static const Aspose::Cells::System::Double InvSqrtPi;
			 static const Aspose::Cells::System::Double InvSqrt2Pi;
			 static const Aspose::Cells::System::Double TwoInvSqrtPi;
			 static const Aspose::Cells::System::Double Degree;
			 static const Aspose::Cells::System::Double Grad;
			 static const Aspose::Cells::System::Double PowerDecibel;
			 static const Aspose::Cells::System::Double NeutralDecibel;
			 static const Aspose::Cells::System::Double Catalan;
			 static const Aspose::Cells::System::Double EulerGamma;
			 static const Aspose::Cells::System::Double GoldenRatio;
			 static const Aspose::Cells::System::Double Glaisher;
			 static const Aspose::Cells::System::Double Khinchin;
			static Aspose::Cells::MemorySetting PerformanceTypeDefault;
			static bool MultiThreadReading;
		public:
			virtual ~Constants();
	};

}

}
