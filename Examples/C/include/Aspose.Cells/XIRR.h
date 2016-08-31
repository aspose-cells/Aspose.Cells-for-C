#pragma once
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_XIRR() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class XIRR : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> dates;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values;
	public:

			 XIRR();
			Aspose::Cells::System::Double Solve(Aspose::Cells::System::Double xnew , Aspose::Cells::System::Double tolerance , Aspose::Cells::System::Int32 imax , bool& flag);
			Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> dates , Aspose::Cells::System::Double guess);
		public:
			virtual ~XIRR();
	};

}

}

}
