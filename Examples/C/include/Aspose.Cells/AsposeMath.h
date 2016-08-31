#pragma once
//#include "System/Exception.h"
#include "System/Int64.h"
//#include "System/Decimal.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
//#include "System/Math.h"
#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/MidpointRounding.h"
//#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_ASPOSEMATH() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class AsposeMath : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_PrecisionRanks();
	public:

			static Aspose::Cells::System::Int64 MaxBitArgument;
			 AsposeMath();
			static Aspose::Cells::System::Double RoundR15(Aspose::Cells::System::Double a);
			 static const Aspose::Cells::System::Int32 SignificantDigits;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> PrecisionRanks;
			static bool IsEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> BitAnd(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> BitOr(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> BitXor(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> BitLShift(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> BitRShift(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static intrusive_ptr<Aspose::Cells::System::Object> Abs(intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> Not(intrusive_ptr<Aspose::Cells::System::Object> child , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double a , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Round(Aspose::Cells::System::Double a , Aspose::Cells::System::Int32 digits);
			static intrusive_ptr<Aspose::Cells::System::Object> AddSubtract(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , bool add);
			static intrusive_ptr<Aspose::Cells::System::Object> Mul(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> Div(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> Exact(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> Not(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> child);
			static intrusive_ptr<Aspose::Cells::System::Object> Power(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> ROUNDDOWN(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static intrusive_ptr<Aspose::Cells::System::Object> ROUND(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static intrusive_ptr<Aspose::Cells::System::Object> ROUNDUP(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static intrusive_ptr<Aspose::Cells::System::Object> MOD(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
		public:
			virtual ~AsposeMath();
	};

}

}

}
