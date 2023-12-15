// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_DELIMITEREQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_DELIMITEREQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/EquationDelimiterShapeType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;

class DelimiterEquationNode_Impl;

/// <summary>
/// This class specifies the delimiter equation, consisting of opening and closing delimiters (such as parentheses, braces, brackets, and vertical bars), and a component contained inside.
/// The delimiter may have more than one component, with a designated separator character between each component.
/// </summary>
class DelimiterEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DelimiterEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DelimiterEquationNode(DelimiterEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DelimiterEquationNode(const DelimiterEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DelimiterEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DelimiterEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DelimiterEquationNode& operator=(const DelimiterEquationNode& src);
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
    /// Delimiter beginning character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetBeginChar();
    /// <summary>
    /// Delimiter beginning character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetBeginChar(const U16String& value);
    /// <summary>
    /// Delimiter beginning character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetBeginChar(const char16_t* value);
    /// <summary>
    /// Delimiter ending character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetEndChar();
    /// <summary>
    /// Delimiter ending character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetEndChar(const U16String& value);
    /// <summary>
    /// Delimiter ending character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetEndChar(const char16_t* value);
    /// <summary>
    /// This property specifies the growth property of the delimiter at the document level.
    /// When off, the delimiter will not grow to match the size of its component height.
    /// When enabled, the delimiter grows vertically to match its component height.
    /// </summary>
    ASPOSE_CELLS_API bool GetNaryGrow();
    /// <summary>
    /// This property specifies the growth property of the delimiter at the document level.
    /// When off, the delimiter will not grow to match the size of its component height.
    /// When enabled, the delimiter grows vertically to match its component height.
    /// </summary>
    ASPOSE_CELLS_API void SetNaryGrow(bool value);
    /// <summary>
    /// Delimiter separator character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetSeparatorChar();
    /// <summary>
    /// Delimiter separator character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetSeparatorChar(const U16String& value);
    /// <summary>
    /// Delimiter separator character.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetSeparatorChar(const char16_t* value);
    /// <summary>
    /// Specifies the shape of delimiters in the delimiter object.
    /// </summary>
    ASPOSE_CELLS_API EquationDelimiterShapeType GetDelimiterShape();
    /// <summary>
    /// Specifies the shape of delimiters in the delimiter object.
    /// </summary>
    ASPOSE_CELLS_API void SetDelimiterShape(EquationDelimiterShapeType value);
    
};

} } } }

#endif
