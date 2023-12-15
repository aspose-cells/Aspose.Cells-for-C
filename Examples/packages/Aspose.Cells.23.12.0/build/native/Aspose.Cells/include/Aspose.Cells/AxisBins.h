// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_AXISBINS_H
#define ASPOSE_CELLS_CHARTS_AXISBINS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Charts {

class AxisBins_Impl;

/// <summary>
/// Represents axis bins
/// </summary>
class AxisBins {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AxisBins_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API AxisBins();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AxisBins(AxisBins_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AxisBins(const AxisBins& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AxisBins();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AxisBins& operator=(const AxisBins& src);
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
    /// Indicates whether grouping data by category
    /// </summary>
    ASPOSE_CELLS_API bool IsByCategory();
    /// <summary>
    /// Indicates whether grouping data by category
    /// </summary>
    ASPOSE_CELLS_API void SetIsByCategory(bool value);
    /// <summary>
    /// Indicates whether the axis bins are automatic.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomatic();
    /// <summary>
    /// Indicates whether the axis bins are automatic.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomatic(bool value);
    /// <summary>
    /// Gets or sets the width of axis bin
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets or sets the width of axis bin
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Gets or set the count of axis bins
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets or set the count of axis bins
    /// </summary>
    ASPOSE_CELLS_API void SetCount(int32_t value);
    /// <summary>
    /// Gets or set the overflow of axis bins
    /// </summary>
    ASPOSE_CELLS_API double GetOverflow();
    /// <summary>
    /// Gets or set the overflow of axis bins
    /// </summary>
    ASPOSE_CELLS_API void SetOverflow(double value);
    /// <summary>
    /// Gets or set the underflow of axis bins
    /// </summary>
    ASPOSE_CELLS_API double GetUnderflow();
    /// <summary>
    /// Gets or set the underflow of axis bins
    /// </summary>
    ASPOSE_CELLS_API void SetUnderflow(double value);
    /// <summary>
    /// Reset the overflow
    /// </summary>
    ASPOSE_CELLS_API void ResetOverflow();
    /// <summary>
    /// Reset the underflow
    /// </summary>
    ASPOSE_CELLS_API void ResetUnderflow();
    
};

} } }

#endif
