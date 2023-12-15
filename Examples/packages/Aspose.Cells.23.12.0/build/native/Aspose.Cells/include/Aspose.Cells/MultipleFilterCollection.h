// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MULTIPLEFILTERCOLLECTION_H
#define ASPOSE_CELLS_MULTIPLEFILTERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class MultipleFilterCollection_Impl;

/// <summary>
/// Represents the multiple filter collection.
/// </summary>
class MultipleFilterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MultipleFilterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API MultipleFilterCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MultipleFilterCollection(MultipleFilterCollection_Impl* impl);
    /// <summary>
    /// Constructs from an IObject convertible to this.
    /// </summary>
    ASPOSE_CELLS_API MultipleFilterCollection(const IObject* obj);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MultipleFilterCollection(const MultipleFilterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MultipleFilterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MultipleFilterCollection& operator=(const MultipleFilterCollection& src);
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
    /// Indicates whether to filter by blank.
    /// </summary>
    ASPOSE_CELLS_API bool GetMatchBlank();
    /// <summary>
    /// Indicates whether to filter by blank.
    /// </summary>
    ASPOSE_CELLS_API void SetMatchBlank(bool value);
    /// <summary>
    /// DateTimeGroupItem or a simple object.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API IObject* Get(int32_t index);
    /// <summary>
    /// Adds string filter.
    /// </summary>
    /// <param name="filter">The filter data.</param>
    ASPOSE_CELLS_API void Add(const U16String& filter);
    /// <summary>
    /// Adds string filter.
    /// </summary>
    /// <param name="filter">The filter data.</param>
    ASPOSE_CELLS_API void Add(const char16_t* filter);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
