#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Byte.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PROTECTION() 

namespace Aspose {
namespace Cells {
namespace Encryption {
class EncrypterInfo;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Protection : public Aspose::Cells::System::Object
#else	class Protection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_IsDeletingColumnsAllowed;
			bool m_IsDeletingRowsAllowed;
			bool m_IsFilteringAllowed;
			bool m_IsFormattingCellsAllowed;
			bool m_IsFormattingColumnsAllowed;
			bool m_IsFormattingRowsAllowed;
			bool m_IsInsertingColumnsAllowed;
			bool m_IsInsertingHyperlinksAllowed;
			bool m_IsInsertingRowsAllowed;
			bool m_IsSortingAllowed;
			bool m_IsUsingPivotTablesAllowed;
			bool m_IsEditingContentsAllowed;
			bool m_IsEditingObjectsAllowed;
			bool m_IsEditingScenariosAllowed;
			bool m_IsSelectingUnlockedCellsAllowed;
			bool m_IsSelectingLockedCellsAllowed;
			intrusive_ptr<Aspose::Cells::System::String> m_Password;
	public:

			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> _AlgorithmInfo;
			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> GetAlgorithmInfo();
			void SetAlgorithmInfo(intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> value);
			 Protection();
			void Copy(intrusive_ptr<Aspose::Cells::Protection> source);
			void GetProtectionSetting(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			bool GetAllowDeletingColumn();
			void SetAllowDeletingColumn(bool value);
			bool IsDeletingColumnsAllowed();
			void SetIsDeletingColumnsAllowed(bool value);
			bool GetAllowDeletingRow();
			void SetAllowDeletingRow(bool value);
			bool IsDeletingRowsAllowed();
			void SetIsDeletingRowsAllowed(bool value);
			bool GetAllowFiltering();
			void SetAllowFiltering(bool value);
			bool IsFilteringAllowed();
			void SetIsFilteringAllowed(bool value);
			bool GetAllowFormattingCell();
			void SetAllowFormattingCell(bool value);
			bool IsFormattingCellsAllowed();
			void SetIsFormattingCellsAllowed(bool value);
			bool GetAllowFormattingColumn();
			void SetAllowFormattingColumn(bool value);
			bool IsFormattingColumnsAllowed();
			void SetIsFormattingColumnsAllowed(bool value);
			bool GetAllowFormattingRow();
			void SetAllowFormattingRow(bool value);
			bool IsFormattingRowsAllowed();
			void SetIsFormattingRowsAllowed(bool value);
			bool GetAllowInsertingColumn();
			void SetAllowInsertingColumn(bool value);
			bool IsInsertingColumnsAllowed();
			void SetIsInsertingColumnsAllowed(bool value);
			bool GetAllowInsertingHyperlink();
			void SetAllowInsertingHyperlink(bool value);
			bool IsInsertingHyperlinksAllowed();
			void SetIsInsertingHyperlinksAllowed(bool value);
			bool GetAllowInsertingRow();
			void SetAllowInsertingRow(bool value);
			bool IsInsertingRowsAllowed();
			void SetIsInsertingRowsAllowed(bool value);
			bool GetAllowSorting();
			void SetAllowSorting(bool value);
			bool IsSortingAllowed();
			void SetIsSortingAllowed(bool value);
			bool GetAllowUsingPivotTable();
			void SetAllowUsingPivotTable(bool value);
			bool IsUsingPivotTablesAllowed();
			void SetIsUsingPivotTablesAllowed(bool value);
			bool GetAllowEditingContent();
			void SetAllowEditingContent(bool value);
			bool IsEditingContentsAllowed();
			void SetIsEditingContentsAllowed(bool value);
			bool GetAllowEditingObject();
			void SetAllowEditingObject(bool value);
			bool IsEditingObjectsAllowed();
			void SetIsEditingObjectsAllowed(bool value);
			bool GetAllowEditingScenario();
			void SetAllowEditingScenario(bool value);
			bool IsEditingScenariosAllowed();
			void SetIsEditingScenariosAllowed(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetPassword();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::UInt16 GetHashPassword();
			void SetHashPassword(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::Int32 GetPasswordHash();
			bool IsProtectedWithPassword();
			bool VerifyPassword(intrusive_ptr<Aspose::Cells::System::String> password);
			bool GetAllowSelectingLockedCell();
			void SetAllowSelectingLockedCell(bool value);
			bool IsSelectingLockedCellsAllowed();
			void SetIsSelectingLockedCellsAllowed(bool value);
			bool GetAllowSelectingUnlockedCell();
			void SetAllowSelectingUnlockedCell(bool value);
			bool IsSelectingUnlockedCellsAllowed();
			void SetIsSelectingUnlockedCellsAllowed(bool value);
		public:
			virtual ~Protection();
	};

}

}
