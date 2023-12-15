// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROTECTEDRANGECOLLECTION_H
#define ASPOSE_CELLS_PROTECTEDRANGECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ProtectedRange;
} }

namespace Aspose { namespace Cells {

class ProtectedRangeCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="ProtectedRange"/> objects.
/// </summary>
class ProtectedRangeCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ProtectedRangeCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ProtectedRangeCollection(ProtectedRangeCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ProtectedRangeCollection(const ProtectedRangeCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ProtectedRangeCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ProtectedRangeCollection& operator=(const ProtectedRangeCollection& src);
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
    /// Gets the <see cref="ProtectedRange"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ProtectedRange Get(int32_t index);
    /// <summary>
    /// Adds a <see cref="ProtectedRange"/> item to the collection.
    /// </summary>
    /// <param name="name">Range title. This is used as a descriptor, not as a named range definition.</param>
    /// <param name="startRow">Start row index of the range.</param>
    /// <param name="startColumn">Start column index of the range.</param>
    /// <param name="endRow">End row index of the range.</param>
    /// <param name="endColumn">End column index of the range.</param>
    /// <returns>object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    /// <summary>
    /// Adds a <see cref="ProtectedRange"/> item to the collection.
    /// </summary>
    /// <param name="name">Range title. This is used as a descriptor, not as a named range definition.</param>
    /// <param name="startRow">Start row index of the range.</param>
    /// <param name="startColumn">Start column index of the range.</param>
    /// <param name="endRow">End row index of the range.</param>
    /// <param name="endColumn">End column index of the range.</param>
    /// <returns>object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
