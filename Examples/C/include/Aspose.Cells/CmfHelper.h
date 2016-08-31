#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
//#include "System/Type.h"
#include "System/String.h"
//#include "System/Collections/Hashtable.h"
//#include "System/TypeCode.h"
#include "BorderType.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/DateTime.h"
#define STATIC_CMFHELPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeOperatorCompare;
class IFormulaNode;
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class BorderCopyOptions;
}
}
}
namespace Aspose {
namespace Cells {
class CellArea;
class Workbook;
class Worksheet;
class FormatCondition;
class Font;
class Cell;
class CFResult;
class FormatConditionCollection;
class WorkbookSettings;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class CmfHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::CFResult> GetConditionalFormattings(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::Object> GetCellValue(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Object> c , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static bool GetFormatConditionThreeOperand(intrusive_ptr<Aspose::Cells::System::String> opCode , intrusive_ptr<Aspose::Cells::System::Object> value1 , intrusive_ptr<Aspose::Cells::System::Object> value2 , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static bool GetFormatConditionTwoOperand(intrusive_ptr<Aspose::Cells::System::String> opCode , intrusive_ptr<Aspose::Cells::System::Object> value1 , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> GetResult(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::FormatCondition> fc , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::CellArea> cellarea , bool& isTrue);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> TBetween(intrusive_ptr<Aspose::Cells::FormatCondition> fc , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Cell> cell);
			static bool CheckOperator(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr);
	public:

			static intrusive_ptr<Aspose::Cells::CFResult> GetConditionalFormattings(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Style> oldStyle , bool copy);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> CreateRelInfo(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> CreateRelInfo(intrusive_ptr<Aspose::Cells::Workbook> book);
			static void ApplyStyleForFirstOpen(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> conditionalStyle);
			static void ApplyToCellStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> conditionalStyle);
			static void ApplyConditionalStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> conditionalStyle);
			static void ApplyTableFont(intrusive_ptr<Aspose::Cells::Font> cellFont , intrusive_ptr<Aspose::Cells::Style> tableStyle , intrusive_ptr<Aspose::Cells::Style> defaultStyle);
			static void ApplyTableStyle(intrusive_ptr<Aspose::Cells::Style> cellStyle , intrusive_ptr<Aspose::Cells::Style> tableStyle , intrusive_ptr<Aspose::Cells::Style> defaultStyle);
			 static const Aspose::Cells::System::Int32 EmptyBorderPriorityValue;
			static Aspose::Cells::System::Int32 GetBorderPriority(Aspose::Cells::System::Int32 priorities , Aspose::Cells::BorderType bt);
			static Aspose::Cells::System::Int32 SetBorderPriority(Aspose::Cells::System::Int32 priorities0 , Aspose::Cells::BorderType bt , Aspose::Cells::System::Int32 priority0);
			static Aspose::Cells::System::Int32 ApplyTableStyleElement(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> conditionalStyle , intrusive_ptr<Aspose::Cells::Tables::BorderCopyOptions> option , Aspose::Cells::System::Int32 priority0 , Aspose::Cells::System::Int32 priorities0);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormatConditionCollection*>> GetFormatConditions(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Sort(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> conditions);
			 CmfHelper();
		public:
			virtual ~CmfHelper();
	};

}

}
