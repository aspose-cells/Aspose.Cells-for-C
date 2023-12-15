// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DYNAMICFILTER_H
#define ASPOSE_CELLS_DYNAMICFILTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"

#include "Aspose.Cells/DynamicFilterType.h"

namespace Aspose { namespace Cells {

class DynamicFilter_Impl;

/// <summary>
/// Represents the dynamic filter.
/// </summary>
class DynamicFilter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DynamicFilter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DynamicFilter(DynamicFilter_Impl* impl);
    /// <summary>
    /// Constructs from an IObject convertible to this.
    /// </summary>
    ASPOSE_CELLS_API DynamicFilter(const IObject* obj);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DynamicFilter(const DynamicFilter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DynamicFilter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DynamicFilter& operator=(const DynamicFilter& src);
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
    /// Gets and sets the dynamic filter type.
    /// </summary>
    ASPOSE_CELLS_API DynamicFilterType GetDynamicFilterType();
    /// <summary>
    /// Gets and sets the dynamic filter type.
    /// </summary>
    ASPOSE_CELLS_API void SetDynamicFilterType(DynamicFilterType value);
    
};

} }

#endif
