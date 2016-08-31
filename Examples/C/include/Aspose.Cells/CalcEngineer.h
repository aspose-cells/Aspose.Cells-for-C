#pragma once
//#include "System/Single.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Convert.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_CALCENGINEER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcEngineer : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Double UnitToMLiter(intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double UnitToHour(intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double ConvertTemperatureToC(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double ConvertTemperatureFromC(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> unit);
			static Aspose::Cells::System::Double UnitToInch(intrusive_ptr<Aspose::Cells::System::String> unit);
	public:

			static Aspose::Cells::System::Double CalERF(Aspose::Cells::System::Double x);
			static Aspose::Cells::System::Double Besseli(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Besselj(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Bessely(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double Besselk(Aspose::Cells::System::Double x , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Cells::System::String> CheckBIN(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> CheckOCT(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> CheckHEX(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertString(intrusive_ptr<Aspose::Cells::System::String> s , Aspose::Cells::System::Int32 fromBase , Aspose::Cells::System::Int32 toBase);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcConvert(Aspose::Cells::System::Double number , intrusive_ptr<Aspose::Cells::System::String> from_unit , intrusive_ptr<Aspose::Cells::System::String> to_unit);
			 CalcEngineer();
		public:
			virtual ~CalcEngineer();
	};

}

}

}
