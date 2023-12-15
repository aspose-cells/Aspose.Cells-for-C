// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LOADFILTER_H
#define ASPOSE_CELLS_LOADFILTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/LoadDataFilterOptions.h"

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells {

class LoadFilter_Bridge;

/// <summary>
/// Represents the filter that provides options for loading data when loading workbook from template.
/// </summary>
/// <remarks>
/// User may specify the filter options or implement their own LoadFilter to specify how to load data.
/// </remarks>
class ASPOSE_CELLS_API2 LoadFilter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    LoadFilter_Bridge* _impl;
    /// <summary>
    /// The default filter options used by this filter.
    /// </summary>
    LoadDataFilterOptions _loadDataFilterOptions;

public:
    /// <summary>
    /// Constructs one LoadFilter with default filter options LoadDataFilterOptions::All.
    /// </summary>
    ASPOSE_CELLS_API LoadFilter();
    /// <summary>
    /// Constructs one LoadFilter with given filter options.
    /// </summary>
    /// <param name="opts">the default filter options</param>
    ASPOSE_CELLS_API explicit LoadFilter(LoadDataFilterOptions opts);
    LoadFilter(const LoadFilter& src) = delete;
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~LoadFilter();
    LoadFilter& operator=(const LoadFilter& src) = delete;
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
    /// Gets the filter options to denote what data should be loaded.
    /// </summary>
    ASPOSE_CELLS_API virtual LoadDataFilterOptions GetLoadDataFilterOptions();
    /// <summary>
    /// Sets the filter options to denote what data should be loaded.
    /// </summary>
    ASPOSE_CELLS_API virtual void SetLoadDataFilterOptions(LoadDataFilterOptions value);
    /// <summary>
    /// Specifies the sheets(indices) and order to be loaded.
    /// Default is null, that denotes to load all sheets in the default order in template file.
    /// If not null and some sheet's index is not in the returned array, then the sheet will not be loaded.
    /// </summary>
    ASPOSE_CELLS_API virtual Vector<int32_t> GetSheetsInLoadingOrder();
    /// <summary>
    /// Prepares filter options before loading given worksheet.
    /// User's implementation of LoadFilter can change the LoadDataFilterOptions here
    /// to denote how to load data for this worksheet.
    /// </summary>
    /// <param name="sheet">The worksheet to be loaded.
    /// There are only few properties can be used for the given worksheet object here
    /// because most data and properties have not been loaded. The available properties are:
    /// Name, Index, VisibilityType</param>
    ASPOSE_CELLS_API virtual void StartSheet(Worksheet& sheet);
    
};

} }

#endif
