// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTBOX_H
#define ASPOSE_CELLS_DRAWING_TEXTBOX_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {
    class EquationNode;
} } } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells::Drawing::Equations;

class TextBox_Impl;

/// <summary>
/// Encapsulates the object that represents a textbox in a spreadsheet.
/// </summary>
class TextBox : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextBox_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextBox(TextBox_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextBox(const TextBox& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TextBox(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextBox();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextBox& operator=(const TextBox& src);
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
    /// Get the specified math paragraph from the TextBody property of the TextBox object.
    /// Notice:
    /// (1) Returns NULL when the index is out of bounds or not found.
    /// (2) Also returns NULL if the specified index position is not a math paragraph.
    /// </summary>
    /// <param name="index">The position index of the math paragraph, starting from 0.</param>
    /// <returns>Returns the math paragraph specified by index.</returns>
    ASPOSE_CELLS_API EquationNode GetEquationParagraph(int32_t index);
    /// <summary>
    /// Gets the first math paragraph from the TextBody property of the TextBox object.
    /// </summary>
    /// <returns>If there has math paragraph, returns the first one, otherwise returns null.</returns>
    ASPOSE_CELLS_API EquationNode GetEquationParagraph();
    
};

} } }

#endif
