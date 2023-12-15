// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_CHARTSHAPE_H
#define ASPOSE_CELLS_DRAWING_CHARTSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Charts {
    class Chart;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells::Charts;

class ChartShape_Impl;

/// <summary>
/// Represents the shape of the chart.
/// Properties and methods for the ChartObject object control the appearance and size of the embedded chart on the worksheet.
/// </summary>
class ChartShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartShape(ChartShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartShape(const ChartShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ChartShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartShape& operator=(const ChartShape& src);
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
    /// Returns a Chart object that represents the chart contained in the object.
    /// </summary>
    ASPOSE_CELLS_API Chart GetChart();
    
};

} } }

#endif
