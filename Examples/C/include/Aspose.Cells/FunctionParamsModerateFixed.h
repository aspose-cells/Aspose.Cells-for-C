#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "FunctionParamsModerateAbstract.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_FUNCTIONPARAMSMODERATEFIXED() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsModerateFixed : public Aspose::Cells::FormulaModel::FunctionParamsModerateAbstract
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_Count;
	public:

			 FunctionParamsModerateFixed(Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::System::Byte paramCount);
			 FunctionParamsModerateFixed(Aspose::Cells::FormulaUtility::RefMode ret , Aspose::Cells::FormulaUtility::RefMode pRef , Aspose::Cells::FormulaUtility::RefMode pWrapper , Aspose::Cells::System::Byte paramCount);
			 FunctionParamsModerateFixed(Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes , Aspose::Cells::System::Byte paramCount);
			 virtual Aspose::Cells::System::Int32 GetMaxParam();
			 virtual Aspose::Cells::System::Int32 GetMinParam();
			 virtual bool GetFixedParam();
			 FunctionParamsModerateFixed();
		public:
			virtual ~FunctionParamsModerateFixed();
	};

}

}

}
