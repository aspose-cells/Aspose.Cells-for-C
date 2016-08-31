#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "IFunctionParams.h"
#define STATIC_FUNCTIONPARAMSMODERATEABSTRACT() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsModerateAbstract : public Aspose::Cells::FormulaModel::IFunctionParams
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Bits;
			static Aspose::Cells::System::Int32 BuildBits(Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 bits);
			Aspose::Cells::FormulaUtility::RefMode GetRefMode(Aspose::Cells::System::Int32 offset);
	public:

			 static const Aspose::Cells::System::Int32 MAX_PARAM_COUNT;
			 virtual Aspose::Cells::System::Int32 GetMaxParam();
			 virtual Aspose::Cells::System::Int32 GetMinParam();
			 virtual bool GetFixedParam();
			 FunctionParamsModerateAbstract(Aspose::Cells::FormulaUtility::RefMode refMode);
			 FunctionParamsModerateAbstract(Aspose::Cells::FormulaUtility::RefMode ret , Aspose::Cells::FormulaUtility::RefMode pRef , Aspose::Cells::FormulaUtility::RefMode pWrapper);
			 FunctionParamsModerateAbstract(Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes);
			Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode();
			Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex);
			 FunctionParamsModerateAbstract();
		public:
			virtual ~FunctionParamsModerateAbstract();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
