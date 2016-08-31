#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "FunctionParamsModerateAbstract.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_FUNCTIONPARAMSMODERATEVARIABLE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsModerateVariable : public Aspose::Cells::FormulaModel::FunctionParamsModerateAbstract
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_Min;
			Aspose::Cells::System::Byte m_Max;
	public:

			 FunctionParamsModerateVariable(Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::System::Byte min , Aspose::Cells::System::Byte max);
			 FunctionParamsModerateVariable(Aspose::Cells::FormulaUtility::RefMode ret , Aspose::Cells::FormulaUtility::RefMode pRef , Aspose::Cells::FormulaUtility::RefMode pWrapper , Aspose::Cells::System::Byte min , Aspose::Cells::System::Byte max);
			 FunctionParamsModerateVariable(Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes , Aspose::Cells::System::Byte min , Aspose::Cells::System::Byte max);
			 virtual Aspose::Cells::System::Int32 GetMaxParam();
			 virtual Aspose::Cells::System::Int32 GetMinParam();
			 virtual bool GetFixedParam();
			 FunctionParamsModerateVariable();
		public:
			virtual ~FunctionParamsModerateVariable();
	};

}

}

}
