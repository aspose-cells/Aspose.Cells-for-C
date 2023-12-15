// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTFRAME_H
#define ASPOSE_CELLS_CHARTS_CHARTFRAME_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/BackgroundMode.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
    class Area;
    class ShapePropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class TextOptions;
} } } }

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Drawing::Texts;

class ChartFrame_Impl;

/// <summary>
/// Encapsulates the object that represents the frame object in a chart.
/// </summary>
class ChartFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartFrame_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartFrame(ChartFrame_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartFrame(const ChartFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartFrame();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartFrame& operator=(const ChartFrame& src);
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
    /// Indicates whether the size of the plot area size includes the tick marks, and the axis labels.
    /// False specifies that the size shall determine the size of the plot area, the tick marks, and the axis labels.
    /// </summary>
    /// <remarks>
    /// Only for Xlsx file.
    /// </remarks>
    ASPOSE_CELLS_API bool IsInnerMode();
    /// <summary>
    /// Indicates whether the size of the plot area size includes the tick marks, and the axis labels.
    /// False specifies that the size shall determine the size of the plot area, the tick marks, and the axis labels.
    /// </summary>
    /// <remarks>
    /// Only for Xlsx file.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsInnerMode(bool value);
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API BackgroundMode GetBackgroundMode();
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundMode(BackgroundMode value);
    /// <summary>
    /// True if the frame has a shadow.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// True if the frame has a shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets the <see cref="ShapeProperties"/> object.
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection GetShapeProperties();
    /// <summary>
    /// Indicates whether default position(DefaultX, DefaultY, DefaultWidth and DefaultHeight) are set.
    /// </summary>
    ASPOSE_CELLS_API bool IsDefaultPosBeSet();
    /// <summary>
    /// Represents x of default position
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDefaultX();
    /// <summary>
    /// Represents y of default position
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDefaultY();
    /// <summary>
    /// Represents width of default position
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDefaultWidth();
    /// <summary>
    /// Represents height of default position
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDefaultHeight();
    /// <summary>
    /// Gets the <see cref="Line">border</see>.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets the <see cref="Area">area</see>.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    /// <summary>
    /// Gets and sets the options of the text.
    /// </summary>
    ASPOSE_CELLS_API TextOptions GetTextOptions();
    /// <summary>
    /// Gets a <see cref="Font"/> object of the specified ChartFrame object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes. The default value is True.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoScaleFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes. The default value is True.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoScaleFont(bool value);
    /// <summary>
    /// Indicates whether the chart frame is automatic sized.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticSize();
    /// <summary>
    /// Indicates whether the chart frame is automatic sized.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticSize(bool value);
    /// <summary>
    /// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// X In Pixels = X * Chart.ChartObject.Width / 4000;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// X In Pixels = X * Chart.ChartObject.Width / 4000;
    /// </remarks>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Y In Pixels = Y * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Y In Pixels = Y * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API void SetY(int32_t value);
    /// <summary>
    /// Gets or sets the height of frame in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Height In Pixels = Y * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Gets or sets the height of frame in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Height In Pixels = Y * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API void SetHeight(int32_t value);
    /// <summary>
    /// Gets or sets the width of frame in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Width In Pixels = Width * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Gets or sets the width of frame in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// How to convert units of 1/4000 to pixels?
    /// Width In Pixels = Width * Chart.ChartObject.Height / 4000;
    /// </remarks>
    ASPOSE_CELLS_API void SetWidth(int32_t value);
    /// <summary>
    /// Set position of the frame to automatic
    /// </summary>
    ASPOSE_CELLS_API void SetPositionAuto();
    
};

} } }

#endif
