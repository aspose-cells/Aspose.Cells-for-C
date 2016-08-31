#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "RefMode.h"
#include "FormulaOType.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_ABSTRACTFORMULATREE2BIN() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FunctionInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class AbstractFormulaTree2Bin : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> errMsg;
			Aspose::Cells::System::Int32 m_ArrayLength;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_Arrays;
			Aspose::Cells::WorksheetCollection* sheets;
			 AbstractFormulaTree2Bin(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 virtual intrusive_ptr<Aspose::Cells::FormulaUtility::FunctionInfo> GetFunction(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::FormulaUtility::FormulaOType type);
			Aspose::Cells::System::Int32 m_StartRow;
			Aspose::Cells::System::Int32 GetStartRow();
			void SetStartRow(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 m_StartColumn;
			Aspose::Cells::System::Int32 GetStartColumn();
			void SetStartColumn(Aspose::Cells::System::Int32 value);
			void SetOption(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 option);
			Aspose::Cells::System::Int32 m_SheetIndex;
			Aspose::Cells::System::Byte m_option;
			bool IsReference();
			void SetIsReference(bool value);
			bool GetForce3D();
			void SetForce3D(bool value);
			bool IsPivotSource();
			void SetIsPivotSource(bool value);
			bool ContainsInvalidTable();
			void SetContainsInvalidTable(bool value);
			bool GetisVolatile();
			void SetisVolatile(bool value);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> CreateToken(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode expectRefMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			 virtual bool IsXlsx();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateResult(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode mode , Aspose::Cells::FormulaUtility::FormulaOType formulaType , bool hasHeader);
			Aspose::Cells::System::Int32 CreateData(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType , bool forceArray , bool isParentRangeOperator);
			Aspose::Cells::System::Int32 CopyData(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> result , Aspose::Cells::System::Int32 startIndex0);
			Aspose::Cells::System::Int32 CopyChoose(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> result , Aspose::Cells::System::Int32 startIndex0);
			Aspose::Cells::System::Int32 CopyIf(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> result , Aspose::Cells::System::Int32 startIndex0);
			 AbstractFormulaTree2Bin();
		public:
			virtual ~AbstractFormulaTree2Bin();
	};

}

}

}
