// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SPARKLINECOLLECTION_H
#define ASPOSE_CELLS_CHARTS_SPARKLINECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Charts {
    class Sparkline;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class SparklineCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Sparkline"/> objects.
/// </summary>
class SparklineCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SparklineCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SparklineCollection(SparklineCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SparklineCollection(const SparklineCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SparklineCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SparklineCollection& operator=(const SparklineCollection& src);
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
    /// Gets the <see cref="Sparkline"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Sparkline Get(int32_t index);
    /// <summary>
    /// Add a sparkline.
    /// </summary>
    /// <param name="dataRange">Specifies the new data range of the sparkline.</param>
    /// <param name="row">The row index of the location.</param>
    /// <param name="column">The column index of the location.</param>
    ASPOSE_CELLS_API int32_t Add(const U16String& dataRange, int32_t row, int32_t column);
    /// <summary>
    /// Add a sparkline.
    /// </summary>
    /// <param name="dataRange">Specifies the new data range of the sparkline.</param>
    /// <param name="row">The row index of the location.</param>
    /// <param name="column">The column index of the location.</param>
    ASPOSE_CELLS_API int32_t Add(const char16_t* dataRange, int32_t row, int32_t column);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
