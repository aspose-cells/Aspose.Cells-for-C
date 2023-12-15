// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_BAREQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_BAREQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

#include "Aspose.Cells/EquationCharacterPositionType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class BarEquationNode_Impl;

/// <summary>
/// This class specifies the bar equation, consisting of a base argument and an overbar or underbar.
/// </summary>
class BarEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    BarEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API BarEquationNode(BarEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API BarEquationNode(const BarEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API BarEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~BarEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API BarEquationNode& operator=(const BarEquationNode& src);
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
    /// This attribute specifies the position of the bar in the bar object
    /// </summary>
    ASPOSE_CELLS_API EquationCharacterPositionType GetBarPosition();
    /// <summary>
    /// This attribute specifies the position of the bar in the bar object
    /// </summary>
    ASPOSE_CELLS_API void SetBarPosition(EquationCharacterPositionType value);
    
};

} } } }

#endif
