// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_BULLET_H
#define ASPOSE_CELLS_DRAWING_TEXTS_BULLET_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/BulletType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class BulletValue;
} } } }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;

class Bullet_Impl;

/// <summary>
/// Represents the bullet points should be applied to a paragraph.
/// </summary>
class Bullet {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Bullet_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Bullet(Bullet_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Bullet(const Bullet& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Bullet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Bullet& operator=(const Bullet& src);
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
    /// Gets the value of bullet.
    /// </summary>
    ASPOSE_CELLS_API BulletValue GetBulletValue();
    /// <summary>
    /// Gets and sets the type of bullet.
    /// </summary>
    ASPOSE_CELLS_API BulletType GetType();
    /// <summary>
    /// Gets and sets the type of bullet.
    /// </summary>
    ASPOSE_CELLS_API void SetType(BulletType value);
    /// <summary>
    /// Get and sets the name of the font.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFontName();
    /// <summary>
    /// Get and sets the name of the font.
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const U16String& value);
    /// <summary>
    /// Get and sets the name of the font.
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const char16_t* value);
    
};

} } } }

#endif
