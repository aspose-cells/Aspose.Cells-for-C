#pragma once
#include "System/Object.h"
//#include "System/Boxing.h"
#include "NewtonRaphson.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/String.h"
#define STATIC_RATE() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Rate : public Aspose::Cells::NewtonRaphson
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double nper;
			Aspose::Cells::System::Double pv;
			Aspose::Cells::System::Double pmt;
			Aspose::Cells::System::Double fv;
			Aspose::Cells::System::Double type;
	public:

			 Rate();
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::System::Object> Calculate(Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type , Aspose::Cells::System::Double guess);
		public:
			virtual ~Rate();
	};

}

}

}
