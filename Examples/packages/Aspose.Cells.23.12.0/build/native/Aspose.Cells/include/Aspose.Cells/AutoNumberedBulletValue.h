// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_AUTONUMBEREDBULLETVALUE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_AUTONUMBEREDBULLETVALUE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BulletValue.h"

#include "Aspose.Cells/BulletType.h"
#include "Aspose.Cells/TextAutonumberScheme.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class AutoNumberedBulletValue_Impl;

/// <summary>
/// Represents automatic numbered bullet.
/// </summary>
class AutoNumberedBulletValue : public BulletValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AutoNumberedBulletValue_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API AutoNumberedBulletValue();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AutoNumberedBulletValue(AutoNumberedBulletValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AutoNumberedBulletValue(const AutoNumberedBulletValue& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API AutoNumberedBulletValue(const BulletValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AutoNumberedBulletValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AutoNumberedBulletValue& operator=(const AutoNumberedBulletValue& src);
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
    /// Gets and sets the starting number of the bullet.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartAt();
    /// <summary>
    /// Gets and sets the starting number of the bullet.
    /// </summary>
    ASPOSE_CELLS_API void SetStartAt(int32_t value);
    /// <summary>
    /// Represents the scheme of automatic number.
    /// </summary>
    ASPOSE_CELLS_API TextAutonumberScheme GetAutonumberScheme();
    /// <summary>
    /// Represents the scheme of automatic number.
    /// </summary>
    ASPOSE_CELLS_API void SetAutonumberScheme(TextAutonumberScheme value);
    
};

} } } }

#endif
