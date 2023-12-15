// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_BORDERBOXEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_BORDERBOXEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class BorderBoxEquationNode_Impl;

/// <summary>
/// This class specifies the Border Box function, consisting of a border drawn around an equation.
/// </summary>
class BorderBoxEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    BorderBoxEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API BorderBoxEquationNode(BorderBoxEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API BorderBoxEquationNode(const BorderBoxEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API BorderBoxEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~BorderBoxEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API BorderBoxEquationNode& operator=(const BorderBoxEquationNode& src);
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
