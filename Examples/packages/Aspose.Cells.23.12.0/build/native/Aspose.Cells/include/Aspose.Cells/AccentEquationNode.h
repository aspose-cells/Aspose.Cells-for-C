// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_ACCENTEQUATIONNODE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_ACCENTEQUATIONNODE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/EquationCombiningCharacterType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

using namespace Aspose::Cells;

class AccentEquationNode_Impl;

/// <summary>
/// This class specifies an accent equation, consisting of a base component and a combining diacritic.
/// </summary>
class AccentEquationNode : public EquationNode {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AccentEquationNode_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AccentEquationNode(AccentEquationNode_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AccentEquationNode(const AccentEquationNode& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API AccentEquationNode(const EquationNode& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AccentEquationNode();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AccentEquationNode& operator=(const AccentEquationNode& src);
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
    /// This attribute specifies the type of combining diacritical mark attached to the base of the accent function. The default accent character is U+0302.
    /// It is strongly recommended to use attribute AccentType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetAccentCharacter();
    /// <summary>
    /// This attribute specifies the type of combining diacritical mark attached to the base of the accent function. The default accent character is U+0302.
    /// It is strongly recommended to use attribute AccentType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetAccentCharacter(const U16String& value);
    /// <summary>
    /// This attribute specifies the type of combining diacritical mark attached to the base of the accent function. The default accent character is U+0302.
    /// It is strongly recommended to use attribute AccentType to set accent character.
    /// Use this property setting if you cannot find the character you need in a known type.
    /// </summary>
    /// <remarks>
    /// It should be noted that this property only accepts one character, and if multiple characters are passed in, only the first character is accepted.
    /// </remarks>
    ASPOSE_CELLS_API void SetAccentCharacter(const char16_t* value);
    /// <summary>
    /// Specify combining characters by type value.
    /// </summary>
    ASPOSE_CELLS_API EquationCombiningCharacterType GetAccentCharacterType();
    /// <summary>
    /// Specify combining characters by type value.
    /// </summary>
    ASPOSE_CELLS_API void SetAccentCharacterType(EquationCombiningCharacterType value);
    
};

} } } }

#endif
