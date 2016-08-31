#pragma once
#include "System/Object.h"
#include "System/DateTime.h"
//#include "System/Boxing.h"
#include "NewtonRaphson.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_YIELD() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Yield : public Aspose::Cells::NewtonRaphson
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::DateTime> _settlement;
			intrusive_ptr<Aspose::Cells::System::DateTime> _maturity;
			Aspose::Cells::System::Double _rate;
			Aspose::Cells::System::Int32 _redemption;
			Aspose::Cells::System::Int32 _frequency;
			Aspose::Cells::System::Int32 _basis;
			Aspose::Cells::System::Double _pr;
			Aspose::Cells::System::Double _precision;
			 Yield(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double precision);
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			intrusive_ptr<Aspose::Cells::System::Object> Calculate(Aspose::Cells::System::Double guess);
			 Yield();
		public:
			virtual ~Yield();
	};

}

}

}
