// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_RADICALEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_RADICALEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class RadicalEquationNode_Impl;

/// <summary>
/// This class specifies the radical equation, consisting of an optional degree deg(EquationNodeType.Degree) and a base.
/// </summary>
class RadicalEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RadicalEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RadicalEquationNode(RadicalEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RadicalEquationNode(const RadicalEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RadicalEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RadicalEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RadicalEquationNode& operator=(const RadicalEquationNode& src);
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
    /// Whether to hide the degree of radicals.
    /// </summary>
    ASPOSE_CELLS_API bool IsDegHide();
    /// <summary>
    /// Whether to hide the degree of radicals.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDegHide(bool value);
    
};

} } } }

#endif
