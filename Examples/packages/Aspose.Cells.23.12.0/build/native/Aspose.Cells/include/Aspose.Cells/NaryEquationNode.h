// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_NARYEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_NARYEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/EquationLimitLocationType.h"
#include "Aspose.Cells/EquationMathematicalOperatorType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;

class NaryEquationNode_Impl;

/// <summary>
/// This class specifies an n-ary operator equation consisting of an n-ary operator, a base (or operand), and optional upper and lower bounds.
/// </summary>
class NaryEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NaryEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NaryEquationNode(NaryEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NaryEquationNode(const NaryEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API NaryEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NaryEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NaryEquationNode& operator=(const NaryEquationNode& src);
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
    /// Whether to display the lower bound
    /// </summary>
    ASPOSE_CELLS_API bool IsHideSubscript();
    /// <summary>
    /// Whether to display the lower bound
    /// </summary>
    ASPOSE_CELLS_API void SetIsHideSubscript(bool value);
    /// <summary>
    /// Whether to display the upper bound
    /// </summary>
    ASPOSE_CELLS_API bool IsHideSuperscript();
    /// <summary>
    /// Whether to display the upper bound
    /// </summary>
    ASPOSE_CELLS_API void SetIsHideSuperscript(bool value);
    /// <summary>
    /// This attribute specifies the location of limits in n-ary operators. Limits can be either centered above and below the n-ary operator, or positioned just to the right of the operator.
    /// </summary>
    ASPOSE_CELLS_API EquationLimitLocationType GetLimitLocation();
    /// <summary>
    /// This attribute specifies the location of limits in n-ary operators. Limits can be either centered above and below the n-ary operator, or positioned just to the right of the operator.
    /// </summary>
    ASPOSE_CELLS_API void SetLimitLocation(EquationLimitLocationType value);
    /// <summary>
    /// an n-ary operator.e.g "∑".
    /// It is strongly recommended to use attribute NaryOperatorType to set n-ary operator.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.</remarks>
    ASPOSE_CELLS_API U16String GetNaryOperator();
    /// <summary>
    /// an n-ary operator.e.g "∑".
    /// It is strongly recommended to use attribute NaryOperatorType to set n-ary operator.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.</remarks>
    ASPOSE_CELLS_API void SetNaryOperator(const U16String& value);
    /// <summary>
    /// an n-ary operator.e.g "∑".
    /// It is strongly recommended to use attribute NaryOperatorType to set n-ary operator.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.</remarks>
    ASPOSE_CELLS_API void SetNaryOperator(const char16_t* value);
    /// <summary>
    /// an n-ary operator.e.g "∑"
    /// </summary>
    ASPOSE_CELLS_API EquationMathematicalOperatorType GetNaryOperatorType();
    /// <summary>
    /// an n-ary operator.e.g "∑"
    /// </summary>
    ASPOSE_CELLS_API void SetNaryOperatorType(EquationMathematicalOperatorType value);
    /// <summary>
    /// This attribute specifies the growth property of n-ary operators at the document level. When off, n-ary operators such as integrals and summations do not grow to match the size of their operand height. When on, the n-ary operator grows vertically to match its operand height.
    /// </summary>
    ASPOSE_CELLS_API bool GetNaryGrow();
    /// <summary>
    /// This attribute specifies the growth property of n-ary operators at the document level. When off, n-ary operators such as integrals and summations do not grow to match the size of their operand height. When on, the n-ary operator grows vertically to match its operand height.
    /// </summary>
    ASPOSE_CELLS_API void SetNaryGrow(bool value);
    
};

} } } }

#endif
