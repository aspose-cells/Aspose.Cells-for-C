// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_FRACTIONEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_FRACTIONEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"

#include "Aspose.Cells/EquationFractionType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

class FractionEquationNode_Impl;

/// <summary>
/// This class  specifies the fraction equation, consisting of a numerator and denominator separated by a fraction bar. The fraction bar can be horizontal or diagonal, depending on the fraction properties. The fraction equation is also used to represent the stack function, which places one element above another, with no fraction bar.
/// </summary>
class FractionEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FractionEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FractionEquationNode(FractionEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FractionEquationNode(const FractionEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API FractionEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FractionEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FractionEquationNode& operator=(const FractionEquationNode& src);
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
    /// This specifies the type of fraction ; the default is 'Bar'.
    /// </summary>
    ASPOSE_CELLS_API EquationFractionType GetFractionType();
    /// <summary>
    /// This specifies the type of fraction ; the default is 'Bar'.
    /// </summary>
    ASPOSE_CELLS_API void SetFractionType(EquationFractionType value);
    
};

} } } }

#endif
