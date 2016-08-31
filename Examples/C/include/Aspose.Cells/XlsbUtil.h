#pragma once
#include "TableStyleElementType.h"
#include "FontUnderlineType.h"
//#include "System/Int32Helper.h"
#include "IconSetType.h"
#include "TextDirectionType.h"
#include "BackgroundType.h"
#include "PivotConditionFormatRuleType.h"
#include "PivotFilterType.h"
#include "OperatorType.h"
#include "ConsolidationFunction.h"
#include "PivotFieldSubtotalType.h"
#include "TotalsCalculation.h"
#include "DateTimeGroupingType.h"
//#include "System/BitConverter.h"
#include "Constants.h"
#include "FormatConditionValueType.h"
#include "FilterOperatorType.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "PivotConditionFormatScopeType.h"
#include "TableDataSourceType.h"
#include "System/Array1D.h"
#include "DynamicFilterType.h"
#include "FontSchemeType.h"
#include "PivotGroupByType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "TextAlignmentType.h"
#include "System/Int32.h"
#include "DataBarAxisPosition.h"
#include "PivotTableSourceType.h"
#include "CellBorderType.h"
#define STATIC_XLSBUTIL() 

namespace Aspose {
namespace Cells {
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Styles;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Workbook;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Worksheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Chartsheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Comments;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Table;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SST;
			static Aspose::Cells::OperatorType ToOperatorType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToOperatorTypeValue(Aspose::Cells::OperatorType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToBuiltInStyleName(Aspose::Cells::System::Int32 builtId , Aspose::Cells::System::Int32 level);
			static Aspose::Cells::System::Int32 ToStyleBuiltId(intrusive_ptr<Aspose::Cells::System::String> name);
			static Aspose::Cells::FontUnderlineType ToFontUnderlineType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToFontUnderlineValue(Aspose::Cells::FontUnderlineType type);
			static Aspose::Cells::TextAlignmentType ToVAlignment(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToVAlignmentValue(Aspose::Cells::TextAlignmentType type);
			static Aspose::Cells::TextAlignmentType ToHAlignment(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToHAlignmentValue(Aspose::Cells::TextAlignmentType type);
			static Aspose::Cells::TextDirectionType ToTextDirectionType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToTextDirectionValue(Aspose::Cells::TextDirectionType type);
			static Aspose::Cells::DataBarAxisPosition ToDataBarAxisPositionType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToDataBarAxisPositionValue(Aspose::Cells::DataBarAxisPosition type);
			static Aspose::Cells::CellBorderType ToCellBorderType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToCellBorderValue(Aspose::Cells::CellBorderType type);
			static Aspose::Cells::System::Int32 ToBackgroundValue(Aspose::Cells::BackgroundType type);
			static Aspose::Cells::BackgroundType ToBackgroundType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::IconSetType GetIconSetType(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 SetIconSetType(Aspose::Cells::IconSetType type);
			static intrusive_ptr<Aspose::Cells::System::String> GetFilterCalendarType(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::DynamicFilterType GetDynamicFilterType(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 SetDynamicFilterType(Aspose::Cells::DynamicFilterType type);
			static Aspose::Cells::FilterOperatorType GetFilterOperatorType(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Byte SetFilterOperatorType(Aspose::Cells::FilterOperatorType type);
			static Aspose::Cells::DateTimeGroupingType GetDateTimeGroupingType(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 SetDateTimeGroupingType(Aspose::Cells::DateTimeGroupingType type);
			static void GetFormatConditionTypeFromRule(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 type , Aspose::Cells::System::Int32 templateId , Aspose::Cells::System::Int32 val , intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			static Aspose::Cells::FormatConditionValueType GetFormatConditionValueType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetFormatConditionValueType(Aspose::Cells::FormatConditionValueType type);
			static Aspose::Cells::Tables::TableDataSourceType GetTableDataSourceType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetTableDataSourceType(Aspose::Cells::Tables::TableDataSourceType type);
			static Aspose::Cells::Tables::TotalsCalculation GetTotalsCalculation(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetTotalsCalculation(Aspose::Cells::Tables::TotalsCalculation type);
			static Aspose::Cells::Tables::TableStyleElementType GetTableStyleElementType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetTableStyleElementType(Aspose::Cells::Tables::TableStyleElementType type);
			static Aspose::Cells::Pivot::PivotFieldSubtotalType GetFieldSubtotalType(Aspose::Cells::System::Byte type);
			static Aspose::Cells::System::Byte SetFieldSubtotalType(Aspose::Cells::Pivot::PivotFieldSubtotalType type);
			static Aspose::Cells::Pivot::PivotTableSourceType GetPivotSourceType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetPivotSourceType(Aspose::Cells::Pivot::PivotTableSourceType type);
			static Aspose::Cells::Pivot::PivotFilterType GetPivotFilterType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetPivotFilterType(Aspose::Cells::Pivot::PivotFilterType type);
			static Aspose::Cells::Pivot::PivotConditionFormatScopeType GetPivotConditionFormatScopeType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetPivotConditionFormatScopeType(Aspose::Cells::Pivot::PivotConditionFormatScopeType type);
			static Aspose::Cells::Pivot::PivotConditionFormatRuleType GetPivotConditionFormatRuleType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetPivotConditionFormatRuleType(Aspose::Cells::Pivot::PivotConditionFormatRuleType type);
			static Aspose::Cells::Pivot::PivotGroupByType GetPivotGroupByType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 SetPivotGroupByType(Aspose::Cells::Pivot::PivotGroupByType type);
			static Aspose::Cells::System::Int32 SetPivotAggregationFunction(Aspose::Cells::ConsolidationFunction type);
			static Aspose::Cells::FontSchemeType GetFontSchemeType(Aspose::Cells::System::Byte type);
			static intrusive_ptr<Aspose::Cells::System::String> GetFontScheme(Aspose::Cells::System::Byte type);
			static Aspose::Cells::System::Byte SetFontScheme(intrusive_ptr<Aspose::Cells::System::String> type);
			static bool IsErrorString(intrusive_ptr<Aspose::Cells::System::Object> value);
			 XlsbUtil();
		public:
			virtual ~XlsbUtil();
	};

}

}

}
