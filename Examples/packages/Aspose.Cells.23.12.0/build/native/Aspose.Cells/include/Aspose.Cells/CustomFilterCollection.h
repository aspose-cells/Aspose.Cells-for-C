// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CUSTOMFILTERCOLLECTION_H
#define ASPOSE_CELLS_CUSTOMFILTERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"

namespace Aspose { namespace Cells {
    class CustomFilter;
} }

namespace Aspose { namespace Cells {

class CustomFilterCollection_Impl;

/// <summary>
/// Represents the custom filters.
/// </summary>
class CustomFilterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomFilterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomFilterCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomFilterCollection(CustomFilterCollection_Impl* impl);
    /// <summary>
    /// Constructs from an IObject convertible to this.
    /// </summary>
    ASPOSE_CELLS_API CustomFilterCollection(const IObject* obj);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomFilterCollection(const CustomFilterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomFilterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomFilterCollection& operator=(const CustomFilterCollection& src);
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
    /// Indicates whether the two criteria have an "and" relationship.
    /// </summary>
    ASPOSE_CELLS_API bool GetAnd();
    /// <summary>
    /// Indicates whether the two criteria have an "and" relationship.
    /// </summary>
    ASPOSE_CELLS_API void SetAnd(bool value);
    /// <summary>
    /// Gets the custom filter in the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API CustomFilter Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
