// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_MATRIXEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_MATRIXEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

#include "Aspose.Cells/EquationVerticalJustificationType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class MatrixEquationNode_Impl;

/// <summary>
/// This class specifies the Matrix equation, consisting of one or more elements laid out in one or more rows and one or more columns.
/// </summary>
class MatrixEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MatrixEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MatrixEquationNode(MatrixEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MatrixEquationNode(const MatrixEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API MatrixEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MatrixEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MatrixEquationNode& operator=(const MatrixEquationNode& src);
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
    /// This attribute specifies the justification of the matrix. Text outside of the matrix can be aligned with the bottom, top, or center of a matrix function. Default, the matrix assumes center justification.
    /// </summary>
    ASPOSE_CELLS_API EquationVerticalJustificationType GetBaseJc();
    /// <summary>
    /// This attribute specifies the justification of the matrix. Text outside of the matrix can be aligned with the bottom, top, or center of a matrix function. Default, the matrix assumes center justification.
    /// </summary>
    ASPOSE_CELLS_API void SetBaseJc(EquationVerticalJustificationType value);
    /// <summary>
    /// This attribute specifies the Hide Placeholders property on a matrix. When this property is on, placeholders do not appear in the matrix.Default, placeholders do appear such that the locations where text can be inserted are made visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidePlaceholder();
    /// <summary>
    /// This attribute specifies the Hide Placeholders property on a matrix. When this property is on, placeholders do not appear in the matrix.Default, placeholders do appear such that the locations where text can be inserted are made visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidePlaceholder(bool value);
    
};

} } } }

#endif
