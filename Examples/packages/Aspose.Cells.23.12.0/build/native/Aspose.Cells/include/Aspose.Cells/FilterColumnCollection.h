// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILTERCOLUMNCOLLECTION_H
#define ASPOSE_CELLS_FILTERCOLUMNCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class FilterColumn;
} }

namespace Aspose { namespace Cells {

class FilterColumnCollection_Impl;

/// <summary>
/// A collection of Filter objects that represents all the filters in an autofiltered range.
/// </summary>
class FilterColumnCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FilterColumnCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FilterColumnCollection(FilterColumnCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FilterColumnCollection(const FilterColumnCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FilterColumnCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FilterColumnCollection& operator=(const FilterColumnCollection& src);
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
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Returns a single Filter object from a collection.
    /// </summary>
    ASPOSE_CELLS_API FilterColumn GetByIndex(int32_t index);
    /// <summary>
    /// Gets <see cref="FilterColumn"/> object at the special field.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <returns>
    /// Returns <see cref="FilterColumn"/> object.
    /// </returns>
    ASPOSE_CELLS_API FilterColumn Get(int32_t fieldIndex);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
