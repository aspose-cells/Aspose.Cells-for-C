#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Char.h"
#include "RefMode.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FUNCTIONPARAMSUTIL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFunctionParams;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FunctionParamsUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_ParamsCache;
			static Aspose::Cells::FormulaUtility::RefMode ParseMode(Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> ParseModes(intrusive_ptr<Aspose::Cells::System::String> s);
	public:

			 static const Aspose::Cells::System::Int32 MAX_PARAM_COUNT;
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> GetFunctionParams(intrusive_ptr<Aspose::Cells::System::String> key);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFunctionParams> BuildFunctionParams(Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 max , Aspose::Cells::FormulaUtility::RefMode ret , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> refModes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> wrapperModes);
			static Aspose::Cells::System::Int32 BuildBits(Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 bits);
			static Aspose::Cells::FormulaUtility::RefMode GetRefMode(Aspose::Cells::System::Int32 bits , Aspose::Cells::System::Int32 offset);
			 FunctionParamsUtil();
		public:
			virtual ~FunctionParamsUtil();
	};

}

}

}
