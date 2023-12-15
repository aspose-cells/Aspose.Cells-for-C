// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_TRENDLINECOLLECTION_H
#define ASPOSE_CELLS_CHARTS_TRENDLINECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TrendlineType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class Trendline;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class TrendlineCollection_Impl;

/// <summary>
/// Represents a collection of all the <see cref="Trendline"/> objects for the specified data series.
/// </summary>
class TrendlineCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TrendlineCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TrendlineCollection(TrendlineCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TrendlineCollection(const TrendlineCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TrendlineCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TrendlineCollection& operator=(const TrendlineCollection& src);
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
    /// Adds a <see cref="Trendline"/> object to this collection with specified type.
    /// </summary>
    /// <param name="type">Trendline type.</param>
    /// <returns><see cref="Trendline"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(TrendlineType type);
    /// <summary>
    /// Adds a <see cref="Trendline"/> object to this collection with specified type and name.
    /// </summary>
    /// <param name="type">Trendline type.</param>
    /// <param name="name">Trendline name.</param>
    /// <returns><see cref="Trendline"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(TrendlineType type, const U16String& name);
    /// <summary>
    /// Adds a <see cref="Trendline"/> object to this collection with specified type and name.
    /// </summary>
    /// <param name="type">Trendline type.</param>
    /// <param name="name">Trendline name.</param>
    /// <returns><see cref="Trendline"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(TrendlineType type, const char16_t* name);
    /// <summary>
    /// Gets a <see cref="Trendline"/> object by its index.
    /// </summary>
    ASPOSE_CELLS_API Trendline Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
