// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells 2022/12.
#ifndef ASPOSE_CELLS_LICENSE_H
#define ASPOSE_CELLS_LICENSE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {

class License_Impl;

/// <summary>
/// Provides methods to license the component.
/// </summary>
class License {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    License_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API License();
    /// <summary>
    /// Constructs from an implementation object. Internal use.
    /// </summary>
    License(License_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API License(const License& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~License();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API License& operator=(const License& src);
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
    /// Licenses the component.
    /// </summary>
    /// <param name="licenseName">The license file path.</param>
    ASPOSE_CELLS_API void SetLicense(U16String& licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="licenseName">The license file path.</param>
    ASPOSE_CELLS_API void SetLicense(const char16_t* licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="licenseName">A Vector<uint8_t> that contains the license.</param>
    ASPOSE_CELLS_API void SetLicense(Vector<uint8_t>& stream);
    
};

} }

#endif
