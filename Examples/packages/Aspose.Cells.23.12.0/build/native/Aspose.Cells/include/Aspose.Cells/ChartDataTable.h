// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTDATATABLE_H
#define ASPOSE_CELLS_CHARTS_CHARTDATATABLE_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/BackgroundMode.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class ChartDataTable_Impl;

/// <summary>
/// Represents a chart data table.
/// </summary>
class ChartDataTable {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartDataTable_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartDataTable(ChartDataTable_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartDataTable(const ChartDataTable& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartDataTable();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartDataTable& operator=(const ChartDataTable& src);
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
    /// Gets a <see cref="Font"/> object which represents the font setting of the specified chart data table.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes.
    /// The default value is True.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoScaleFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes.
    /// The default value is True.
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
    /// True if the chart data table has horizontal cell borders
    /// </summary>
    ASPOSE_CELLS_API bool GetHasBorderHorizontal();
    /// <summary>
    /// True if the chart data table has horizontal cell borders
    /// </summary>
    ASPOSE_CELLS_API void SetHasBorderHorizontal(bool value);
    /// <summary>
    /// True if the chart data table has vertical cell borders
    /// </summary>
    ASPOSE_CELLS_API bool GetHasBorderVertical();
    /// <summary>
    /// True if the chart data table has vertical cell borders
    /// </summary>
    ASPOSE_CELLS_API void SetHasBorderVertical(bool value);
    /// <summary>
    /// True if the chart data table has outline borders
    /// </summary>
    ASPOSE_CELLS_API bool GetHasBorderOutline();
    /// <summary>
    /// True if the chart data table has outline borders
    /// </summary>
    ASPOSE_CELLS_API void SetHasBorderOutline(bool value);
    /// <summary>
    /// True if the data label legend key is visible.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowLegendKey();
    /// <summary>
    /// True if the data label legend key is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetShowLegendKey(bool value);
    /// <summary>
    /// Returns a Border object that represents the border of the object
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    
};

} } }

#endif
