// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_UNKNOWEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_UNKNOWEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class UnknowEquationNode_Impl;

/// <summary>
/// Equation node class of unknown type
/// </summary>
class UnknowEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    UnknowEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API UnknowEquationNode(UnknowEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API UnknowEquationNode(const UnknowEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API UnknowEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~UnknowEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API UnknowEquationNode& operator=(const UnknowEquationNode& src);
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
