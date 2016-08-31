#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "IFunctionParams.h"
#define STATIC_FUNCTIONPARAMSNONE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsNone : public Aspose::Cells::FormulaModel::IFunctionParams
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_Bits;
	public:

			 FunctionParamsNone(Aspose::Cells::FormulaUtility::RefMode ret);
			Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode();
			Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::System::Int32 GetMaxParam();
			Aspose::Cells::System::Int32 GetMinParam();
			bool GetFixedParam();
			 FunctionParamsNone();
		public:
			virtual ~FunctionParamsNone();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
