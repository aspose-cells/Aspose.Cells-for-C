// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROTECTEDRANGE_H
#define ASPOSE_CELLS_PROTECTEDRANGE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells {

class ProtectedRange_Impl;

/// <summary>
/// A specified range to be allowed to edit when the sheet protection is ON.
/// </summary>
class ProtectedRange {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ProtectedRange_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ProtectedRange(ProtectedRange_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ProtectedRange(const ProtectedRange& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ProtectedRange();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ProtectedRange& operator=(const ProtectedRange& src);
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
    /// Gets the Range title. This is used as a descriptor, not as a named range definition.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the Range title. This is used as a descriptor, not as a named range definition.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets the Range title. This is used as a descriptor, not as a named range definition.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the <see cref="CellArea"/> object represents the cell area to be protected.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetCellArea();
    /// <summary>
    /// Gets all referred areas.
    /// </summary>
    /// <returns>Returns all referred areas.</returns>
    ASPOSE_CELLS_API Vector<CellArea> GetAreas();
    /// <summary>
    /// Adds a referred area to this
    /// </summary>
    /// <param name="startRow">The start row.</param>
    /// <param name="startColumn">The start column.</param>
    /// <param name="endRow">The end row.</param>
    /// <param name="endColumn">The end column.</param>
    ASPOSE_CELLS_API void AddArea(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Indicates whether the worksheets is protected with password.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtectedWithPassword();
    /// <summary>
    /// Represents the password to protect the range.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPassword();
    /// <summary>
    /// Represents the password to protect the range.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const U16String& value);
    /// <summary>
    /// Represents the password to protect the range.
    /// </summary>
    ASPOSE_CELLS_API void SetPassword(const char16_t* value);
    /// <summary>
    /// The security descriptor defines user accounts who may edit this range without providing a password to access the range.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSecurityDescriptor();
    /// <summary>
    /// The security descriptor defines user accounts who may edit this range without providing a password to access the range.
    /// </summary>
    ASPOSE_CELLS_API void SetSecurityDescriptor(const U16String& value);
    /// <summary>
    /// The security descriptor defines user accounts who may edit this range without providing a password to access the range.
    /// </summary>
    ASPOSE_CELLS_API void SetSecurityDescriptor(const char16_t* value);
    
};

} }

#endif
