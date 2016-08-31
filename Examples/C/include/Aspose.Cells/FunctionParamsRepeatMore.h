#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "System/Byte.h"
#include "IFunctionParams.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_FUNCTIONPARAMSREPEATMORE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsRepeatMore : public Aspose::Cells::FormulaModel::IFunctionParams
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 MAX_PARAM_COUNT;
			Aspose::Cells::System::Int32 m_Bits;
			Aspose::Cells::System::Byte m_Min;
			Aspose::Cells::System::Byte m_Max;
			static Aspose::Cells::System::Int32 BuildBits(Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 bits);
			Aspose::Cells::FormulaUtility::RefMode GetRefMode(Aspose::Cells::System::Int32 offset);
	public:

			 FunctionParamsRepeatMore(Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes , Aspose::Cells::System::Byte min , Aspose::Cells::System::Byte max , Aspose::Cells::System::Int32 repeat);
			Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode();
			Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::System::Int32 GetMaxParam();
			Aspose::Cells::System::Int32 GetMinParam();
			bool GetFixedParam();
			 FunctionParamsRepeatMore();
		public:
			virtual ~FunctionParamsRepeatMore();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
