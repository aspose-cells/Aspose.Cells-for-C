#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_NEWTONRAPHSON() 


namespace Aspose {
namespace Cells {
	class NewtonRaphson : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 NewtonRaphson();
			 virtual Aspose::Cells::System::Double f(Aspose::Cells::System::Double x);
			 virtual Aspose::Cells::System::Double df(Aspose::Cells::System::Double x);
			Aspose::Cells::System::Double Solve(Aspose::Cells::System::Double xnew , Aspose::Cells::System::Double tolerance , Aspose::Cells::System::Int32 imax , Aspose::Cells::System::Int32& flag);
		public:
			virtual ~NewtonRaphson();
	};

}

}
