// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTBOXCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_TEXTBOXCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class TextBox;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class TextBoxCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="TextBox"/> objects.
/// </summary>
class TextBoxCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextBoxCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextBoxCollection(TextBoxCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextBoxCollection(const TextBoxCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextBoxCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextBoxCollection& operator=(const TextBoxCollection& src);
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
    /// Gets the <see cref="TextBox"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API TextBox Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="TextBox"/> element by the name.
    /// </summary>
    /// <param name="name">The name of the text box.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API TextBox Get(const U16String& name);
    /// <summary>
    /// Gets the <see cref="TextBox"/> element by the name.
    /// </summary>
    /// <param name="name">The name of the text box.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API TextBox Get(const char16_t* name);
    /// <summary>
    /// Adds a textbox to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">Height of textbox, in unit of pixel.</param>
    /// <param name="width">Width of textbox, in unit of pixel.</param>
    /// <returns><see cref="TextBox"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width);
    /// <summary>
    /// Remove a text box from the file.
    /// </summary>
    /// <param name="index">The text box index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Clear all text boxes.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
