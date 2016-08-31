#pragma once
#include "System/Object.h"
#include "GrowShrinkType.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_QUERYTABLE() 

namespace Aspose {
namespace Cells {
class QueryTableFieldCollection;
class DataSorter;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API QueryTable : public Aspose::Cells::System::Object
#else	class QueryTable : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> _Parent;
			 QueryTable(intrusive_ptr<Aspose::Cells::System::Object> parent);
			intrusive_ptr<Aspose::Cells::System::String> path;
			Aspose::Cells::System::Int32 Options;
			Aspose::Cells::System::Int32 m_AutoFormatId;
			Aspose::Cells::System::Int32 m_ConnectionId;
			Aspose::Cells::System::Int32 GetConnectionId();
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> _queryTableFields;
			intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> _queryTableDeletedFields;
			intrusive_ptr<Aspose::Cells::DataSorter> _sorter;
			intrusive_ptr<Aspose::Cells::System::String> QueryTableRefreshExtLst;
			Aspose::Cells::System::Int32 m_NextId;
			Aspose::Cells::System::Int32 QSIROptions;
			Aspose::Cells::System::Int32 CcolExtraLeft;
			Aspose::Cells::System::Int32 CcolExtraRight;
			intrusive_ptr<Aspose::Cells::System::String> ExtLst;
			intrusive_ptr<Aspose::Cells::DataSorter> GetSorter();
			intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> GetQueryTableFields();
			intrusive_ptr<Aspose::Cells::QueryTableFieldCollection> GetQueryTableDeletedFields();
			bool HasHeaders();
			void SetHasHeaders(bool value);
			bool HasRowNumbers();
			void SetHasRowNumbers(bool value);
			bool GetDisableRefresh();
			void SetDisableRefresh(bool value);
			bool IsAsync();
			void SetIsAsync(bool value);
			bool IsNewAsync();
			void SetIsNewAsync(bool value);
			bool GetRefreshedOnLoad();
			void SetRefreshedOnLoad(bool value);
			Aspose::Cells::GrowShrinkType GetGrowShrinkType();
			void SetGrowShrinkType(Aspose::Cells::GrowShrinkType value);
			bool GetFillAdjacentFormulas();
			void SetFillAdjacentFormulas(bool value);
			bool GetSaveData();
			void SetSaveData(bool value);
			bool GetDisableEdit();
			void SetDisableEdit(bool value);
			bool GetPreserveFormatting();
			void SetPreserveFormatting(bool value);
			bool GetAdjustColumnWidth();
			void SetAdjustColumnWidth(bool value);
			bool GetDummyList();
			void SetDummyList(bool value);
			bool GetApplyNumberFormats();
			void SetApplyNumberFormats(bool value);
			bool GetApplyFontFormats();
			void SetApplyFontFormats(bool value);
			bool GetApplyAlignmentFormats();
			void SetApplyAlignmentFormats(bool value);
			bool GetApplyBorderFormats();
			void SetApplyBorderFormats(bool value);
			bool GetApplyPatternFormats();
			void SetApplyPatternFormats(bool value);
			bool GetApplyProtectionFormats();
			void SetApplyProtectionFormats(bool value);
			bool GetApplyWidthHeightFormats();
			void SetApplyWidthHeightFormats(bool value);
			 QueryTable();
		public:
			virtual ~QueryTable();
	};

}

}
