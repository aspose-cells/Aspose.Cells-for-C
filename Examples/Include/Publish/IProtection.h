#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		class IProtection;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the various types of protection options available for a worksheet. 
			/// Only used in ExcelXP and above version.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Allowing users to select locked cells of the worksheet
			/// worksheet->GetIProtection()->SetAllowSelectingLockedCell(true);
			/// //Allowing users to select unlocked cells of the worksheet
			/// worksheet->GetIProtection()->SetAllowSelectingUnlockedCell(true);
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IProtection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Copy protection info.
			/// </summary>
			/// <param name="source" />
			/// 
			 virtual void 		Copy(intrusive_ptr<Aspose::Cells::IProtection> source)=0;
			/// <summary>
			/// Represents if the deletion of columns is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			 virtual bool GetAllowDeletingColumn()=0;
			/// <summary>
			/// Represents if the deletion of columns is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			 virtual void SetAllowDeletingColumn(bool value)=0;
			/// <summary>
			/// Represents if the deletion of columns is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowDeletingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsDeletingColumnsAllowed()=0;
			/// <summary>
			/// Represents if the deletion of columns is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowDeletingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsDeletingColumnsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the deletion of rows is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			 virtual bool GetAllowDeletingRow()=0;
			/// <summary>
			/// Represents if the deletion of rows is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			 virtual void SetAllowDeletingRow(bool value)=0;
			/// <summary>
			/// Represents if the deletion of rows is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowDeletingRow().
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsDeletingRowsAllowed()=0;
			/// <summary>
			/// Represents if the deletion of rows is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
			/// and "Select unlocked cells" option must be enabled. </remarks>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowDeletingRow().
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsDeletingRowsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected. 
			/// </summary>
			 virtual bool GetAllowFiltering()=0;
			/// <summary>
			/// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected. 
			/// </summary>
			 virtual void SetAllowFiltering(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected. 
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowFiltering(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsFilteringAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected. 
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowFiltering(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsFilteringAllowed(bool value)=0;
			/// <summary>
			/// Represents if the formatting of cells is allowed on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowFormattingCell()=0;
			/// <summary>
			/// Represents if the formatting of cells is allowed on a protected worksheet.
			/// </summary>
			 virtual void SetAllowFormattingCell(bool value)=0;
			/// <summary>
			/// Represents if the formatting of cells is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowFormattingCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsFormattingCellsAllowed()=0;
			/// <summary>
			/// Represents if the formatting of cells is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowFormattingCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsFormattingCellsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the formatting of columns is allowed on a protected worksheet
			/// </summary>
			 virtual bool GetAllowFormattingColumn()=0;
			/// <summary>
			/// Represents if the formatting of columns is allowed on a protected worksheet
			/// </summary>
			 virtual void SetAllowFormattingColumn(bool value)=0;
			/// <summary>
			/// Represents if the formatting of columns is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowFormattingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsFormattingColumnsAllowed()=0;
			/// <summary>
			/// Represents if the formatting of columns is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowFormattingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsFormattingColumnsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the formatting of rows is allowed on a protected worksheet
			/// </summary>
			 virtual bool GetAllowFormattingRow()=0;
			/// <summary>
			/// Represents if the formatting of rows is allowed on a protected worksheet
			/// </summary>
			 virtual void SetAllowFormattingRow(bool value)=0;
			/// <summary>
			/// Represents if the formatting of rows is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowFormattingRow(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsFormattingRowsAllowed()=0;
			/// <summary>
			/// Represents if the formatting of rows is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowFormattingRow(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsFormattingRowsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the insertion of columns is allowed on a protected worksheet
			/// </summary>
			 virtual bool GetAllowInsertingColumn()=0;
			/// <summary>
			/// Represents if the insertion of columns is allowed on a protected worksheet
			/// </summary>
			 virtual void SetAllowInsertingColumn(bool value)=0;
			/// <summary>
			/// Represents if the insertion of columns is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowInsertingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsInsertingColumnsAllowed()=0;
			/// <summary>
			/// Represents if the insertion of columns is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowInsertingColumn(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsInsertingColumnsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the insertion of hyperlinks is allowed on a protected worksheet
			/// </summary>
			 virtual bool GetAllowInsertingHyperlink()=0;
			/// <summary>
			/// Represents if the insertion of hyperlinks is allowed on a protected worksheet
			/// </summary>
			 virtual void SetAllowInsertingHyperlink(bool value)=0;
			/// <summary>
			/// Represents if the insertion of hyperlinks is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowInsertingHyperlink(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsInsertingHyperlinksAllowed()=0;
			/// <summary>
			/// Represents if the insertion of hyperlinks is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowInsertingHyperlink(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsInsertingHyperlinksAllowed(bool value)=0;
			/// <summary>
			/// Represents if the insertion of rows is allowed on a protected worksheet
			/// </summary>
			 virtual bool GetAllowInsertingRow()=0;
			/// <summary>
			/// Represents if the insertion of rows is allowed on a protected worksheet
			/// </summary>
			 virtual void SetAllowInsertingRow(bool value)=0;
			/// <summary>
			/// Represents if the insertion of rows is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowInsertingRow(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsInsertingRowsAllowed()=0;
			/// <summary>
			/// Represents if the insertion of rows is allowed on a protected worksheet
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowInsertingRow(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsInsertingRowsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the sorting option is allowed on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowSorting()=0;
			/// <summary>
			/// Represents if the sorting option is allowed on a protected worksheet.
			/// </summary>
			 virtual void SetAllowSorting(bool value)=0;
			/// <summary>
			/// Represents if the sorting option is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowSorting(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsSortingAllowed()=0;
			/// <summary>
			/// Represents if the sorting option is allowed on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowSorting(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsSortingAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowUsingPivotTable()=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
			/// </summary>
			 virtual void SetAllowUsingPivotTable(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowUsingPivotTable(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsUsingPivotTablesAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowUsingPivotTable(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsUsingPivotTablesAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowEditingContent()=0;
			/// <summary>
			/// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
			/// </summary>
			 virtual void SetAllowEditingContent(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowEditingContent(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsEditingContentsAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowEditingContent(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsEditingContentsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowEditingObject()=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
			/// </summary>
			 virtual void SetAllowEditingObject(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowEditingObject(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsEditingObjectsAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowEditingObject(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsEditingObjectsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to edit scenarios on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowEditingScenario()=0;
			/// <summary>
			/// Represents if the user is allowed to edit scenarios on a protected worksheet.
			/// </summary>
			 virtual void SetAllowEditingScenario(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to edit scenarios on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowEditingScenario(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsEditingScenariosAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to edit scenarios on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowEditingScenario(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsEditingScenariosAllowed(bool value)=0;
			/// <summary>
			/// Represents the password to protect the worksheet.
			/// </summary>
			/// <remarks>
			/// If password is set to null or blank string, you can unprotect the worksheet or workbook without using a password. Otherwise, you must specify the password to unprotect the worksheet or workbook.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPassword()=0;
			/// <summary>
			/// Represents the password to protect the worksheet.
			/// </summary>
			/// <remarks>
			/// If password is set to null or blank string, you can unprotect the worksheet or workbook without using a password. Otherwise, you must specify the password to unprotect the worksheet or workbook.
			/// </remarks>
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the hash of current password.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPasswordHash()=0;
			/// <summary>
			/// Indicates whether the worksheets is protected with password.
			/// </summary>
			 virtual bool IsProtectedWithPassword()=0;
			/// <summary>
			///  Verifies password.
			/// </summary>
			/// <param name="password" >The password.</param>
			/// <returns/>
			/// 
			 virtual bool VerifyPassword(intrusive_ptr<Aspose::Cells::System::String> password)=0;
			/// <summary>
			/// Represents if the user is allowed to select locked cells on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowSelectingLockedCell()=0;
			/// <summary>
			/// Represents if the user is allowed to select locked cells on a protected worksheet.
			/// </summary>
			 virtual void SetAllowSelectingLockedCell(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to select locked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowSelectingLockedCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsSelectingLockedCellsAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to select locked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowSelectingLockedCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsSelectingLockedCellsAllowed(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to select unlocked cells on a protected worksheet.
			/// </summary>
			 virtual bool GetAllowSelectingUnlockedCell()=0;
			/// <summary>
			/// Represents if the user is allowed to select unlocked cells on a protected worksheet.
			/// </summary>
			 virtual void SetAllowSelectingUnlockedCell(bool value)=0;
			/// <summary>
			/// Represents if the user is allowed to select unlocked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetAllowSelectingUnlockedCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsSelectingUnlockedCellsAllowed()=0;
			/// <summary>
			/// Represents if the user is allowed to select unlocked cells on a protected worksheet.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetAllowSelectingUnlockedCell(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsSelectingUnlockedCellsAllowed(bool value)=0;

	};
}
}
