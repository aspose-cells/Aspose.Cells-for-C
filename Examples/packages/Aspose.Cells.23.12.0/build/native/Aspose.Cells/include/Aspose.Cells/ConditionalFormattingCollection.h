// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGCOLLECTION_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class FormatConditionCollection;
} }

namespace Aspose { namespace Cells {

class ConditionalFormattingCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="FormatCondition"/> objects.
/// </summary>
class ConditionalFormattingCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingCollection(ConditionalFormattingCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingCollection(const ConditionalFormattingCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingCollection& operator=(const ConditionalFormattingCollection& src);
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
    /// Remove all conditional formatting in the range.
    /// </summary>
    /// <param name="startRow">The start row of the range.</param>
    /// <param name="startColumn">The start column of the range.</param>
    /// <param name="totalRows">The number of rows of the range.</param>
    /// <param name="totalColumns">The number of columns of the range.</param>
    ASPOSE_CELLS_API void RemoveArea(int32_t startRow, int32_t startColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Copies conditional formatting.
    /// </summary>
    /// <param name="cfs">The conditional formatting</param>
    ASPOSE_CELLS_API void Copy(const ConditionalFormattingCollection& cfs);
    /// <summary>
    /// Gets the FormatConditions element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    ASPOSE_CELLS_API FormatConditionCollection Get(int32_t index);
    /// <summary>
    /// Adds a FormatConditions to the collection.
    /// </summary>
    /// <returns>FormatConditions object index.</returns>
    ASPOSE_CELLS_API int32_t Add();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
