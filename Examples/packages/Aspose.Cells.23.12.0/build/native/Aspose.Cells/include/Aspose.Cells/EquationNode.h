// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FontSetting.h"

#include "Aspose.Cells/EquationNodeType.h"
#include "Aspose.Cells/TextNodeType.h"

namespace Aspose { namespace Cells {
    class Workbook;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing::Texts;

class EquationNode_Impl;

/// <summary>
/// Abstract class for deriving other equation nodes.
/// </summary>
class EquationNode : public FontSetting {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    EquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API EquationNode(EquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API EquationNode(const EquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API EquationNode(const FontSetting& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~EquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API EquationNode& operator=(const EquationNode& src);
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
    /// Specifies the parent node of the current node
    /// </summary>
    ASPOSE_CELLS_API EquationNode GetParentNode();
    /// <summary>
    /// Specifies the parent node of the current node
    /// </summary>
    ASPOSE_CELLS_API void SetParentNode(const EquationNode& value);
    /// <summary>
    /// Insert a node of the specified type at the end of the child node list of the current node.
    /// </summary>
    /// <param name="equationType">Types of Equation Nodes</param>
    /// <returns>If the specified type exists, the corresponding node is returned, and if the type does not exist, a node of unknown type is returned.</returns>
    ASPOSE_CELLS_API EquationNode AddChild(EquationNodeType equationType);
    /// <summary>
    /// Inserts the specified node at the end of the current node's list of child nodes.
    /// </summary>
    /// <param name="node">The specified node</param>
    ASPOSE_CELLS_API void AddChild(const EquationNode& node);
    /// <summary>
    /// Inserts a node of the specified type at the specified index position in the current node's child node list.
    /// </summary>
    /// <param name="index">index value</param>
    /// <param name="equationType">Types of Equation Nodes</param>
    /// <returns>If the specified type exists, the corresponding node is returned, and if the type does not exist, a node of unknown type is returned.</returns>
    ASPOSE_CELLS_API EquationNode InsertChild(int32_t index, EquationNodeType equationType);
    /// <summary>
    /// Inserts the specified node after the current node.
    /// </summary>
    /// <param name="equationType">Types of Equation Nodes</param>
    /// <returns>If the specified type exists, the corresponding node is returned, and if the type does not exist, a node of unknown type is returned.</returns>
    ASPOSE_CELLS_API EquationNode InsertAfter(EquationNodeType equationType);
    /// <summary>
    /// Inserts the specified node before the current node.
    /// </summary>
    /// <param name="equationType">Types of Equation Nodes</param>
    /// <returns>If the specified type exists, the corresponding node is returned, and if the type does not exist, a node of unknown type is returned.</returns>
    ASPOSE_CELLS_API EquationNode InsertBefore(EquationNodeType equationType);
    /// <summary>
    /// Returns the node at the specified index among the children of the current node.
    /// </summary>
    /// <param name="index">Index of the node</param>
    /// <returns>Returns the corresponding node if the specified node exists, otherwise returns null.</returns>
    ASPOSE_CELLS_API EquationNode GetChild(int32_t index);
    /// <summary>
    /// Removes itself from the parent.
    /// </summary>
    ASPOSE_CELLS_API void Remove();
    /// <summary>
    /// Removes the specified node from the current node's children.
    /// </summary>
    /// <param name="node">Node to be deleted.</param>
    ASPOSE_CELLS_API void RemoveChild(const EquationNode& node);
    /// <summary>
    /// Removes the node at the specified index from the current node's children.
    /// </summary>
    /// <param name="index">Index of the node</param>
    ASPOSE_CELLS_API void RemoveChild(int32_t index);
    /// <summary>
    /// Removes all the child nodes of the current node.
    /// </summary>
    ASPOSE_CELLS_API void RemoveAllChildren();
    /// <summary>
    /// Represents the type of the node.
    /// </summary>
    ASPOSE_CELLS_API TextNodeType GetType();
    /// <summary>
    /// Get the equation type of the current node
    /// </summary>
    ASPOSE_CELLS_API EquationNodeType GetEquationType();
    /// <summary>
    /// Create a node of the specified type.
    /// </summary>
    /// <param name="equationType">Types of Equation Nodes</param>
    /// <param name="workbook">The workbook object associated with the equation</param>
    /// <param name="parent">The parent node where this node is located</param>
    /// <returns>If the specified type exists, the corresponding node is returned, and if the type does not exist, a node of unknown type is returned.</returns>
    ASPOSE_CELLS_API static EquationNode CreateNode(EquationNodeType equationType, const Workbook& workbook, const EquationNode& parent);
    
};

} } } }

#endif
