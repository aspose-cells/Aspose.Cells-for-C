#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/UInt16.h"
//#include "System/Single.h"
#include "SheetType.h"
#include "System/Guid.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/ArgumentException.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/Drawing/FontStyle.h"
//#include "System/GC.h"
#include "System/Int32.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "Worksheet.h"
#include "System/Collections/CollectionBase.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#include "ProtectionType.h"
//#include "System/Char.h"
#define STATIC_WORKSHEETCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Properties {
class BuiltInDocumentPropertyCollection;
class CustomDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}
namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagTypeCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLogCollection;
}
}
}
namespace Aspose {
namespace Cells {
class SaveOptions;
class DxfCollection;
class FormulaBin2String;
class Workbook;
class RCFormulaConverter;
class SheetsData;
class NameCollection;
class Range;
class ExternalLinkCollection;
class Font;
class XmlMapCollection;
class SupbookCollection;
class WorkbookProtection;
class Palette;
class ExternalSheetCollection;
class IStylePool;
class Formula;
class Style;
class CustomWorkbookViewCollection;
class StyleCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleCollection;
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCacheCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class FormatRecord;
}
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API WorksheetCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class WorksheetCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			bool m_IsRefreshAllConnections;
			intrusive_ptr<Aspose::Cells::System::Object> m_pivotCacheObject;
			intrusive_ptr<Aspose::Cells::FormulaBin2String> m_FormulaBin2String;
			intrusive_ptr<Aspose::Cells::RCFormulaConverter> m_RCFormulaConverter;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_SheetNames;
			intrusive_ptr<Aspose::Cells::NameCollection> m_Names;
			intrusive_ptr<Aspose::Ss::FileSystem> m_CompoundFile;
			bool useSelfs;
			Aspose::Cells::System::Byte m_MacroOptions;
			Aspose::Cells::System::Int32 selectedSheet;
			Aspose::Cells::System::Int32 m_ChartNameIndex;
			intrusive_ptr<Aspose::Cells::ExternalSheetCollection> externSheetCollection;
			intrusive_ptr<Aspose::Cells::StyleCollection> styles;
			Aspose::Cells::System::Int32 internalSupbook;
			intrusive_ptr<Aspose::Cells::SupbookCollection> supbookList;
			Aspose::Cells::System::UInt16 maxFormatIndex;
			intrusive_ptr<Aspose::Cells::Formula> formula;
			intrusive_ptr<Aspose::Cells::SheetsData> designData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fontObjList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> formatObjList;
			intrusive_ptr<Aspose::Cells::DxfCollection> m_dxfs;
			intrusive_ptr<Aspose::Cells::IStylePool> stylePool;
			void CreateSetStyles();
			void ClearDefaultStyles();
			void FindFont(intrusive_ptr<Aspose::Cells::Style> style);
			void SetProtect(Aspose::Cells::ProtectionType protectionType , intrusive_ptr<Aspose::Cells::System::String> password);
			void CreateFonts();
			void CreateFormats();
			Aspose::Cells::System::Int32 m_FirstVisibleTab;
			intrusive_ptr<Aspose::Cells::Style> m_DefaultStyle;
			intrusive_ptr<Aspose::Cells::XmlMapCollection> m_xmlMaps;
			intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> m_BuiltInDocumentProperties;
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> m_CustomDocumentProperties;
			Aspose::Cells::System::Int32 m_CharWidth;
			intrusive_ptr<Aspose::Cells::System::Object> m_OleSize;
			intrusive_ptr<Aspose::Cells::ExternalLinkCollection> m_ExternalLinks;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> pivotCaches;
			intrusive_ptr<Aspose::Cells::DxfCollection> m_SlicerDxfs;
			Aspose::Cells::Workbook* m_Workbook;
			intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> m_TableStyles;
			intrusive_ptr<Aspose::Cells::Markup::SmartTagTypeCollection> m_SmartTagTypeCollection;
			intrusive_ptr<Aspose::Cells::System::String> m_UserName;
	public:

			void Dispose();
			bool IsRefreshAllConnections();
			void SetIsRefreshAllConnections(bool value);
			Aspose::Cells::System::Int32 MaxTabId;
			Aspose::Cells::System::Int32 MaxOleId;
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrentPivotCacheObject();
			void SetCurrentPivotCacheObject(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormulaBin2String> GetFormulaBin2String();
			intrusive_ptr<Aspose::Cells::RCFormulaConverter> GetRCFormulaConverter();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ListObjectHashTable;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetSheetsNamesHashTable();
			void ClearSheetsNames();
			intrusive_ptr<Aspose::Cells::NameCollection> GetNames();
			intrusive_ptr<Aspose::Ss::FileSystem> GetCompoundFile();
			void SetCompoundFile(intrusive_ptr<Aspose::Ss::FileSystem> value);
			bool GetUseSelfs();
			void SetUseSelfs(bool value);
			intrusive_ptr<Aspose::Cells::System::String> m_CodeName;
			intrusive_ptr<Aspose::Cells::System::String> GetCodeName();
			void SetCodeName(intrusive_ptr<Aspose::Cells::System::String> value);
			bool HasMacro();
			void SetHasMacro(bool value);
			bool GetObNoMacro();
			void SetObNoMacro(bool value);
			intrusive_ptr<Aspose::Cells::CustomWorkbookViewCollection> m_CViews;
			intrusive_ptr<Aspose::Cells::CustomWorkbookViewCollection> GetCViews();
			void SetCViews(intrusive_ptr<Aspose::Cells::CustomWorkbookViewCollection> value);
			void Copy(intrusive_ptr<Aspose::Cells::WorksheetCollection> source);
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> StringTable;
			intrusive_ptr<Aspose::Cells::Palette> GetPalette();
			Aspose::Cells::System::Int32 nameIndex;
			 WorksheetCollection(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::Workbook> GetWorkbook();
			intrusive_ptr<Aspose::Cells::Worksheet> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheetByTabId(Aspose::Cells::System::Int32 tabId);
			Aspose::Cells::System::Int32 GetIndex(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::Worksheet> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			void AddWatermark();
			void CleanStringPool();
			intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> PrepareSave(intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			static intrusive_ptr<Aspose::Cells::System::Guid> SpreadsheetClsid;
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheetByCodeName(intrusive_ptr<Aspose::Cells::System::String> codeName);
			intrusive_ptr<Aspose::Cells::ExternalSheetCollection> GetExternSheets();
			intrusive_ptr<Aspose::Cells::StyleCollection> GetStyles();
			void SetActiveSheet(Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 GetActiveSheetIndex();
			void SetActiveSheetIndex(Aspose::Cells::System::Int32 value);
			void SortNames();
			void SetSelectSheet(Aspose::Cells::System::Int32 i);
			void InitDefaultSheet();
			void InitRead();
			intrusive_ptr<Aspose::Cells::Worksheet> Insert(Aspose::Cells::System::Int32 index , Aspose::Cells::SheetType sheetType);
			intrusive_ptr<Aspose::Cells::Worksheet> Insert(Aspose::Cells::System::Int32 index , Aspose::Cells::SheetType sheetType , intrusive_ptr<Aspose::Cells::System::String> sheetName);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::SheetType type);
			Aspose::Cells::System::Int32 GetInternalSupbook();
			void SetInternalSupbook(Aspose::Cells::System::Int32 value);
			void Move(Aspose::Cells::System::Int32 movedSheetIndex , Aspose::Cells::System::Int32 destSheetIndex);
			void SwapSheet(Aspose::Cells::System::Int32 sheetIndex1 , Aspose::Cells::System::Int32 sheetIndex2);
			Aspose::Cells::System::Int32 Add();
			intrusive_ptr<Aspose::Cells::Worksheet> Add(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			Aspose::Cells::System::Int32 AddInternalSheet(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::SupbookCollection> GetSupbookList();
			void SetSupbookList(intrusive_ptr<Aspose::Cells::SupbookCollection> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> FindAddinFunction(intrusive_ptr<Aspose::Cells::System::String> functionName , bool add);
			Aspose::Cells::System::UInt16 GetMaxFormatIndex();
			void SetMaxFormatIndex(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::Formula> GetFormula();
			void RemoveAt(intrusive_ptr<Aspose::Cells::System::String> name);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void Clear();
			intrusive_ptr<Aspose::Cells::Style> GetStyleByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle(Aspose::Cells::System::Int32 xf);
			intrusive_ptr<Aspose::Cells::System::String> GetFormatString(Aspose::Cells::System::Int32 formatIndex);
			intrusive_ptr<Aspose::Cells::Record::FormatRecord> GetFormatRecord(Aspose::Cells::System::Int32 formatIndex);
			Aspose::Cells::System::Int32 AddCopy(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			Aspose::Cells::System::Int32 AddCopy(Aspose::Cells::System::Int32 sheetIndex);
			void Combine(intrusive_ptr<Aspose::Cells::WorksheetCollection> secondSheets);
			intrusive_ptr<Aspose::Cells::SheetsData> GetDesignData();
			void SetDesignData(intrusive_ptr<Aspose::Cells::SheetsData> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFontObjList();
			intrusive_ptr<Aspose::Cells::Font> GetFontByIndex(Aspose::Cells::System::Int32 fontIndex);
			intrusive_ptr<Aspose::Cells::Font> GetFontOrNullByIndex(Aspose::Cells::System::Int32 fontIndex);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFormatObjList();
			intrusive_ptr<Aspose::Cells::DxfCollection> GetDxfs();
			intrusive_ptr<Aspose::Cells::IStylePool> GetStylePool();
			void SetStylePool(intrusive_ptr<Aspose::Cells::IStylePool> value);
			Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style);
			void FindFont(intrusive_ptr<Aspose::Cells::Font> font);
			Aspose::Cells::System::Int32 FindFontIndex(intrusive_ptr<Aspose::Cells::Font> font);
			Aspose::Cells::System::Int32 FindFormat(intrusive_ptr<Aspose::Cells::System::String> format);
			void Unprotect(intrusive_ptr<Aspose::Cells::System::String> password);
			intrusive_ptr<Aspose::Cells::WorkbookProtection> _Protection;
			intrusive_ptr<Aspose::Cells::WorkbookProtection> GetProtection();
			Aspose::Cells::ProtectionType GetProtectionType();
			void Protect(Aspose::Cells::ProtectionType protectionType , intrusive_ptr<Aspose::Cells::System::String> password);
			bool IsProtected();
			intrusive_ptr<Aspose::Cells::Range> GetRangeByName(intrusive_ptr<Aspose::Cells::System::String> rangeName);
			intrusive_ptr<Aspose::Cells::Range> GetRangeByName(intrusive_ptr<Aspose::Cells::System::String> rangeName , Aspose::Cells::System::Int32 currentSheetIndex , bool includeTable);
			intrusive_ptr<Aspose::Cells::Range> GetTableRangeByName(intrusive_ptr<Aspose::Cells::System::String> rangeName);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetNamedRanges();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetNamedRangesAndTables();
			Aspose::Cells::System::Int32 GetFirstVisibleTab();
			void SetFirstVisibleTab(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::Style> GetDefaultStyle();
			void SetDefaultStyle(intrusive_ptr<Aspose::Cells::Style> value);
			intrusive_ptr<Aspose::Cells::XmlMapCollection> GetXmlMaps();
			void SetXmlMaps(intrusive_ptr<Aspose::Cells::XmlMapCollection> value);
			intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> GetInternalBuiltInDocumentProperties();
			intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> GetBuiltInDocumentProperties();
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> GetInternalCustomDocumentProperties();
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> GetCustomDocumentProperties();
			Aspose::Cells::System::Int32 FindFontIndex(Aspose::Cells::System::Int32 xfIndex);
			intrusive_ptr<Aspose::Cells::Font> GetDefaultFont();
			Aspose::Cells::System::Int32 GetFontConst();
			Aspose::Cells::System::Int32 GetCharWidth();
			Aspose::Cells::System::Int32 GetWidthForOne();
			Aspose::Cells::System::Double DefRowHeight;
			void GetInternalFontConst();
			intrusive_ptr<Aspose::Cells::System::Object> GetOleSize();
			void SetOleSize(intrusive_ptr<Aspose::Cells::System::Object> value);
			void SetOleSize(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::ExternalLinkCollection> GetExternalLinks();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> GetPivotCaches();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> GetInternalPivotCaches();
			intrusive_ptr<Aspose::Cells::DxfCollection> GetSlicerDxfs();
			intrusive_ptr<Aspose::Cells::DxfCollection> GetInternalSlicerDxfs();
			intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> GetInternalTableStyles();
			intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> GetTableStyles();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagTypeCollection> GetSmartTagTypeCollection();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagTypeCollection> GetInternalSmartTagTypeCollection();
			Aspose::Cells::System::Int32 MaxTableId;
			intrusive_ptr<Aspose::Cells::System::String> GetAuthor();
			void ResetCalculationFlag(Aspose::Cells::System::Byte flag);
			void InitFormulaLeafPool();
			void ClearCachedFormula();
			void ClearCachedFormulaResult();
			bool HasNameCalculation();
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetListObjectByName(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 GetFormulaCount();
			void ClearPivots();
			bool ContainsPhoneticText();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> m_RevisionLogs;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> GetRevisionLogs();
			 WorksheetCollection();
		public:
			virtual ~WorksheetCollection();
	};

}

}
