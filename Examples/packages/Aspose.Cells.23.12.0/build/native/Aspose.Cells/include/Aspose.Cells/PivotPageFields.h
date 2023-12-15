// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTPAGEFIELDS_H
#define ASPOSE_CELLS_PIVOT_PIVOTPAGEFIELDS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotPageFields_Impl;

/// <summary>
/// Represents the pivot page field items
/// if the pivot table data source is consolidation ranges.
/// It only can contain up to 4 fields.
/// </summary>
class PivotPageFields {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotPageFields_Impl* _impl;
    
public:
    /// <summary>
    /// Represents the pivot page field items.
    /// </summary>
    ASPOSE_CELLS_API PivotPageFields();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotPageFields(PivotPageFields_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotPageFields(const PivotPageFields& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotPageFields();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotPageFields& operator=(const PivotPageFields& src);
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
    /// Adds a page field.
    /// </summary>
    /// <param name="pageItems">Page field item label</param>
    ASPOSE_CELLS_API void AddPageField(const Vector<U16String>& pageItems);
    /// <summary>
    /// Gets the number of page fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageFieldCount();
    /// <summary>
    /// Sets which item label in each page field to use to identify the data range.
    /// The pageItemIndex.Length must be equal to PageFieldCount, so please add the page field first.
    /// </summary>
    /// <param name="rangeIndex">The consolidation data range index.</param>
    /// <param name="pageItemIndex">The page item index in the each page field.
    /// pageItemIndex[2] = 1 means the second item in the third field to use to identify this range.
    /// pageItemIndex[1] = -1 means no item in the second field to use to identify this range
    /// and MS will auto create "blank" item in the second field  to identify this range.
    /// </param>
    ASPOSE_CELLS_API void AddIdentify(int32_t rangeIndex, const Vector<int32_t>& pageItemIndex);
    
};

} } }

#endif
