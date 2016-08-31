#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_NEWTONRAPHSONBASE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NewtonRaphsonBase : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Double _result;
	public:

			 NewtonRaphsonBase();
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			Aspose::Cells::System::Double GetResult();
			Aspose::Cells::System::Int32 Solve(Aspose::Cells::System::Double xnew , Aspose::Cells::System::Double tolerance , Aspose::Cells::System::Int32 imax);
		public:
			virtual ~NewtonRaphsonBase();
	};

}

}

}
