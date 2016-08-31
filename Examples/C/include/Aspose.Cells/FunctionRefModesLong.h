#pragma once
#include "System/Object.h"
#include "RefMode.h"
#include "IFunctionRefModes.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_FUNCTIONREFMODESLONG() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionRefModesLong : public Aspose::Cells::FormulaModel::IFunctionRefModes
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaUtility::RefMode m_Ret;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> m_RefModes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> m_WrapperModes;
	public:

			 FunctionRefModesLong(Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes);
			Aspose::Cells::FormulaUtility::RefMode GetReturnRefMode();
			Aspose::Cells::FormulaUtility::RefMode GetParamRefMode(Aspose::Cells::System::Int32 paramIndex);
			Aspose::Cells::FormulaUtility::RefMode GetParamWrapperMode(Aspose::Cells::System::Int32 paramIndex);
			 FunctionRefModesLong();
		public:
			virtual ~FunctionRefModesLong();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
