// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_DATALABELS_H
#define ASPOSE_CELLS_CHARTS_DATALABELS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartTextFrame.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/BackgroundMode.h"
#include "Aspose.Cells/ChartTextDirectionType.h"
#include "Aspose.Cells/DataLabelShapeType.h"
#include "Aspose.Cells/DataLabelsSeparatorType.h"
#include "Aspose.Cells/LabelPositionType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
    class Area;
} } }

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class DataLabels_Impl;

/// <summary>
/// Encapsulates a collection of all the DataLabel objects for the specified Series.
/// </summary>
class DataLabels : public ChartTextFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataLabels_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataLabels(DataLabels_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataLabels(const DataLabels& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DataLabels(const ChartTextFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataLabels();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataLabels& operator=(const DataLabels& src);
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
    /// Indicates the text is auto generated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoText();
    /// <summary>
    /// Indicates the text is auto generated.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoText(bool value);
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API ChartTextDirectionType GetDirectionType();
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API void SetDirectionType(ChartTextDirectionType value);
    /// <summary>
    /// Gets or sets the text of data label.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets or sets the text of data label.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets or sets the text of data label.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Gets or sets a value indicating whether the text is wrapped.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextWrapped();
    /// <summary>
    /// Gets or sets a value indicating whether the text is wrapped.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextWrapped(bool value);
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API BackgroundMode GetBackgroundMode();
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundMode(BackgroundMode value);
    /// <summary>
    /// Represents a specified chart's data label values display behavior. True displays the values. False to hide.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowValue();
    /// <summary>
    /// Represents a specified chart's data label values display behavior. True displays the values. False to hide.
    /// </summary>
    ASPOSE_CELLS_API void SetShowValue(bool value);
    /// <summary>
    /// Indicates whether showing cell range as the data labels.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowCellRange();
    /// <summary>
    /// Indicates whether showing cell range as the data labels.
    /// </summary>
    ASPOSE_CELLS_API void SetShowCellRange(bool value);
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPercentage();
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPercentage(bool value);
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowBubbleSize();
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide.
    /// </summary>
    ASPOSE_CELLS_API void SetShowBubbleSize(bool value);
    /// <summary>
    /// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowCategoryName();
    /// <summary>
    /// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
    /// </summary>
    ASPOSE_CELLS_API void SetShowCategoryName(bool value);
    /// <summary>
    /// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
    /// True to show the series name. False to hide.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowSeriesName();
    /// <summary>
    /// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
    /// True to show the series name. False to hide.
    /// </summary>
    ASPOSE_CELLS_API void SetShowSeriesName(bool value);
    /// <summary>
    /// Represents a specified chart's data label legend key display behavior.
    /// True if the data label legend key is visible.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowLegendKey();
    /// <summary>
    /// Represents a specified chart's data label legend key display behavior.
    /// True if the data label legend key is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetShowLegendKey(bool value);
    /// <summary>
    /// Represents the format string for the DataLabels object.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_NumberFormat();
    /// <summary>
    /// Represents the format string for the DataLabels object.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const U16String& value);
    /// <summary>
    /// Represents the format string for the DataLabels object.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const char16_t* value);
    /// <summary>
    /// Gets and sets the built-in number format.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumber();
    /// <summary>
    /// Gets and sets the built-in number format.
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
    /// Gets the font of the DataLabels;
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Gets or sets the separator type used for the data labels on a chart.
    /// </summary>
    /// <remarks>
    /// To set custom separator, please set  the property <see cref="DataLabels.SeparatorType"/> as <see cref="DataLabelsSeparatorType.Custom"/> and then specify the expected value for <see cref="DataLabels.SeparatorValue"/>.
    /// </remarks>
    ASPOSE_CELLS_API DataLabelsSeparatorType GetSeparatorType();
    /// <summary>
    /// Gets or sets the separator type used for the data labels on a chart.
    /// </summary>
    /// <remarks>
    /// To set custom separator, please set  the property <see cref="DataLabels.SeparatorType"/> as <see cref="DataLabelsSeparatorType.Custom"/> and then specify the expected value for <see cref="DataLabels.SeparatorValue"/>.
    /// </remarks>
    ASPOSE_CELLS_API void SetSeparatorType(DataLabelsSeparatorType value);
    /// <summary>
    /// Gets or sets the separator value used for the data labels on a chart.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSeparatorValue();
    /// <summary>
    /// Gets or sets the separator value used for the data labels on a chart.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorValue(const U16String& value);
    /// <summary>
    /// Gets or sets the separator value used for the data labels on a chart.
    /// </summary>
    ASPOSE_CELLS_API void SetSeparatorValue(const char16_t* value);
    /// <summary>
    /// Represents the position of the data label.
    /// </summary>
    ASPOSE_CELLS_API LabelPositionType GetPosition();
    /// <summary>
    /// Represents the position of the data label.
    /// </summary>
    ASPOSE_CELLS_API void SetPosition(LabelPositionType value);
    /// <summary>
    /// Indicates whether the datalabels display never overlap. (For Pie chart)
    /// </summary>
    ASPOSE_CELLS_API bool IsNeverOverlap();
    /// <summary>
    /// Indicates whether the datalabels display never overlap. (For Pie chart)
    /// </summary>
    ASPOSE_CELLS_API void SetIsNeverOverlap(bool value);
    /// <summary>
    /// Gets or sets  shape type of data label.
    /// </summary>
    ASPOSE_CELLS_API DataLabelShapeType GetShapeType();
    /// <summary>
    /// Gets or sets  shape type of data label.
    /// </summary>
    ASPOSE_CELLS_API void SetShapeType(DataLabelShapeType value);
    
};

} } }

#endif
