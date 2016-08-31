#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Char.h"
#include "System/UInt16.h"
#include "SxLiItemType.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "PivotFieldType.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "TableStyleElementType.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Int32Helper.h"
//#include "System/Collections/CollectionBase.h"
//#include "System/StringHelperPal.h"
#define STATIC_PIVOTSTYLECALCULATOR() 

namespace Aspose {
namespace Cells {
class Cell;
class WorksheetCollection;
class Cells;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFieldCollection;
class SxFormat;
class PivotCalculator;
class SxRule;
class SxFilt;
class PivotTable;
class PivotItemNode;
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
namespace Pivot {
	class PivotStyleCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> m_PivotTable;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> RowRootNode;
			intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> ColumnRootNode;
			Aspose::Cells::System::Int32 dataRowCount;
			Aspose::Cells::System::Int32 dataColumnCount;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> rowStyleProp;
			Aspose::Cells::Pivot::PivotFieldType multiDataType;
			Aspose::Cells::System::Int32 multiDataLevel;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowSxLiNodesForFormat;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> columnSxLiNodesForFormat;
			Aspose::Cells::System::Int32 rowFieldsCount;
			Aspose::Cells::System::Int32 columnFieldsCount;
			Aspose::Cells::System::Int32 dataFieldsCount;
			Aspose::Cells::System::Int32 pageFieldsCount;
			Aspose::Cells::WorksheetCollection* Sheets;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculator> pivotCalculator;
			void RemoveRedundentBlankStyle();
			void CreateRowStyleProp(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> root , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 level);
			void CreateColumnStyleProp(intrusive_ptr<Aspose::Cells::Pivot::PivotItemNode> root , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 level);
			void InitStyle();
			void HandleFieldFormatStyle();
			void HandleAutoFormatReport1();
			void HandleAutoFormatReport2();
			void HandleAutoFormatReport3();
			void HandleAutoFormatReport4();
			void HandleAutoFormatReport5();
			void HandleAutoFormatReport6();
			void HandleAutoFormatReport7();
			void HandleAutoFormatReport8();
			void HandleAutoFormatReport9();
			void HandleAutoFormatReport10();
			void HandleAutoFormatTable1();
			void HandleAutoFormatTable2();
			void HandleAutoFormatTable3();
			void HandleAutoFormatTable4();
			void HandleAutoFormatTable5();
			void HandleAutoFormatTable6();
			void HandleAutoFormatTable7();
			void HandleAutoFormatTable8();
			void HandleAutoFormatTable9();
			void HandleAutoFormatTable10();
			void HandleAutoFormatClassic();
			void HandleAutoFormatNone();
			void HandleFirstColumnSubHeadingLeftBorderStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleFirstRowStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleRightTopCellStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleLastRowSubHeadingStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleRowSubheading1TopBorder(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleColumnHeadingDataArea(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleDataAreaItalicStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleDataAreaLeftBorderStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 column , bool needGrand);
			bool IsAllFieldsTableStyle(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
			Aspose::Cells::System::Int32 GetTopNeighbourPositionIndex(Aspose::Cells::System::Int32 pos);
			void PostHandlePageBorder(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> styles , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> styleBorders , Aspose::Cells::System::Int32 rows , Aspose::Cells::System::Int32 columns);
			void PostHandleBorder(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> styles , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> styleBorders , Aspose::Cells::System::Int32 rows , Aspose::Cells::System::Int32 columns);
			void CleanColumnTotalHeader(intrusive_ptr<Aspose::Cells::Style> style , bool isSubTotal);
			void CleanRowTotalHeader(intrusive_ptr<Aspose::Cells::Style> style , bool isSubTotal);
			void CleanBlankRowHeader(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleColumnTitleStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleReportColumnTitleStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleRowTitleStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleRowHeader1WithoutBorderStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleLastColumnHeading(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleWholeTableStyle(intrusive_ptr<Aspose::Cells::Style> wholeStyle);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetCurColumnSubTotalStyleElement(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> elements);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetCurRowSubTotalStyleElement(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> elements , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> types);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetCurRowSubTotalStyleElement(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> elements);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetCurColumnSubHeadingStyleElement(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> elements);
			void HandleRowSubHeadingStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , intrusive_ptr<Aspose::Cells::Style> thirdStyle);
			void HandleRowSubheadingDataBottomBorder(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleRowSubHeadingIndentStyle();
			void HandleComplexRowSubHeadingStyle(intrusive_ptr<Aspose::Cells::Style> firstHeadStyle , intrusive_ptr<Aspose::Cells::Style> firstAllStyle , intrusive_ptr<Aspose::Cells::Style> firstTailStyle , intrusive_ptr<Aspose::Cells::Style> secondHeadStyle , intrusive_ptr<Aspose::Cells::Style> secondAllStyle , intrusive_ptr<Aspose::Cells::Style> secondTailStyle , intrusive_ptr<Aspose::Cells::Style> thirdHeadStyle , intrusive_ptr<Aspose::Cells::Style> thirdAllStyle , intrusive_ptr<Aspose::Cells::Style> thirdTailStyle , intrusive_ptr<Aspose::Cells::Style> lastHeadStyle , intrusive_ptr<Aspose::Cells::Style> lastTailStyle);
			bool IsAllFollowRowFieldsTableStyle(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetRowSubheadingColumn(Aspose::Cells::System::Int32 rowFieldIndex);
			Aspose::Cells::System::Int32 GetRowSubheadingIndentLevel(Aspose::Cells::System::Int32 rowFieldIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetCurRowSubHeadingStyleElement(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> elements);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ConvertStringArrayToIntArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> strArr);
			void SetHBorderCopyOptions(intrusive_ptr<Aspose::Cells::Tables::BorderCopyOptions> option , Aspose::Cells::System::Int32 curPos , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void SetVBorderCopyOptions(intrusive_ptr<Aspose::Cells::Tables::BorderCopyOptions> option , Aspose::Cells::System::Int32 curPos , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			Aspose::Cells::System::Int32 GetActualPositionIndex(Aspose::Cells::System::Int32 filterItemIndex , Aspose::Cells::Pivot::PivotFieldType type , Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int32 GetGroupBeginIndex(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 fieldPosition , Aspose::Cells::Pivot::PivotFieldType type);
			Aspose::Cells::System::Int32 GetColumnLastRowfieldIndex(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::UInt16 SxLiItemType2Function(Aspose::Cells::Pivot::SxLiItemType type);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> MergeConditionArea(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowCols);
			void MergeLabels();
			bool IsInMergeCells(intrusive_ptr<Aspose::Cells::Cell> target);
			void ClearRebundantMergeCells();
			bool IsContainMergeCell();
			void ApplyToCellStyleForPivotSxFormats(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> conditionalStyle);
			void CreateFormat(intrusive_ptr<Aspose::Cells::Pivot::SxFormat> format);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFormatCells(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			void GetLabelFormatFilterCells(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowColList , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			Aspose::Cells::System::Int32 GetGroupEndIndex(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 fieldPosition , Aspose::Cells::Pivot::PivotFieldType type);
			void GetGrandDataFormatFilterCells(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowColList , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , bool isRow , bool isColumn);
			void GetGrandLabelFormatFilterCells(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowColList , intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , bool isRow);
			void GetDataFormatFilterCells(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowColList , bool collapsedLevelsAreSubtotals);
			void FiltMatch(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataList , Aspose::Cells::Pivot::PivotFieldType type , bool isLast , Aspose::Cells::System::Byte subTotal , bool needCheckDataIndex , Aspose::Cells::System::Int32 dataIndex);
			Aspose::Cells::System::Int32 GetActualPosition(Aspose::Cells::System::Int32 filterItemIndex , Aspose::Cells::Pivot::PivotFieldType type , Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> InitFiltData(Aspose::Cells::Pivot::PivotFieldType type , Aspose::Cells::System::Byte subTotal);
			void SplitFilts(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowFilts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> colFilts , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> pageFilts);
			void InsertOrderFilt(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::Pivot::SxFilt> sxFilt , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFilterCells(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> filts , Aspose::Cells::Pivot::PivotFieldType type , bool collapsedLevelsAreSubtotals);
			intrusive_ptr<Aspose::Cells::Style> GetDefaultInitStyle(Aspose::Cells::System::Int32 dxIndex);
	public:

			bool hasPageField;
			Aspose::Cells::System::Int32 mainStyleCacheRowCount;
			Aspose::Cells::System::Int32 mainStyleCacheColumnCount;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> mainStyleBorders;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> pageStyleBorders;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> rowHiddenProp;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> columnStyleProp;
			static Aspose::Cells::System::Int32 HighestPrivelege;
			bool IsEmptyTable;
			 PivotStyleCalculator(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculator> calculator);
			void SetNecessaryAttributes();
			void CreateRowColumnStyleProp();
			void SetStyle();
			void CreateStyle();
			void HandlePageFieldLabelsStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandlePageFieldValuesStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleColumnStripeStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , Aspose::Cells::System::Int32 firstSize , Aspose::Cells::System::Int32 secondSize);
			void HandleRowStripeStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , Aspose::Cells::System::Int32 firstSize , Aspose::Cells::System::Int32 secondSize);
			void HandleFirstColumnStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleHeadRowStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleFirstHeaderCell(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleSubTotalColumnStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , intrusive_ptr<Aspose::Cells::Style> thirdStyle);
			void HandleBlankRowStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleSubTotalRowStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , intrusive_ptr<Aspose::Cells::Style> thirdStyle);
			void HandleSubTotalRowHeaderStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , intrusive_ptr<Aspose::Cells::Style> thirdStyle);
			void HandleSubTotalRowStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , Aspose::Cells::Tables::TableStyleElementType firstType , intrusive_ptr<Aspose::Cells::Style> secondStyle , Aspose::Cells::Tables::TableStyleElementType secondType , intrusive_ptr<Aspose::Cells::Style> thirdStyle , Aspose::Cells::Tables::TableStyleElementType thirdType);
			void HandleColumnSubHeadingStyle(intrusive_ptr<Aspose::Cells::Style> firstStyle , intrusive_ptr<Aspose::Cells::Style> secondStyle , intrusive_ptr<Aspose::Cells::Style> thirdStyle);
			void HandleGrandTotalColumn(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleGrandTotalColumnHeaderCell(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleGrandTotalRowHeadCell(intrusive_ptr<Aspose::Cells::Style> style);
			void HandleGrandTotalRow(intrusive_ptr<Aspose::Cells::Style> style);
			void FormatAll(intrusive_ptr<Aspose::Cells::Style> style);
			void Format(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::Style> style);
			void CreateConditionalFormats();
			void CreateFormats();
			 PivotStyleCalculator();
		public:
			virtual ~PivotStyleCalculator();
	};

}

}

}
