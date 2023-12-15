// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILTERCOLUMN_H
#define ASPOSE_CELLS_FILTERCOLUMN_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/IObject.h"

#include "Aspose.Cells/FilterType.h"

namespace Aspose { namespace Cells {

class FilterColumn_Impl;

/// <summary>
/// Represents a filter for a single column. The Filter object is a member of the Filters collection
/// </summary>
class FilterColumn {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FilterColumn_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FilterColumn(FilterColumn_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FilterColumn(const FilterColumn& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FilterColumn();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FilterColumn& operator=(const FilterColumn& src);
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
    /// Indicates whether the AutoFilter button for this column is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsDropdownVisible();
    /// <summary>
    /// Indicates whether the AutoFilter button for this column is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDropdownVisible(bool value);
    /// <summary>
    /// Gets and sets the condition of filtering data.
    /// </summary>
    ASPOSE_CELLS_API IObject* GetFilter();
    /// <summary>
    /// Gets and sets the condition of filtering data.
    /// </summary>
    ASPOSE_CELLS_API void SetFilter(IObject* value);
    /// <summary>
    /// Gets and sets the type fo filtering data.
    /// </summary>
    ASPOSE_CELLS_API FilterType GetFilterType();
    /// <summary>
    /// Gets and sets the type fo filtering data.
    /// </summary>
    ASPOSE_CELLS_API void SetFilterType(FilterType value);
    /// <summary>
    /// Gets and sets the column offset in the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFieldIndex();
    /// <summary>
    /// Gets and sets the column offset in the range.
    /// </summary>
    ASPOSE_CELLS_API void SetFieldIndex(int32_t value);
    
};

} }

#endif
