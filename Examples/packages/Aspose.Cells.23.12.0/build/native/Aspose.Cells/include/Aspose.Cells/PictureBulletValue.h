// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_PICTUREBULLETVALUE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_PICTUREBULLETVALUE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BulletValue.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/BulletType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;

class PictureBulletValue_Impl;

/// <summary>
/// Represents the value of the image bullet.
/// </summary>
class PictureBulletValue : public BulletValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PictureBulletValue_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PictureBulletValue();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PictureBulletValue(PictureBulletValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PictureBulletValue(const PictureBulletValue& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PictureBulletValue(const BulletValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PictureBulletValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PictureBulletValue& operator=(const PictureBulletValue& src);
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
    /// Gets the type of the bullet's value.
    /// </summary>
    ASPOSE_CELLS_API BulletType GetType();
    /// <summary>
    /// Gets and sets image data of the bullet.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Gets and sets image data of the bullet.
    /// </summary>
    ASPOSE_CELLS_API void SetImageData(const Vector<uint8_t>& value);
    
};

} } } }

#endif
