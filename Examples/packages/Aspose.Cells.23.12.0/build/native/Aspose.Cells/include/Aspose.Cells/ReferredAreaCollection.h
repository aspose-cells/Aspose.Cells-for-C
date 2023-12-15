// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REFERREDAREACOLLECTION_H
#define ASPOSE_CELLS_REFERREDAREACOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class ReferredArea;
} }

namespace Aspose { namespace Cells {

class ReferredAreaCollection_Impl;

/// <summary>
/// Represents all referred cells and areas.
/// </summary>
class ReferredAreaCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ReferredAreaCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ReferredAreaCollection(ReferredAreaCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ReferredAreaCollection(const ReferredAreaCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ReferredAreaCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ReferredAreaCollection& operator=(const ReferredAreaCollection& src);
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
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API ReferredArea Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
