// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DXFCOLLECTION_H
#define ASPOSE_CELLS_DXFCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells {

class DxfCollection_Impl;

/// <summary>
/// Represents the master differential formatting records.
/// </summary>
class DxfCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DxfCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DxfCollection(DxfCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DxfCollection(const DxfCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DxfCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DxfCollection& operator=(const DxfCollection& src);
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
    /// Gets the element at the specified index.
    /// </summary>
    /// <param name="index">The specified index. </param>
    /// <returns></returns>
    ASPOSE_CELLS_API Style Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
