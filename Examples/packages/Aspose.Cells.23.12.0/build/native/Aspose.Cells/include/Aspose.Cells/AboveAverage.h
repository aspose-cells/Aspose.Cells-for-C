// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ABOVEAVERAGE_H
#define ASPOSE_CELLS_ABOVEAVERAGE_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class AboveAverage_Impl;

/// <summary>
/// Describe the AboveAverage conditional formatting rule.
/// This conditional formatting rule highlights cells that
/// are above or below the average for all values in the range.
/// </summary>
class AboveAverage {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AboveAverage_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API AboveAverage();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AboveAverage(AboveAverage_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AboveAverage(const AboveAverage& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AboveAverage();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AboveAverage& operator=(const AboveAverage& src);
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
    /// Get or set the flag indicating whether the rule is an "above average" rule.
    /// 'true' indicates 'above average'.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsAboveAverage();
    /// <summary>
    /// Get or set the flag indicating whether the rule is an "above average" rule.
    /// 'true' indicates 'above average'.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAboveAverage(bool value);
    /// <summary>
    /// Get or set the flag indicating whether the 'aboveAverage' and 'belowAverage' criteria
    /// is inclusive of the average itself, or exclusive of that value.
    /// 'true' indicates to include the average value in the criteria.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsEqualAverage();
    /// <summary>
    /// Get or set the flag indicating whether the 'aboveAverage' and 'belowAverage' criteria
    /// is inclusive of the average itself, or exclusive of that value.
    /// 'true' indicates to include the average value in the criteria.
    /// Default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsEqualAverage(bool value);
    /// <summary>
    /// Get or set the number of standard deviations to include above or below the average in the
    /// conditional formatting rule.
    /// The input value must between 0 and 3 (include 0 and 3).
    /// Setting this value to 0 means stdDev is not set.
    /// The default value is 0.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStdDev();
    /// <summary>
    /// Get or set the number of standard deviations to include above or below the average in the
    /// conditional formatting rule.
    /// The input value must between 0 and 3 (include 0 and 3).
    /// Setting this value to 0 means stdDev is not set.
    /// The default value is 0.
    /// </summary>
    ASPOSE_CELLS_API void SetStdDev(int32_t value);
    
};

} }

#endif
