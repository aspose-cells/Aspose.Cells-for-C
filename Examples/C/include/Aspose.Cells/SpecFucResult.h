#pragma once
#include "System/Double.h"
#include "System/Object.h"
#define STATIC_SPECFUCRESULT() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class SpecFucResult : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Double val;
			Aspose::Cells::System::Double err;
			 SpecFucResult();
		public:
			virtual ~SpecFucResult();
	};

}

}

}
