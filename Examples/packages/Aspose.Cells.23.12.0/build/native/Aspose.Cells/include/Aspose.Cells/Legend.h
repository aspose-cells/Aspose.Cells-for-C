// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_LEGEND_H
#define ASPOSE_CELLS_CHARTS_LEGEND_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartTextFrame.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/LegendPositionType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class LegendEntryCollection;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class Legend_Impl;

/// <summary>
/// Encapsulates the object that represents the chart legend.
/// </summary>
class Legend : public ChartTextFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Legend_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Legend(Legend_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Legend(const Legend& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Legend(const ChartTextFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Legend();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Legend& operator=(const Legend& src);
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
    /// Gets or sets the legend position type.
    /// </summary>
    /// <remarks><br>Default position is right.</br>
    /// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
    /// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
    /// </remarks>
    ASPOSE_CELLS_API LegendPositionType GetPosition();
    /// <summary>
    /// Gets or sets the legend position type.
    /// </summary>
    /// <remarks><br>Default position is right.</br>
    /// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
    /// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
    /// </remarks>
    ASPOSE_CELLS_API void SetPosition(LegendPositionType value);
    /// <summary>
    /// Gets a collection of all the LegendEntry objects in the specified chart legend.
    /// Setting the legend entries of the surface chart is not supported.
    /// So it will return null if the chart type is surface chart type.
    /// </summary>
    ASPOSE_CELLS_API LegendEntryCollection GetLegendEntries();
    /// <summary>
    /// Gets the labels of the legend entries after call Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetLegendLabels();
    /// <summary>
    /// Gets or sets whether other chart elements shall be allowed to overlap this chart element.
    /// </summary>
    ASPOSE_CELLS_API bool IsOverLay();
    /// <summary>
    /// Gets or sets whether other chart elements shall be allowed to overlap this chart element.
    /// </summary>
    ASPOSE_CELLS_API void SetIsOverLay(bool value);
    
};

} } }

#endif
