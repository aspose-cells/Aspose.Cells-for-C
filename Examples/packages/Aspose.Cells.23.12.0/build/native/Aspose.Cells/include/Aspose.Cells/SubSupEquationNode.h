// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_SUBSUPEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_SUBSUPEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class SubSupEquationNode_Impl;

/// <summary>
/// This class specifies an equation that can optionally be superscript or subscript.
/// There are four main forms of this equation, superscript，subscript，superscript and subscript placed to the left of the base, superscript and subscript placed to the right of the base.
/// </summary>
class SubSupEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SubSupEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SubSupEquationNode(SubSupEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SubSupEquationNode(const SubSupEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API SubSupEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SubSupEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SubSupEquationNode& operator=(const SubSupEquationNode& src);
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
    
};

} } } }

#endif
