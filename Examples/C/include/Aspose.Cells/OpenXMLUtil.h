#pragma once
#include "System/Collections/ArrayList.h"
#include "AutoShapeType.h"
#include "DynamicFilterType.h"
#include "PresetMaterialType.h"
#include "PlacementType.h"
//#include "System/Text/StringBuilder.h"
#include "IMEModeType.h"
#include "PivotGroupByType.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "FontUnderlineType.h"
#include "PivotTableSourceType.h"
#include "TextDirectionType.h"
#include "System/Char.h"
#include "DateTimeGroupingType.h"
#include "SxLiItemType.h"
//#include "System/Type.h"
#include "MirrorType.h"
#include "RectangleAlignmentType.h"
#include "SparklineAxisMinMaxType.h"
#include "System/Single.h"
#include "PrintOrderType.h"
#include "FillPattern.h"
#include "ValidationType.h"
#include "ConsolidationFunction.h"
#include "ChartType.h"
#include "FillPictureType.h"
#include "FormatConditionValueType.h"
#include "System/Collections/Hashtable.h"
#include "CellBorderType.h"
#include "System/String.h"
//#include "System/Globalization/NumberStyles.h"
#include "System/UInt32.h"
#include "UpdateLinksType.h"
#include "DataBarAxisPosition.h"
#include "TimePeriodType.h"
#include "FormatConditionType.h"
#include "SelectionType.h"
#include "PresetCameraType.h"
#include "PivotFieldType.h"
#include "TextOrientationType.h"
#include "DataBindingLoadMode.h"
#include "PivotFieldSubtotalType.h"
#include "ErrorBarDisplayType.h"
#include "DisplayUnitType.h"
#include "LightRigType.h"
#include "TextAutonumberScheme.h"
#include "CrossType.h"
#include "PlotEmptyCellsType.h"
#include "FilterOperatorType.h"
#include "ErrorBarType.h"
#include "ValidationAlertType.h"
#include "WeightType.h"
#include "MsoLineStyle.h"
#include "Bar3DShapeType.h"
#include "System/Object.h"
#include "PivotTableAutoFormatType.h"
#include "PivotFieldDataDisplayFormat.h"
#include "System/Byte.h"
#include "TableStyleElementType.h"
#include "TableDataSourceType.h"
#include "PageOrientationType.h"
#include "TextVerticalType.h"
#include "PrintCommentsType.h"
#include "PrintErrorsType.h"
#include "ChartMarkerType.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "OperatorType.h"
#include "TextTabAlignmentType.h"
#include "PrstColorARGBValConst.h"
//#include "System/Int32Helper.h"
#include "MsoLineDashStyle.h"
#include "TimeUnit.h"
#include "ChartSplitType.h"
#include "System/Int64.h"
#include "PresetShapeType.h"
#include "TotalsCalculation.h"
#include "BackgroundType.h"
#include "SparklineType.h"
//#include "System/StringHelperPal.h"
#include "TextFontAlignType.h"
#include "TickMarkType.h"
#include "LegendPositionType.h"
#include "TickLabelPositionType.h"
#include "ShapePropertyID.h"
#include "TextAlignmentType.h"
#include "DataLablesSeparatorType.h"
#include "System/Guid.h"
#include "TextOverflowType.h"
#include "TrendlineType.h"
#include "ViewType.h"
#include "IconSetType.h"
#include "CalcModeType.h"
#include "System/Drawing/Color.h"
#include "BevelPresetType.h"
#include "LabelPositionType.h"
//#include "System/TypeCode.h"
#include "PathShadeType.h"
//#include "System/Exception.h"
#include "LightRigDirectionType.h"
#define STATIC_OPENXMLUTIL() 

namespace Aspose {
namespace Cells {
class CellArea;
class Workbook;
class Cell;
class WorksheetCollection;
class Font;
class Worksheet;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataFont;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlNode;
class XmlTextReader;
class XmlElement;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class OpenXMLUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool IsHexChar(Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::System::String> DataLablesSeparatorTypeToChartString(Aspose::Cells::Charts::DataLablesSeparatorType type);
			static Aspose::Cells::Charts::DataLablesSeparatorType DataLablesSeparatorTypeFromChartString(intrusive_ptr<Aspose::Cells::System::String> s);
	public:

			static bool USE_ssmlMain2006_Flag;
			static bool PROC_Chart_Flag;
			 static const intrusive_ptr<Aspose::Cells::System::String> MarkupCompatibility_2006;
			 static const intrusive_ptr<Aspose::Cells::System::String> Chart20070802;
			static intrusive_ptr<Aspose::Cells::System::String> NS_ssmlMain_2006;
			static intrusive_ptr<Aspose::Cells::System::String> NS_ssmlMain_200605;
			static intrusive_ptr<Aspose::Cells::System::String> NS_r;
			static intrusive_ptr<Aspose::Cells::System::String> NS_ssmlMain_200909;
			static intrusive_ptr<Aspose::Cells::System::String> NS_ssmlMain_201011;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_OfficeDocument;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_SST;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Style;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Worksheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Chartsheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Theme;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_ThemeOverride;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_VbaProject;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_VbaProjectSignature;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_VbaProjectSignatureAgile;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Href;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Image;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Drawing;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_VmlDrawing;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Chart;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Comments;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_PivotCacheDef;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_PowerPivotData;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_SheetMetadata;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_PivotTable;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_PrinterSettings;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_PivotCacheRecords;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_ExternalLink;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_ExternalLinkPath;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_OleObject;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Control;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_ControlBinary;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_ChartUserShapes;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Table;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Connections;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Package;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_UIUserCustom;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CustomProperty;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CustomXml;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Usernames;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CustomXmlProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_RevisionHeaders;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_RevisionLog;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_SlicerCache;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_SlicerCacheMS;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Slicer;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CtrlProp;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_SlicerMS;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_DigitalSignatureOrigin;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_AttachedToolbars;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_UIExtensibility;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_UIExtensibility06;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_QueryTable;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_XmlMap;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CustomDataProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Diagram;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_TableSingleCells;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Timeline;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_TimelineCache;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Workbook;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_AppProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CoreProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_CustProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Drawing2010Main;
			 static const intrusive_ptr<Aspose::Cells::System::String> RelType_Drawing2010Slicer;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Relationships;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Xml;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Binary;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PrinterSettings;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Theme;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ThemeOverride;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Styles;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_WorkbookMacroEnabled;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_WorkbookMacroEnabledTemplate;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_WorkbookAddinMacroEnabled;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_VbaProject;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Workbook;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_WorkbookTemplate;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_AppProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Worksheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Chartsheet;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Comments;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Vml;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Drawing;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DrawingChart;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DrawingChartStyle;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DrawingChartColors;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SST;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_CoreProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_CustProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotCacheRecords;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotCacheDef;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotTable;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotCacheDef_Xlsb;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotCacheRecords_Xlsb;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PivotTable_Xlsb;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ActiveXXml;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ActiveXBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ExternalLink;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ExternalLinkBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_OleObject;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Chartshapes;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Table;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_TableBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Connections;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ConnectionsBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_QueryTable;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_QueryTableBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_VbaProjectSignature;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_VbaProjectSignatureAgile;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DiagramDrawing;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DiagramLayout;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DiagramStyle;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DiagramData;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_DiagramColors;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SpreadsheetmlCustProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_CustomXmlProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_RevisionLog;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_RevisionLogBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_UserNames;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_UserNamesBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_RevisionHeaders;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_RevisionHeadersBin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SlicerCacheMS;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SlicerMS;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SlicerCache_Xlsb;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Slicer_Xlsb;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_TimelineCache;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Timeline;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_ModelData;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SheetMetadata;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_CtrlProp;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_SlicerCache;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Slicer;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PackageDigitalSignatureOrigin;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_PackageDigitalSignatureXmlsignature;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_AttachedToolbars;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_Ink;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_CustomDataProps;
			 static const intrusive_ptr<Aspose::Cells::System::String> ContentType_TableSingleCells;
			 static const intrusive_ptr<Aspose::Cells::System::String> URI;
			 static const intrusive_ptr<Aspose::Cells::System::String> XMLNS_X14;
			 static const intrusive_ptr<Aspose::Cells::System::String> XMLNS_X15;
			 static const intrusive_ptr<Aspose::Cells::System::String> XMLNS;
			static intrusive_ptr<Aspose::Cells::System::String> GetFn(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map , intrusive_ptr<Aspose::Cells::System::String> header , Aspose::Cells::System::Int32 id);
			static intrusive_ptr<Aspose::Cells::System::String> EncodeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> EncodeAttributeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> DecodeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> GetDocSecurity(intrusive_ptr<Aspose::Cells::Workbook> wbook);
			static Aspose::Cells::System::Int32 GetUShort(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int64 GetNumber(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 size);
			static void SetShort(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int16 value);
			static void SetNumber(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 size , Aspose::Cells::System::Int64 value);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetFormulaValType(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::String> GetSelectedRanges(intrusive_ptr<Aspose::Cells::Worksheet> wsheet);
			static intrusive_ptr<Aspose::Cells::System::String> GetCellAreaName(intrusive_ptr<Aspose::Cells::CellArea> area);
			static intrusive_ptr<Aspose::Cells::System::String> GetCellAreaNameR1C1(intrusive_ptr<Aspose::Cells::CellArea> area);
			static intrusive_ptr<Aspose::Cells::System::String> PageOrientationTypeToString(Aspose::Cells::PageOrientationType type);
			static Aspose::Cells::PageOrientationType PageOrientationTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PrintCommentsTypeToString(Aspose::Cells::PrintCommentsType type);
			static Aspose::Cells::PrintCommentsType PrintCommentsTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PrintErrorsTypeToString(Aspose::Cells::PrintErrorsType type);
			static Aspose::Cells::PrintErrorsType PrintErrorsTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PrintOrderTypeToString(Aspose::Cells::PrintOrderType type);
			static Aspose::Cells::PrintOrderType PrintOrderTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ValidationTypeToString(Aspose::Cells::ValidationType type);
			static Aspose::Cells::ValidationType ValidationTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ConditionOperatorToString(Aspose::Cells::OperatorType type);
			static intrusive_ptr<Aspose::Cells::System::String> ValidateOperatorToString(Aspose::Cells::OperatorType type);
			static Aspose::Cells::OperatorType ValidateOperatorFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> GetAreasSqrefStrR1C1(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areaList , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx);
			static void ParseSqref(intrusive_ptr<Aspose::Cells::System::String> sqref , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areaList);
			static intrusive_ptr<Aspose::Cells::System::String> GetAreasSqrefStr(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areaList , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx);
			static intrusive_ptr<Aspose::Cells::System::String> PatternTypeToString(Aspose::Cells::BackgroundType bgType);
			static Aspose::Cells::BackgroundType PatternTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> BorderLineStyleToString(Aspose::Cells::CellBorderType lineStyle);
			static Aspose::Cells::CellBorderType BorderLineStyleFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> HorizontalAlignToString(Aspose::Cells::TextAlignmentType align);
			static Aspose::Cells::TextAlignmentType HorizontalAlignFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> VerticalAlignToString(Aspose::Cells::TextAlignmentType align);
			static Aspose::Cells::TextAlignmentType VerticalAlignFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 GetCountAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static Aspose::Cells::ValidationAlertType ValidationAlertTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::IMEModeType IMEModeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> IMEModeTypeToString(Aspose::Cells::IMEModeType type);
			static intrusive_ptr<Aspose::Cells::System::String> UrlSwap(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 PointsToPixels(Aspose::Cells::System::Int32 dpi , Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Double PointsToDPixels(Aspose::Cells::System::Int32 dpi , Aspose::Cells::System::Double points);
			static Aspose::Cells::System::Int32 EMUsToPixels(Aspose::Cells::System::Int32 emus , Aspose::Cells::System::Int32 dpi);
			static Aspose::Cells::System::Double EMUsToFPixels(Aspose::Cells::System::Int32 emus , Aspose::Cells::System::Int32 dpi);
			static Aspose::Cells::System::Double EMUsToPoints(Aspose::Cells::System::Int32 emus);
			static Aspose::Cells::System::Int32 PixelsToEMUs(Aspose::Cells::System::Double pixels , Aspose::Cells::System::Int32 dpi);
			static Aspose::Cells::System::Int32 PointsToEMUs(Aspose::Cells::System::Double points);
			static intrusive_ptr<Aspose::Cells::System::String> PlacementTypeToString(Aspose::Cells::Drawing::PlacementType type);
			static Aspose::Cells::Drawing::PlacementType PlacementTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> MsoLineStyleToString(Aspose::Cells::Drawing::MsoLineStyle style);
			static intrusive_ptr<Aspose::Cells::System::String> MsoLineStyleToVMLStrokeString(Aspose::Cells::Drawing::MsoLineStyle style);
			static Aspose::Cells::Drawing::MsoLineStyle MsoLineStyleFromVMLStrokeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> MsoLineDashStyleToVMLStrokeString(Aspose::Cells::Drawing::MsoLineDashStyle style);
			static Aspose::Cells::Drawing::MsoLineDashStyle MsoLineDashStyleFromVMLStrokeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 HexStringToInt(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> SysColorFromARGBHexStr(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> SysColorToARGBHexStr(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::String> SysColorToRGBHexStr(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			static intrusive_ptr<Aspose::Cells::System::String> LegendPositionTypeToString(Aspose::Cells::Charts::LegendPositionType type);
			static Aspose::Cells::Charts::LegendPositionType LegendPositionTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TickMarkTypeToString(Aspose::Cells::Charts::TickMarkType type);
			static Aspose::Cells::Charts::TickMarkType TickMarkTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TickLabelPositionTypeToString(Aspose::Cells::Charts::TickLabelPositionType type);
			static Aspose::Cells::Charts::TickLabelPositionType TickLabelPositionTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> CrossTypeToString(Aspose::Cells::Charts::CrossType type);
			static Aspose::Cells::Charts::CrossType CrossTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextDirectionTypeToString(Aspose::Cells::TextDirectionType type);
			static Aspose::Cells::TextDirectionType TextDirectionTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextDirectionTypeToStyleString(Aspose::Cells::TextDirectionType type);
			static Aspose::Cells::TextDirectionType TextDirectionTypeFromStyleString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> WeightTypeToString(Aspose::Cells::Drawing::WeightType type);
			static Aspose::Cells::Drawing::WeightType WeightTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> FontUnderlineTypeToTextUnderLineTypeStringChart(Aspose::Cells::FontUnderlineType type);
			static Aspose::Cells::Drawing::Texts::TextFontAlignType TextFontAlignTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextFontAlignTypeToString(Aspose::Cells::Drawing::Texts::TextFontAlignType s);
			static Aspose::Cells::Drawing::Texts::TextAutonumberScheme TextAutonumberSchemeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextAutonumberSchemeToString(Aspose::Cells::Drawing::Texts::TextAutonumberScheme s);
			static Aspose::Cells::FontUnderlineType FontUnderlineTypeFromTextUnderLineTypeString_Chart(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> FontUnderlineTypeToString(Aspose::Cells::FontUnderlineType type);
			static Aspose::Cells::FontUnderlineType FontUnderlineTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> GetNumberFormatByIndex(Aspose::Cells::System::Int32 idx);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Int64 d);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Double d);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Int32 i);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Single f);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Int16 s);
			static intrusive_ptr<Aspose::Cells::System::String> CvtToString(Aspose::Cells::System::Byte b);
			static Aspose::Cells::System::Double ParseDouble(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 ParseInt(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::UInt32 ParseUInt(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int16 ParseShort(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::Drawing::Texts::TextTabAlignmentType TextTabAlignmentTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextTabAlignmentTypeToString(Aspose::Cells::Drawing::Texts::TextTabAlignmentType s);
			static bool IsSupportedFormatConditionType(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::FormatConditionType GetFormatConditionType(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> GetFormatConditionName(Aspose::Cells::FormatConditionType type);
			static bool IsDefaultPatternFill(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Style> defaultSytle);
			static intrusive_ptr<Aspose::Cells::System::String> TrimEqualMark(intrusive_ptr<Aspose::Cells::System::String> formula);
			static intrusive_ptr<Aspose::Cells::System::String> AlignToChartTextAnchorString(Aspose::Cells::TextAlignmentType type);
			static Aspose::Cells::TextAlignmentType AlignFromChartTextAnchorString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> AlignToChartTextAlignTypeString(Aspose::Cells::TextAlignmentType type);
			static Aspose::Cells::TextAlignmentType AlignFromChartTextAlignTypeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::Charts::LabelPositionType LabelPositionTypeFromChartDLblPosString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TimeUnitToChartTimeUnitString(Aspose::Cells::Charts::TimeUnit type);
			static Aspose::Cells::Charts::TimeUnit TimeUnitFromChartTimeUnitString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TrendlineTypeToChartTrendlineTypeString(Aspose::Cells::Charts::TrendlineType type);
			static Aspose::Cells::Charts::TrendlineType TrendlineTypeFromChartTrendlineTypeString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ErrorBarDisplayTypeToChartString(Aspose::Cells::Charts::ErrorBarDisplayType type);
			static Aspose::Cells::Charts::ErrorBarDisplayType ErrorBarDisplayTypeFromChartString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ErrorBarTypeToChartString(Aspose::Cells::Charts::ErrorBarType type);
			static Aspose::Cells::Charts::ErrorBarType ErrorBarTypeFromChartString(intrusive_ptr<Aspose::Cells::System::String> s);
			static void ChartTypeToChartBarGroupingStrings(Aspose::Cells::Charts::ChartType type , intrusive_ptr<Aspose::Cells::System::String>& barDir , intrusive_ptr<Aspose::Cells::System::String>& grouping);
			static Aspose::Cells::Charts::ChartType ChartTypeFromChartBarGroupingStrings(intrusive_ptr<Aspose::Cells::System::String> barDir , intrusive_ptr<Aspose::Cells::System::String> grouping , bool is3D , intrusive_ptr<Aspose::Cells::System::String> shape);
			static intrusive_ptr<Aspose::Cells::System::String> ChartTypeToChartAreaGroupingStrings(Aspose::Cells::Charts::ChartType type);
			static Aspose::Cells::Charts::ChartType ChartTypeFromChartAreaGroupingStrings(intrusive_ptr<Aspose::Cells::System::String> grouping , bool is3D);
			static intrusive_ptr<Aspose::Cells::System::String> ChartTypeToChartLineGroupingStrings(Aspose::Cells::Charts::ChartType type);
			static Aspose::Cells::Charts::ChartType ChartTypeFromChartLineGroupingStrings(bool marker , intrusive_ptr<Aspose::Cells::System::String> grouping);
			static intrusive_ptr<Aspose::Cells::System::String> ChartMarkerTypeToChartMarkerStyleStrings(Aspose::Cells::Charts::ChartMarkerType type);
			static Aspose::Cells::Charts::ChartMarkerType ChartMarkerTypeFromChartMarkerStyleStrings(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 AddFont(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static Aspose::Cells::System::Int32 AddFont(intrusive_ptr<Aspose::Cells::OpenXML::DataFont> df , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::Font> AddFont0(intrusive_ptr<Aspose::Cells::OpenXML::DataFont> df , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::String> ChartSplitTypeToStrings(Aspose::Cells::Charts::ChartSplitType type);
			static Aspose::Cells::Charts::ChartSplitType ChartSplitTypeFromStrings(intrusive_ptr<Aspose::Cells::System::String> s);
			static bool IsSupportedChartType(Aspose::Cells::Charts::ChartType type);
			static bool IsSupportedChartTypeElmName(intrusive_ptr<Aspose::Cells::System::String> s);
			static bool IsChartTypeElmName(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ChartTypeToChartScatterStyleStrings(Aspose::Cells::Charts::ChartType type);
			static Aspose::Cells::Charts::ChartType ChartTypeFromChartScatterStyleStrings(intrusive_ptr<Aspose::Cells::System::String> style);
			static bool IsRadar(Aspose::Cells::Charts::ChartType type);
			static intrusive_ptr<Aspose::Cells::System::String> ChartTypeToChartRadarStyleStrings(Aspose::Cells::Charts::ChartType type);
			static Aspose::Cells::Charts::ChartType ChartTypeFromChartRadarStyleStrings(intrusive_ptr<Aspose::Cells::System::String> style);
			static intrusive_ptr<Aspose::Cells::System::String> GetBar3DShape(Aspose::Cells::Charts::ChartType type);
			static intrusive_ptr<Aspose::Cells::System::String> Bar3DShapeTypeToString(Aspose::Cells::Charts::Bar3DShapeType type);
			static Aspose::Cells::Charts::Bar3DShapeType Bar3DShapeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ChartFillPatternToString(Aspose::Cells::Drawing::FillPattern pattern);
			static Aspose::Cells::Drawing::FillPattern ChartFillPatternFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> IconSetTypeToString(Aspose::Cells::IconSetType type);
			static Aspose::Cells::IconSetType IconSetTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> FormatConditionValueTypeToString(Aspose::Cells::FormatConditionValueType type);
			static Aspose::Cells::TextDirectionType TextDirectionTypeFormString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> DataBarTextDirectionTypeToString(Aspose::Cells::TextDirectionType type);
			static Aspose::Cells::DataBarAxisPosition DataBarAxisPositionFormString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> DataBarAxisPositionToString(Aspose::Cells::DataBarAxisPosition type);
			static Aspose::Cells::FormatConditionValueType FormatConditionValueTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TimePeriodTypeToString(Aspose::Cells::TimePeriodType type);
			static Aspose::Cells::TimePeriodType TimePeriodTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 GetIconNum(Aspose::Cells::IconSetType type);
			static Aspose::Cells::System::Int32 GetFileEndNumber(intrusive_ptr<Aspose::Cells::System::String> fn);
			static Aspose::Cells::System::Int32 GetStringEndNumber(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PivotTableSourceTypeToString(Aspose::Cells::Pivot::PivotTableSourceType type);
			static Aspose::Cells::Pivot::PivotTableSourceType PivotTableSourceTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::System::Int32 PivotTableAutoFormatTypeToInt(Aspose::Cells::Pivot::PivotTableAutoFormatType type);
			static Aspose::Cells::Pivot::PivotTableAutoFormatType GetAutoFormatType(Aspose::Cells::System::Int32 type);
			static intrusive_ptr<Aspose::Cells::System::String> PivotFieldTypeToString(Aspose::Cells::Pivot::PivotFieldType type);
			static Aspose::Cells::Pivot::PivotFieldType PivotFieldTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PivotFieldSubtotalTypeToString(Aspose::Cells::Pivot::PivotFieldSubtotalType type);
			static Aspose::Cells::Pivot::PivotFieldSubtotalType PivotFieldSubtotalTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ConsolidationFunctionToString(Aspose::Cells::ConsolidationFunction type);
			static Aspose::Cells::ConsolidationFunction ConsolidationFunctionFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PivotFieldDataDisplayFormatToString(Aspose::Cells::Pivot::PivotFieldDataDisplayFormat type);
			static Aspose::Cells::Pivot::PivotFieldDataDisplayFormat PivotFieldDataDisplayFormatFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ShapeTxoAlignToString(Aspose::Cells::TextAlignmentType align);
			static Aspose::Cells::TextAlignmentType ShapeTxoAlignFromString(intrusive_ptr<Aspose::Cells::System::String> align);
			static Aspose::Cells::System::Int32 SchemeColorNameToIndex(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::System::String> SchemeColorNameFromIndex(Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::String> SchemeColorNameForChartFromIndex(Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::String> SwapSchemeColorNameForChart(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::System::String> GetAttribute(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , intrusive_ptr<Aspose::Cells::System::String> attrName);
			static intrusive_ptr<Aspose::Cells::Xml::XmlElement> GetSubElement(intrusive_ptr<Aspose::Cells::Xml::XmlNode> node , intrusive_ptr<Aspose::Cells::System::String> subNodeName);
			static intrusive_ptr<Aspose::Cells::System::String> ReplaceFileName(intrusive_ptr<Aspose::Cells::System::String> path , intrusive_ptr<Aspose::Cells::System::String> newFileName);
			static intrusive_ptr<Aspose::Cells::System::String> GetFolderName(intrusive_ptr<Aspose::Cells::System::String> path);
			static intrusive_ptr<Aspose::Cells::System::String> GetRelEntryName(intrusive_ptr<Aspose::Cells::System::String> entryName);
			static bool TextNeedSpaceAttr(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::String> DynamicFilterTypeToString(Aspose::Cells::DynamicFilterType s);
			static Aspose::Cells::DynamicFilterType DynamicFilterTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> DateTimeGroupingTypeToSting(Aspose::Cells::DateTimeGroupingType s);
			static Aspose::Cells::DateTimeGroupingType DateTimeGroupingTypeFromSting(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::Charts::DisplayUnitType DisplayUnitTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> DisplayUnitTypeToString(Aspose::Cells::Charts::DisplayUnitType s);
			static intrusive_ptr<Aspose::Cells::System::String> PathShadeTypeToString(Aspose::Cells::Drawing::PathShadeType path);
			static intrusive_ptr<Aspose::Cells::System::String> FilterOperatorTypeToString(Aspose::Cells::FilterOperatorType type);
			static Aspose::Cells::FilterOperatorType FilterOperatorTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::Drawing::PathShadeType PathShadeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> FillPictureTypeToString(Aspose::Cells::Drawing::FillPictureType type);
			static Aspose::Cells::Drawing::FillPictureType FillPictureTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> MirrorTypeToString(Aspose::Cells::Drawing::MirrorType type);
			static Aspose::Cells::Drawing::MirrorType MirrorTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> RectAlignmentTypeToString(Aspose::Cells::Drawing::RectangleAlignmentType type);
			static Aspose::Cells::Drawing::RectangleAlignmentType RectAlignmentTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> CalcModeTypeToString(Aspose::Cells::CalcModeType type);
			static Aspose::Cells::CalcModeType CalcModeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TextOrientationTypeToString(Aspose::Cells::TextOrientationType type);
			static Aspose::Cells::TextOrientationType TextOrientationTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> SelectionTypeToString(Aspose::Cells::Drawing::SelectionType type);
			static Aspose::Cells::Drawing::SelectionType SelectionTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::UpdateLinksType UpdateLinksTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> UpdateLinksTypeToString(Aspose::Cells::UpdateLinksType s);
			static bool GetBooleanValue(intrusive_ptr<Aspose::Cells::System::String> val , bool defaultValue);
			static bool GetBooleanValue(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::ViewType ViewTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> ViewTypeToString(Aspose::Cells::ViewType type);
			static Aspose::Cells::Charts::PlotEmptyCellsType PlotEmptyCellsTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PlotEmptyCellsTypeToString(Aspose::Cells::Charts::PlotEmptyCellsType type);
			static Aspose::Cells::Tables::TotalsCalculation TotalsCalculationFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TotalsCalculationToString(Aspose::Cells::Tables::TotalsCalculation type);
			static Aspose::Cells::Tables::TableDataSourceType TableDataSourceTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TableDataSourceTypeToString(Aspose::Cells::Tables::TableDataSourceType type);
			static Aspose::Cells::Tables::TableStyleElementType TableStyleElementTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> TableStyleElementTypeToString(Aspose::Cells::Tables::TableStyleElementType type);
			static intrusive_ptr<Aspose::Cells::System::String> GetXlEntryName(intrusive_ptr<Aspose::Cells::System::String> relTarget);
			static Aspose::Cells::System::Int32 GetParentPath(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 startIndex);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetXlEntryName(intrusive_ptr<Aspose::Cells::System::String> baseDirectory , intrusive_ptr<Aspose::Cells::System::String> relTarget , bool needRel);
			static Aspose::Cells::Drawing::PresetCameraType PresetCameraTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PresetCameraTypeToString(Aspose::Cells::Drawing::PresetCameraType type);
			static Aspose::Cells::Drawing::LightRigType LightRigTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> LightRigTypeToString(Aspose::Cells::Drawing::LightRigType type);
			static Aspose::Cells::Drawing::LightRigDirectionType LightRigDirectionTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> LightRigDirectionTypeToString(Aspose::Cells::Drawing::LightRigDirectionType type);
			static Aspose::Cells::Drawing::PresetMaterialType PresetMaterialTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PresetMaterialTypeToString(Aspose::Cells::Drawing::PresetMaterialType type);
			static Aspose::Cells::Drawing::BevelPresetType BevelPresetTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> BevelPresetTypeToString(Aspose::Cells::Drawing::BevelPresetType type);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> SysColorFromPresetColorStr(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PresetColorStrFromArgbValue(Aspose::Cells::System::Int32 rgbVal);
			static Aspose::Cells::Charts::SparklineType SparklineTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> SparklineTypeToString(Aspose::Cells::Charts::SparklineType type);
			static Aspose::Cells::Charts::SparklineAxisMinMaxType SparklineAxisMinMaxTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> SparklineAxisMinMaxTypeToString(Aspose::Cells::Charts::SparklineAxisMinMaxType type);
			static intrusive_ptr<Aspose::Cells::System::String> AutoShapeTypeToString(Aspose::Cells::Drawing::AutoShapeType s);
			static Aspose::Cells::Drawing::AutoShapeType AutoShapeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static Aspose::Cells::PresetShapeType PresetShapeTypeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PresetShapeTypeToString(Aspose::Cells::PresetShapeType type);
			static Aspose::Cells::PresetShapeType PresetShapeTypeFromAutoShapeType(Aspose::Cells::Drawing::AutoShapeType type);
			static Aspose::Cells::Drawing::AutoShapeType PresetShapeTypeToAutoShapeType(Aspose::Cells::PresetShapeType type);
			static intrusive_ptr<Aspose::Cells::System::String> ToWordArtName(Aspose::Cells::Drawing::AutoShapeType type);
			static bool IsSupportedWordArt(Aspose::Cells::Drawing::AutoShapeType type);
			static intrusive_ptr<Aspose::Cells::System::String> ShapePropertyIDToString(Aspose::Cells::MsoDrawing::ShapePropertyID id);
			static Aspose::Cells::MsoDrawing::ShapePropertyID ShapePropertyIDFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> PivotGroupByTypeToString(Aspose::Cells::Pivot::PivotGroupByType type);
			static Aspose::Cells::Pivot::PivotGroupByType PivotGroupByTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> SxLiItemTypeToString(Aspose::Cells::Pivot::SxLiItemType type);
			static Aspose::Cells::Pivot::SxLiItemType SxLiItemTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> TextOverflowTypeToString(Aspose::Cells::Drawing::TextOverflowType type);
			static Aspose::Cells::Drawing::TextOverflowType TextOverflowTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static Aspose::Cells::Drawing::Texts::TextVerticalType TextVerticalTypeFromString(intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::System::String> TextVerticalTypeToString(Aspose::Cells::Drawing::Texts::TextVerticalType type);
			static intrusive_ptr<Aspose::Cells::System::String> DataBindingLoadModeToString(Aspose::Cells::DataBindingLoadMode type);
			static Aspose::Cells::DataBindingLoadMode DataBindingLoadModeFromString(intrusive_ptr<Aspose::Cells::System::String> s);
			static intrusive_ptr<Aspose::Cells::System::String> GetSchemaString(Aspose::Cells::System::Int32 count);
			static intrusive_ptr<Aspose::Cells::System::Guid> ParseGuid(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::String> GuidToString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> guid);
			static intrusive_ptr<Aspose::Cells::System::String> CombineZipPath(intrusive_ptr<Aspose::Cells::System::String> basePath , intrusive_ptr<Aspose::Cells::System::String> path);
			 OpenXMLUtil();
		public:
			virtual ~OpenXMLUtil();
	};

}

}

}
