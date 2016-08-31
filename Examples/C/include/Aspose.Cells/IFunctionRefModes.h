#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RefMode.h"
#define STATIC_IFUNCTIONREFMODES() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IFunctionRefModes : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode() = 0;
			virtual Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex) = 0;
			virtual Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex) = 0;
		public:
	};

}

}

}
