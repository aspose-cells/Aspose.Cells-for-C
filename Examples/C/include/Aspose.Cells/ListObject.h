#pragma once
//#include "System/Collections/ArrayList.h"
#include "TableStyleType.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Int32Helper.h"
//#include "System/Array.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "ShiftType.h"
//#include "System/Exception.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "TableStyleElementType.h"
#include "TableDataSourceType.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/CollectionBase.h"
#include "System/Text/StringBuilder.h"
#define STATIC_LISTOBJECT() 

namespace Aspose {
namespace Cells {
class QueryTable;
class CellArea;
class CopyOptions;
class Range;
class WorksheetCollection;
class XFExternsionPropertyCollection;
class XfCollection;
class Style;
class AutoFilter;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class BorderCopyOptions;
class ListColumnCollection;
class ListObjectCollection;
class TableStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace Tables {
#ifdef WIN32

	class ASPOSE_CELLS_API ListObject : public Aspose::Cells::System::Object
#else	class ListObject : public Aspose::Cells::System::Object
#endif


	{
	private:


		class StyleCache;

		 friend class ListObject::StyleCache;

		
	class StyleCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::ListObject> mParent;
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> mTableStyle;
			Aspose::Cells::WorksheetCollection* mWss;
			intrusive_ptr<Aspose::Cells::XfCollection> mStylePool;
			Aspose::Cells::System::Int32 mEmptyXF;
			Aspose::Cells::System::Int32 mNextRow;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> mCachedXF;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mBorderPrioritiesPrevRow;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mBorderPrioritiesCurRow;
			Aspose::Cells::System::Int32 mFirstSizeColumnStripe;
			Aspose::Cells::System::Int32 mSecondSizeColumnStripe;
			Aspose::Cells::System::Int32 mFistSizeRowStripe;
			Aspose::Cells::System::Int32 mSecondSizeRowStripe;
			Aspose::Cells::System::Int32 mOptionsCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mTypeArr;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Tables::BorderCopyOptions*>> mOptionsArr;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Style*>> mElementStyle;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> mKeyBuffer;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mOptionsToStyle;
			intrusive_ptr<Aspose::Cells::Style> tableBorderStyle;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowTotalHiddens;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> columnTotalHiddens;
			void ReleaseBuffers();
			void Init(Aspose::Cells::System::Int32 endRow);
			void BuildOptions(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void BuildOptions(Aspose::Cells::Tables::TableStyleElementType type , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 stripeCalc , Aspose::Cells::System::Int32 stripeSize);
			Aspose::Cells::System::Int32 BuildBorderOptionKey(Aspose::Cells::System::Int32 type , intrusive_ptr<Aspose::Cells::Tables::BorderCopyOptions> options);
	public:

			 StyleCache(intrusive_ptr<Aspose::Cells::Tables::ListObject> parent , Aspose::Cells::System::Int32 endRow);
			void CountRowColumnHidden(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetXF(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> GetStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> GetStyle(Aspose::Cells::System::Int32 xf);
			 StyleCache();
		public:
			virtual ~StyleCache();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Id;
			Aspose::Cells::System::Int32 m_startRow;
			Aspose::Cells::System::Int32 m_endRow;
			Aspose::Cells::System::Int32 m_startColumn;
			Aspose::Cells::System::Int32 m_endColumn;
			intrusive_ptr<Aspose::Cells::System::String> m_name;
			intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> m_listColumns;
			Aspose::Cells::Tables::ListObjectCollection* m_parent;
			Aspose::Cells::System::UInt32 m_ListFlags;
			intrusive_ptr<Aspose::Cells::System::String> m_CSPName;
			intrusive_ptr<Aspose::Cells::System::String> m_EntryId;
			Aspose::Cells::System::Int32 m_PosStmCache;
			Aspose::Cells::System::Int32 m_cbStmCache;
			Aspose::Cells::System::Int32 m_cchStmCache;
			Aspose::Cells::System::Int32 m_lem;
			Aspose::Cells::System::Int32 m_ConnectId;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_hashParam;
			intrusive_ptr<Aspose::Cells::System::String> m_DisplayName;
			intrusive_ptr<Aspose::Cells::System::String> m_Comment;
			Aspose::Cells::System::Byte m_styleOption;
			intrusive_ptr<Aspose::Cells::System::Object> m_tableStyle;
			Aspose::Cells::System::Int32 m_headerRowCount;
			Aspose::Cells::System::Int32 m_totalsRowCount;
			void ClearStyleCache();
			intrusive_ptr<Aspose::Cells::Tables::BorderCopyOptions> GetBorderCopyOptions(Aspose::Cells::Tables::TableStyleElementType type , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 stripeCalc , Aspose::Cells::System::Int32 stripeSize);
			intrusive_ptr<Aspose::Cells::Tables::ListObject::StyleCache> mStyleCache;
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> KeepedRels;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Read;
			Aspose::Cells::System::Int32 GetId();
			 ListObject(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> parent , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 id);
			 ListObject(intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> parent);
			void Copy(intrusive_ptr<Aspose::Cells::Tables::ListObject> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOptions);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			Aspose::Cells::System::Int32 GetStartRow();
			void SetInternalStartRow(Aspose::Cells::System::Int32 startRow);
			Aspose::Cells::System::Int32 GetStartColumn();
			void SetInternalStartColumn(Aspose::Cells::System::Int32 startColumn);
			Aspose::Cells::System::Int32 GetEndRow();
			void SetInternalEndRow(Aspose::Cells::System::Int32 endRow);
			Aspose::Cells::System::Int32 GetEndColumn();
			void SetInternalEndColumn(Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::Tables::ListColumnCollection> GetListColumns();
			void Expand(Aspose::Cells::System::Int32 startRow);
			void Resize(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool hasHeaders);
			void ResizeSettings(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool hasHeaders);
			void PutCellValue(Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOffset , intrusive_ptr<Aspose::Cells::System::Object> value);
			bool GetShowHeaderRow();
			void SetShowHeaderRow(bool value);
			void AddHeaderRow();
			void RemoveHeaderRow();
			bool GetShowTotals();
			void SetShowTotals(bool value);
			void AddTotalRows();
			void RemoveTotalRows();
			intrusive_ptr<Aspose::Cells::Range> GetDataRange();
			void UpdateColumnName();
			bool InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 number);
			bool IsAllowedToDeleteRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			bool InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 number);
			bool InsertRange(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType type);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::Tables::ListObjectCollection> GetParent();
			intrusive_ptr<Aspose::Cells::System::Object> m_Source;
			intrusive_ptr<Aspose::Cells::QueryTable> GetQueryTable();
			Aspose::Cells::Tables::TableDataSourceType m_DataSourceType;
			Aspose::Cells::Tables::TableDataSourceType GetDataSourceType();
			void Refresh();
			void ImportXml(intrusive_ptr<Aspose::Cells::System::String> xml);
			Aspose::Cells::System::UInt32 GetListFlags();
			void SetListFlags(Aspose::Cells::System::UInt32 value);
			bool GetInsertRowInsCells();
			void SetInsertRowInsCells(bool value);
			bool GetShownTotalRow();
			void SetShownTotalRow(bool value);
			bool IsSingleCell();
			void SetIsSingleCell(bool value);
			bool GetLoadCSPName();
			void SetLoadCSPName(bool value);
			bool GetLoadEntryId();
			void SetLoadEntryId(bool value);
			bool GetPublished();
			void SetPublished(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetCSPName();
			void SetCSPName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetEntryId();
			void SetEntryId(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetPosStmCache();
			void SetPosStmCache(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCbStmCache();
			void SetCbStmCache(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCchStmCache();
			void SetCchStmCache(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetLem();
			void SetLem(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetConnectionId();
			void SetConnectionId(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetHashParam();
			void SetHashParam(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			bool HasAutoFilter();
			intrusive_ptr<Aspose::Cells::AutoFilter> m_AutoFilter;
			intrusive_ptr<Aspose::Cells::AutoFilter> GetInternalAutoFilter();
			intrusive_ptr<Aspose::Cells::AutoFilter> GetAutoFilter();
			intrusive_ptr<Aspose::Cells::System::String> GetDisplayName();
			void SetDisplayName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetInnerDisplayName();
			void SetInnerDisplayName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetComment();
			void SetComment(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Byte GetStyleOption();
			void SetStyleOption(Aspose::Cells::System::Byte value);
			bool GetShowTableStyleFirstColumn();
			void SetShowTableStyleFirstColumn(bool value);
			bool GetShowTableStyleLastColumn();
			void SetShowTableStyleLastColumn(bool value);
			bool GetShowTableStyleRowStripes();
			void SetShowTableStyleRowStripes(bool value);
			bool GetShowTableStyleColumnStripes();
			void SetShowTableStyleColumnStripes(bool value);
			void ApplyStyleToRange();
			void ConvertToRange();
			bool GetEnableRowHeadersStyle();
			void SetEnableRowHeadersStyle(bool value);
			bool GetEnableColumnHeadersStyle();
			void SetEnableColumnHeadersStyle(bool value);
			bool IsDefaultTableStyle();
			void SetIsDefaultTableStyle(bool value);
			intrusive_ptr<Aspose::Cells::Tables::TableStyle> GetTableStyle();
			Aspose::Cells::Tables::TableStyleType GetTableStyleType();
			void SetTableStyleType(Aspose::Cells::Tables::TableStyleType value);
			intrusive_ptr<Aspose::Cells::System::String> GetTableStyleName();
			void SetTableStyleName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Style> m_headerRowStyle;
			intrusive_ptr<Aspose::Cells::Style> GetHeaderRowStyle();
			intrusive_ptr<Aspose::Cells::Style> m_dataStyle;
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> GatherXFEx(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetDataStyle();
			intrusive_ptr<Aspose::Cells::Style> m_borderStyle;
			intrusive_ptr<Aspose::Cells::Style> GetBorderStyle();
			intrusive_ptr<Aspose::Cells::Style> m_headerBorderStyle;
			intrusive_ptr<Aspose::Cells::Style> GetHeaderBorderStyle();
			intrusive_ptr<Aspose::Cells::Style> m_aggBorderStyle;
			intrusive_ptr<Aspose::Cells::Style> GetAggBorderStyle();
			intrusive_ptr<Aspose::Cells::Style> m_totalRowStyle;
			intrusive_ptr<Aspose::Cells::Style> GetTotalRowStyle();
			void SetInternalId(Aspose::Cells::System::Int32 Id);
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> DxfIds;
			Aspose::Cells::System::Int32 GetHeaderRowCount();
			void SetHeaderRowCount(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetRef();
			Aspose::Cells::System::Int32 GetTotalsRowCount();
			void SetTotalsRowCount(Aspose::Cells::System::Int32 value);
			bool HasFilter();
			void DoAfteReadingXlsx();
			Aspose::Cells::System::Int32 GetCellXF(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 xf);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void BuildStyleCache();
			intrusive_ptr<Aspose::Cells::CellArea> GetArea();
			 ListObject();
		public:
			virtual ~ListObject();
	};

}

}

}
