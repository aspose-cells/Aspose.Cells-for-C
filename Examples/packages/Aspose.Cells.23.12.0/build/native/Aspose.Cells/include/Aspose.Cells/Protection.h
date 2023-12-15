// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROTECTION_H
#define ASPOSE_CELLS_PROTECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class Protection_Impl;

/// <summary>
/// Represents the various types of protection options available for a worksheet.
/// </summary>
class Protection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Protection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Protection(Protection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Protection(const Protection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Protection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Protection& operator=(const Protection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Copy protection info.
    /// </summary>
    /// <param name="source"></param>
    ASPOSE_CELLS_API void Copy(const Protection& source);
    /// <summary>
    /// Represents if the deletion of columns is allowed on a protected worksheet.
    /// </summary>
    /// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
    /// and "Select unlocked cells" option must be enabled. </remarks>
    ASPOSE_CELLS_API bool GetAllowDeletingColumn();
    /// <summary>
    /// Represents if the deletion of columns is allowed on a protected worksheet.
    /// </summary>
    /// <remarks>The columns containing the cells to be deleted must be unlocked when the sheet is protected,
    /// and "Select unlocked cells" option must be enabled. </remarks>
    ASPOSE_CELLS_API void SetAllowDeletingColumn(bool value);
    /// <summary>
    /// Represents if the deletion of rows is allowed on a protected worksheet.
    /// </summary>
    /// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
    /// and "Select unlocked cells" option must be enabled. </remarks>
    ASPOSE_CELLS_API bool GetAllowDeletingRow();
    /// <summary>
    /// Represents if the deletion of rows is allowed on a protected worksheet.
    /// </summary>
    /// <remarks>The rows containing the cells to be deleted must be unlocked when the sheet is protected,
    /// and "Select unlocked cells" option must be enabled. </remarks>
    ASPOSE_CELLS_API void SetAllowDeletingRow(bool value);
    /// <summary>
    /// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowFiltering();
    /// <summary>
    /// Represents if the user is allowed to make use of an AutoFilter that was created before the sheet was protected.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowFiltering(bool value);
    /// <summary>
    /// Represents if the formatting of cells is allowed on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowFormattingCell();
    /// <summary>
    /// Represents if the formatting of cells is allowed on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowFormattingCell(bool value);
    /// <summary>
    /// Represents if the formatting of columns is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowFormattingColumn();
    /// <summary>
    /// Represents if the formatting of columns is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API void SetAllowFormattingColumn(bool value);
    /// <summary>
    /// Represents if the formatting of rows is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowFormattingRow();
    /// <summary>
    /// Represents if the formatting of rows is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API void SetAllowFormattingRow(bool value);
    /// <summary>
    /// Represents if the insertion of columns is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowInsertingColumn();
    /// <summary>
    /// Represents if the insertion of columns is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API void SetAllowInsertingColumn(bool value);
    /// <summary>
    /// Represents if the insertion of hyperlinks is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowInsertingHyperlink();
    /// <summary>
    /// Represents if the insertion of hyperlinks is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API void SetAllowInsertingHyperlink(bool value);
    /// <summary>
    /// Represents if the insertion of rows is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowInsertingRow();
    /// <summary>
    /// Represents if the insertion of rows is allowed on a protected worksheet
    /// </summary>
    ASPOSE_CELLS_API void SetAllowInsertingRow(bool value);
    /// <summary>
    /// Represents if the sorting option is allowed on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowSorting();
    /// <summary>
    /// Represents if the sorting option is allowed on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowSorting(bool value);
    /// <summary>
    /// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowUsingPivotTable();
    /// <summary>
    /// Represents if the user is allowed to manipulate pivot tables on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowUsingPivotTable(bool value);
    /// <summary>
    /// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowEditingContent();
    /// <summary>
    /// Represents if the user is allowed to edit contents of locked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowEditingContent(bool value);
    /// <summary>
    /// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowEditingObject();
    /// <summary>
    /// Represents if the user is allowed to manipulate drawing objects on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowEditingObject(bool value);
    /// <summary>
    /// Represents if the user is allowed to edit scenarios on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowEditingScenario();
    /// <summary>
    /// Represents if the user is allowed to edit scenarios on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowEditingScenario(bool value);
    /// <summary>
    /// Represents the password to protect the worksheet.
    /// </summary>
    /// <remarks>
    /// If password is set to null or blank string, you can unprotect the worksheet or workbook without using a password. Otherwise, you must specify the password to unprotect the worksheet or workbook.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetPassword();
    /// <summary>
    /// Represents the password to protect the worksheet.
    /// </summary>
    /// <remarks>
    /// If password is set to null or blank string, you can unprotect the worksheet or workbook without using a password. Otherwise, you must specify the password to unprotect the worksheet or workbook.
    /// </remarks>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Represents the password to protect the worksheet.
    /// </summary>
    /// <remarks>
    /// If password is set to null or blank string, you can unprotect the worksheet or workbook without using a password. Otherwise, you must specify the password to unprotect the worksheet or workbook.
    /// </remarks>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// Gets the hash of current password.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPasswordHash();
    /// <summary>
    /// Indicates whether the worksheets is protected with password.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtectedWithPassword();
    /// <summary>
    /// Verifies password.
    /// </summary>
    /// <param name="password">The password.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool VerifyPassword(const U16String& password);
    /// <summary>
    /// Verifies password.
    /// </summary>
    /// <param name="password">The password.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool VerifyPassword(const char16_t* password);
    /// <summary>
    /// Represents if the user is allowed to select locked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowSelectingLockedCell();
    /// <summary>
    /// Represents if the user is allowed to select locked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowSelectingLockedCell(bool value);
    /// <summary>
    /// Represents if the user is allowed to select unlocked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowSelectingUnlockedCell();
    /// <summary>
    /// Represents if the user is allowed to select unlocked cells on a protected worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowSelectingUnlockedCell(bool value);
    
};

} }

#endif
