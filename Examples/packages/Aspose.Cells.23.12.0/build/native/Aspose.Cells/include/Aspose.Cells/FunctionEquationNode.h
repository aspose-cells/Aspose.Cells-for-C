// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_FUNCTIONEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_FUNCTIONEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class FunctionEquationNode_Impl;

/// <summary>
/// This class specifies the Function-Apply equation, which consists of a function name and an argument acted upon.
/// The types of the name and argument components are 'EquationNodeType.FunctionName' and 'EquationNodeType.Base' respectively.
/// </summary>
class FunctionEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FunctionEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FunctionEquationNode(FunctionEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FunctionEquationNode(const FunctionEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API FunctionEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FunctionEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FunctionEquationNode& operator=(const FunctionEquationNode& src);
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
