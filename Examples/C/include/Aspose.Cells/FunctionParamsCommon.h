#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "IFunctionParams.h"
#define STATIC_FUNCTIONPARAMSCOMMON() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFunctionRefModes;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsCommon : public Aspose::Cells::FormulaModel::IFunctionParams
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionRefModes> m_RefModes;
			Aspose::Cells::System::Byte m_Min;
			Aspose::Cells::System::Byte m_Max;
	public:

			 FunctionParamsCommon(intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionRefModes> refModes , Aspose::Cells::System::Byte min , Aspose::Cells::System::Byte max);
			Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode();
			Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex);
			 virtual Aspose::Cells::System::Int32 GetMaxParam();
			 virtual Aspose::Cells::System::Int32 GetMinParam();
			 virtual bool GetFixedParam();
			 FunctionParamsCommon();
		public:
			virtual ~FunctionParamsCommon();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
