#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#define STATIC_CALCULATIONDATA() 

namespace Aspose {
namespace Cells {
class Cell;
class Workbook;
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeFunction;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CalculationData : public Aspose::Cells::System::Object
#else	class CalculationData : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> m_FuncNode;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> m_Params;
	public:

			bool CustomResult;
			intrusive_ptr<Aspose::Cells::System::Object> ResultObj;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ResultNode;
			 CalculationData(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode);
			intrusive_ptr<Aspose::Cells::System::Object> GetCalculatedValue();
			void SetCalculatedValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::Workbook> GetWorkbook();
			intrusive_ptr<Aspose::Cells::Worksheet> GetWorksheet();
			intrusive_ptr<Aspose::Cells::Cell> GetCell();
			intrusive_ptr<Aspose::Cells::System::String> GetFunctionName();
			Aspose::Cells::System::Int32 GetParamCount();
			intrusive_ptr<Aspose::Cells::System::Object> GetParamValue(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::String> GetParamText(Aspose::Cells::System::Int32 index);
			 CalculationData();
		public:
			virtual ~CalculationData();
	};

}

}
