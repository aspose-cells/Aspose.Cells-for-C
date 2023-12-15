// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_GROUPCHARACTEREQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_GROUPCHARACTEREQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/EquationCharacterPositionType.h"
#include "Aspose.Cells/EquationCombiningCharacterType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;

class GroupCharacterEquationNode_Impl;

/// <summary>
/// This class specifies the Group-Character function, consisting of a character drawn above or below text, often with the purpose of visually grouping items.
/// </summary>
class GroupCharacterEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GroupCharacterEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GroupCharacterEquationNode(GroupCharacterEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GroupCharacterEquationNode(const GroupCharacterEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API GroupCharacterEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GroupCharacterEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GroupCharacterEquationNode& operator=(const GroupCharacterEquationNode& src);
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
    /// Specifies a symbol(default U+23DF).
    /// It is strongly recommended to use attribute ChrType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetGroupChr();
    /// <summary>
    /// Specifies a symbol(default U+23DF).
    /// It is strongly recommended to use attribute ChrType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetGroupChr(const U16String& value);
    /// <summary>
    /// Specifies a symbol(default U+23DF).
    /// It is strongly recommended to use attribute ChrType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetGroupChr(const char16_t* value);
    /// <summary>
    /// Specify combining characters by type value.
    /// </summary>
    ASPOSE_CELLS_API EquationCombiningCharacterType GetChrType();
    /// <summary>
    /// Specify combining characters by type value.
    /// </summary>
    ASPOSE_CELLS_API void SetChrType(EquationCombiningCharacterType value);
    /// <summary>
    /// This attribute specifies the position of the character in the object
    /// </summary>
    ASPOSE_CELLS_API EquationCharacterPositionType GetPosition();
    /// <summary>
    /// This attribute specifies the position of the character in the object
    /// </summary>
    ASPOSE_CELLS_API void SetPosition(EquationCharacterPositionType value);
    /// <summary>
    /// This attribute, combined with pos of groupChrPr, specifies the vertical layout of the groupChr object. Where pos specifies the position of the grouping character, vertJc specifies the alignment of the object with respect to the baseline.
    /// </summary>
    ASPOSE_CELLS_API EquationCharacterPositionType GetVertJc();
    /// <summary>
    /// This attribute, combined with pos of groupChrPr, specifies the vertical layout of the groupChr object. Where pos specifies the position of the grouping character, vertJc specifies the alignment of the object with respect to the baseline.
    /// </summary>
    ASPOSE_CELLS_API void SetVertJc(EquationCharacterPositionType value);
    
};

} } } }

#endif
