// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_TICKLABELS_H
#define ASPOSE_CELLS_CHARTS_TICKLABELS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/BackgroundMode.h"
#include "Aspose.Cells/ChartTextDirectionType.h"
#include "Aspose.Cells/TextDirectionType.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {
    class TickLabelItem;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class TickLabels_Impl;

/// <summary>
/// Represents the tick-mark labels associated with tick marks on a chart axis.
/// </summary>
class TickLabels {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TickLabels_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TickLabels(TickLabels_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TickLabels(const TickLabels& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TickLabels();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TickLabels& operator=(const TickLabels& src);
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
    /// Returns a <see cref="Font"/> object that represents the font of the specified TickLabels object.
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
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API BackgroundMode GetBackgroundMode();
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundMode(BackgroundMode value);
    /// <summary>
    /// Represents text rotation angle in clockwise.
    /// </summary>
    /// <remarks><br>0: Not rotated.</br>
    /// <br>255: Top to Bottom.</br>
    /// <br>-90: Downward.</br>
    /// <br>90: Upward.</br></remarks>
    ASPOSE_CELLS_API int32_t GetRotationAngle();
    /// <summary>
    /// Represents text rotation angle in clockwise.
    /// </summary>
    /// <remarks><br>0: Not rotated.</br>
    /// <br>255: Top to Bottom.</br>
    /// <br>-90: Downward.</br>
    /// <br>90: Upward.</br></remarks>
    ASPOSE_CELLS_API void SetRotationAngle(int32_t value);
    /// <summary>
    /// Indicates whether the rotation angle is automatic
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticRotation();
    /// <summary>
    /// Indicates whether the rotation angle is automatic
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticRotation(bool value);
    /// <summary>
    /// Represents the format string for the TickLabels object.
    /// </summary>
    /// <remarks>The formatting string is same as a custom format string setting to a cell. For example, "$0".</remarks>
    ASPOSE_CELLS_API U16String Get_NumberFormat();
    /// <summary>
    /// Represents the format string for the TickLabels object.
    /// </summary>
    /// <remarks>The formatting string is same as a custom format string setting to a cell. For example, "$0".</remarks>
    ASPOSE_CELLS_API void SetNumberFormat(const U16String& value);
    /// <summary>
    /// Represents the format string for the TickLabels object.
    /// </summary>
    /// <remarks>The formatting string is same as a custom format string setting to a cell. For example, "$0".</remarks>
    ASPOSE_CELLS_API void SetNumberFormat(const char16_t* value);
    /// <summary>
    /// Represents the format number for the TickLabels object.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumber();
    /// <summary>
    /// Represents the format number for the TickLabels object.
    /// </summary>
    ASPOSE_CELLS_API void SetNumber(int32_t value);
    /// <summary>
    /// True if the number format is linked to the cells
    /// (so that the number format changes in the labels when it changes in the cells).
    /// </summary>
    ASPOSE_CELLS_API bool GetNumberFormatLinked();
    /// <summary>
    /// True if the number format is linked to the cells
    /// (so that the number format changes in the labels when it changes in the cells).
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormatLinked(bool value);
    /// <summary>
    /// Gets and sets the display number format of tick labels.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayNumberFormat();
    /// <summary>
    /// Gets and sets the distance of labels from the axis.
    /// </summary>
    /// <remarks>
    /// The default distance is 100 percent, which represents the default spacing between the axis labels and the axis line.
    /// The value can be an integer percentage from 0 through 1000, relative to the axis label’s font size.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetOffset();
    /// <summary>
    /// Gets and sets the distance of labels from the axis.
    /// </summary>
    /// <remarks>
    /// The default distance is 100 percent, which represents the default spacing between the axis labels and the axis line.
    /// The value can be an integer percentage from 0 through 1000, relative to the axis label’s font size.
    /// </remarks>
    ASPOSE_CELLS_API void SetOffset(int32_t value);
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API TextDirectionType GetReadingOrder();
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API void SetReadingOrder(TextDirectionType value);
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API ChartTextDirectionType GetDirectionType();
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API void SetDirectionType(ChartTextDirectionType value);
    /// <summary>
    /// Gets each tick label item's information of axis.
    /// </summary>
    /// <remarks>
    /// Only available after calling <see cref="Chart.Calculate()"/> method.
    /// </remarks>
    ASPOSE_CELLS_API Vector<TickLabelItem> GetTickLabelItems();
    
};

} } }

#endif
