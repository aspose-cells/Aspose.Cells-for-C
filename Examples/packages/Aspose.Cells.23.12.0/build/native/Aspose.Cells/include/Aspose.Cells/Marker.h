// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_MARKER_H
#define ASPOSE_CELLS_CHARTS_MARKER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/ChartMarkerType.h"
#include "Aspose.Cells/FormattingType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
    class Area;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class Marker_Impl;

/// <summary>
/// Represents the marker in a line chart, scatter chart, or radar chart.
/// </summary>
class Marker {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Marker_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Marker(Marker_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Marker(const Marker& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Marker();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Marker& operator=(const Marker& src);
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
    /// Gets the <see cref="Line">border</see>.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets the <see cref="Area">area</see>.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    /// <summary>
    /// Represents the marker style. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API ChartMarkerType GetMarkerStyle();
    /// <summary>
    /// Represents the marker style. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API void SetMarkerStyle(ChartMarkerType value);
    /// <summary>
    /// Represents the marker size in unit of points. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMarkerSize();
    /// <summary>
    /// Represents the marker size in unit of points. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API void SetMarkerSize(int32_t value);
    /// <summary>
    /// Represents the marker size in unit of pixels. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMarkerSizePx();
    /// <summary>
    /// Represents the marker size in unit of pixels. Applies to line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API void SetMarkerSizePx(int32_t value);
    /// <summary>
    /// Represents the marker foreground color in a line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForegroundColor();
    /// <summary>
    /// Represents the marker foreground color in a line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the marker foreground color set type.
    /// </summary>
    ASPOSE_CELLS_API FormattingType GetForegroundColorSetType();
    /// <summary>
    /// Gets or sets the marker foreground color set type.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundColorSetType(FormattingType value);
    /// <summary>
    /// Represents the marker background color in a line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackgroundColor();
    /// <summary>
    /// Represents the marker background color in a line chart, scatter chart, or radar chart.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the marker background color set type.
    /// </summary>
    ASPOSE_CELLS_API FormattingType GetBackgroundColorSetType();
    /// <summary>
    /// Gets or sets the marker background color set type.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundColorSetType(FormattingType value);
    
};

} } }

#endif
