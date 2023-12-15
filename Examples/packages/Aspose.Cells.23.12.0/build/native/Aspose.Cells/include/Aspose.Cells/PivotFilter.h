// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFILTER_H
#define ASPOSE_CELLS_PIVOT_PIVOTFILTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotFilterType.h"

namespace Aspose { namespace Cells {
    class AutoFilter;
} }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotFilter_Impl;

/// <summary>
/// Represents a PivotFilter in PivotFilter Collection.
/// </summary>
class ASPOSE_CELLS_API2 PivotFilter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFilter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFilter(PivotFilter_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFilter(const PivotFilter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFilter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFilter& operator=(const PivotFilter& src);
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
    /// Gets the autofilter of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter GetAutoFilter();
    /// <summary>
    /// Gets the autofilter type of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterType GetFilterType();
    /// <summary>
    /// Gets the field index of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFieldIndex();
    /// <summary>
    /// Gets the string value1 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue1();
    /// <summary>
    /// Gets the string value1 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue1(const U16String& value);
    /// <summary>
    /// Gets the string value1 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue1(const char16_t* value);
    /// <summary>
    /// Gets the string value2 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue2();
    /// <summary>
    /// Gets the string value2 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue2(const U16String& value);
    /// <summary>
    /// Gets the string value2 of the label pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue2(const char16_t* value);
    /// <summary>
    /// Gets the measure field index of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMeasureFldIndex();
    /// <summary>
    /// Gets the measure field index of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetMeasureFldIndex(int32_t value);
    /// <summary>
    /// Gets the member property field index of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMemberPropertyFieldIndex();
    /// <summary>
    /// Gets the member property field index of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetMemberPropertyFieldIndex(int32_t value);
    /// <summary>
    /// Gets the name of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the name of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets the name of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the Evaluation Order of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEvaluationOrder();
    /// <summary>
    /// Gets the Evaluation Order of the pivot filter.
    /// </summary>
    ASPOSE_CELLS_API void SetEvaluationOrder(int32_t value);
    
};

} } }

#endif
