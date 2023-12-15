// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_TEXTRUNEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_TEXTRUNEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;

class TextRunEquationNode_Impl;

/// <summary>
/// This class in the equation node is used to store the actual content(a sequence of mathematical text) of the equation.
/// Usually a node object per character.
/// </summary>
class TextRunEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextRunEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextRunEquationNode(TextRunEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextRunEquationNode(const TextRunEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TextRunEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextRunEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextRunEquationNode& operator=(const TextRunEquationNode& src);
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
    /// Set the content of the text node(Usually a node object per character).
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Set the content of the text node(Usually a node object per character).
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Set the content of the text node(Usually a node object per character).
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    
};

} } } }

#endif
