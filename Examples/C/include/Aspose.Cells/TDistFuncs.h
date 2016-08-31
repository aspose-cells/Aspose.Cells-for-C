#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Exception.h"
#define STATIC_TDISTFUNCS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class TDistFuncs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double TDISTPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			static Aspose::Cells::System::Double TDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom , Aspose::Cells::System::Int32 tails);
			static Aspose::Cells::System::Double TINV(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom);
			 TDistFuncs();
		public:
			virtual ~TDistFuncs();
	};

}

}

}
