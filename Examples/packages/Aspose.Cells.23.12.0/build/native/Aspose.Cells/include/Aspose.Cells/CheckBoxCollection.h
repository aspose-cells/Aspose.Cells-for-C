// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_CHECKBOXCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_CHECKBOXCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class CheckBox;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class CheckBoxCollection_Impl;

/// <summary>
/// Represents a collection of <see cref="CheckBox"/> objects in a worksheet.
/// </summary>
class CheckBoxCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CheckBoxCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxCollection(CheckBoxCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxCollection(const CheckBoxCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CheckBoxCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CheckBoxCollection& operator=(const CheckBoxCollection& src);
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
    /// Adds a checkBox to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">Height of checkBox, in unit of pixel.</param>
    /// <param name="width">Width of checkBox, in unit of pixel.</param>
    /// <returns><see cref="CheckBox"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width);
    /// <summary>
    /// Gets the <see cref="CheckBox"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API CheckBox Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
