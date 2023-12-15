// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_NONEBULLETVALUE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_NONEBULLETVALUE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/BulletValue.h"

#include "Aspose.Cells/BulletType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class NoneBulletValue_Impl;

/// <summary>
/// Represents no bullet.
/// </summary>
class NoneBulletValue : public BulletValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NoneBulletValue_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API NoneBulletValue();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NoneBulletValue(NoneBulletValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NoneBulletValue(const NoneBulletValue& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API NoneBulletValue(const BulletValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NoneBulletValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NoneBulletValue& operator=(const NoneBulletValue& src);
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
    
};

} } } }

#endif
