// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONNODETYPE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONNODETYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

/// <summary>
/// Equation node type.
/// Notice:
/// (1)[1-99] Currently there is only one node in the scope, and its enumeration value is 1. The node it specifies is used to store mathematical text.
/// (2)[100-199] Indicates that the node is a component of some special function nodes.
/// (3)[200-] Indicates that the node has some special functions(Usually with 'Equation' suffix. 'EquationParagraph' is a special case.).
/// </summary>
enum class EquationNodeType {
    /// <summary>
    /// UnKnow
    /// </summary>
    UnKnow,
    /// <summary>
    /// specifies a node that stores math text
    /// </summary>
    Text,
    /// <summary>
    /// Specifies a component of type 'Base'
    /// </summary>
    Base = 100,
    /// <summary>
    /// Specifies a component of type 'Denominator'
    /// </summary>
    Denominator,
    /// <summary>
    /// Specifies a component of type 'Numerator'
    /// </summary>
    Numerator,
    /// <summary>
    /// Specifies a component of type 'FunctionName'
    /// </summary>
    FunctionName,
    /// <summary>
    /// Specifies a component of type 'Subscript'
    /// </summary>
    Subscript,
    /// <summary>
    /// Specifies a component of type 'Superscript'
    /// </summary>
    Superscript,
    /// <summary>
    /// Specifies a component of type 'Degree'
    /// </summary>
    Degree,
    /// <summary>
    /// Specifies a component of type 'MatrixRow'.A single row of the matrix
    /// </summary>
    MatrixRow,
    /// <summary>
    /// Specifies a mathematical paragraph(oMathPara).
    /// </summary>
    EquationParagraph = 200,
    /// <summary>
    /// Specifies an equation or mathematical expression(OMath).
    /// </summary>
    MathematicalEquation,
    /// <summary>
    /// Specifies fractional equation
    /// </summary>
    FractionEquation,
    /// <summary>
    /// Specifies function equation
    /// </summary>
    FunctionEquation,
    /// <summary>
    /// Specifies delimiter equation
    /// </summary>
    DelimiterEquation,
    /// <summary>
    /// Specifies n-ary operator equation
    /// </summary>
    NaryEquation,
    /// <summary>
    /// Specifies the radical equation
    /// </summary>
    RadicalEquation,
    /// <summary>
    /// Specifies superscript equation
    /// </summary>
    SuperscriptEquation,
    /// <summary>
    /// Specifies subscript equation
    /// </summary>
    SubscriptEquation,
    /// <summary>
    /// Specifies an equation with superscripts and subscripts to the right of the operands.
    /// </summary>
    SubSupEquation,
    /// <summary>
    /// Specifies an equation with superscripts and subscripts to the left of the operands.
    /// </summary>
    PreSubSupEquation,
    /// <summary>
    /// Specifies accent equation
    /// </summary>
    AccentEquation,
    /// <summary>
    /// Specifies bar equation
    /// </summary>
    BarEquation,
    /// <summary>
    /// Specifies border box equation
    /// </summary>
    BorderBoxEquation,
    /// <summary>
    /// Specifies box equation
    /// </summary>
    BoxEquation,
    /// <summary>
    /// Specifies Group-Character equation
    /// </summary>
    GroupCharacterEquation,
    /// <summary>
    /// Specifies the Matrix equation,
    /// </summary>
    MatrixEquation,
};

} } } }

#endif
