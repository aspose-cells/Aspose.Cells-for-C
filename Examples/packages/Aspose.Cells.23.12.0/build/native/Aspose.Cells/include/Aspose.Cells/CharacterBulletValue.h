// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_CHARACTERBULLETVALUE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_CHARACTERBULLETVALUE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BulletValue.h"

#include "Aspose.Cells/BulletType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class CharacterBulletValue_Impl;

/// <summary>
/// Represents the character bullet.
/// </summary>
class CharacterBulletValue : public BulletValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CharacterBulletValue_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CharacterBulletValue();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CharacterBulletValue(CharacterBulletValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CharacterBulletValue(const CharacterBulletValue& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CharacterBulletValue(const BulletValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CharacterBulletValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CharacterBulletValue& operator=(const CharacterBulletValue& src);
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
    /// Gets the type of the bullet.
    /// </summary>
    ASPOSE_CELLS_API BulletType GetType();
    /// <summary>
    /// Gets and sets character of the bullet.
    /// </summary>
    ASPOSE_CELLS_API char16_t GetCharacter();
    /// <summary>
    /// Gets and sets character of the bullet.
    /// </summary>
    ASPOSE_CELLS_API void SetCharacter(char16_t value);
    
};

} } } }

#endif
