#pragma once
#include "System/Object.h"
#include "System/Double.h"
//#include "System/Math.h"
//#include "System/Exception.h"
//#include "System/Int32.h"
#define STATIC_FDISTFUNCS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FDistFuncs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double FDISTPdf(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static Aspose::Cells::System::Double FDIST(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2);
			static Aspose::Cells::System::Double FINVRT(Aspose::Cells::System::Double x , Aspose::Cells::System::Double degrees_freedom1 , Aspose::Cells::System::Double degrees_freedom2 , bool& isError);
			 FDistFuncs();
		public:
			virtual ~FDistFuncs();
	};

}

}

}
