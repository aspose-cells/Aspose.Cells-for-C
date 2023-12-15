// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHART_H
#define ASPOSE_CELLS_CHARTS_CHART_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/AxisType.h"
#include "Aspose.Cells/ChartType.h"
#include "Aspose.Cells/ImageType.h"
#include "Aspose.Cells/PageLayoutAlignmentType.h"
#include "Aspose.Cells/PlacementType.h"
#include "Aspose.Cells/PlotDataByType.h"
#include "Aspose.Cells/PlotEmptyCellsType.h"
#include "Aspose.Cells/PrintSizeType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ChartShape;
    class ShapeCollection;
    class Line;
} } }

namespace Aspose { namespace Cells { namespace Charts {
    class PivotOptions;
    class SeriesCollection;
    class Title;
    class PlotArea;
    class ChartArea;
    class Axis;
    class Legend;
    class ChartDataTable;
    class Floor;
    class Walls;
} } }

namespace Aspose { namespace Cells {
    class Worksheet;
    class PageSetup;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Rendering;

class Chart_Impl;

/// <summary>
/// Encapsulates the object that represents a single Excel chart.
/// </summary>
class Chart {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Chart_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Chart(Chart_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Chart(const Chart& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Chart();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Chart& operator=(const Chart& src);
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
    /// Gets and sets the builtin style.
    /// </summary>
    /// <remarks>
    /// It should be between 1 and 48.
    /// Return -1 if it's not be set.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetStyle();
    /// <summary>
    /// Gets and sets the builtin style.
    /// </summary>
    /// <remarks>
    /// It should be between 1 and 48.
    /// Return -1 if it's not be set.
    /// </remarks>
    ASPOSE_CELLS_API void SetStyle(int32_t value);
    /// <summary>
    /// Represents the chartShape;
    /// </summary>
    ASPOSE_CELLS_API ChartShape GetChartObject();
    /// <summary>
    /// Indicates whether hide the pivot chart field buttons only when the chart is PivotChart.
    /// </summary>
    ASPOSE_CELLS_API bool GetHidePivotFieldButtons();
    /// <summary>
    /// Indicates whether hide the pivot chart field buttons only when the chart is PivotChart.
    /// </summary>
    ASPOSE_CELLS_API void SetHidePivotFieldButtons(bool value);
    /// <summary>
    /// Specifies the pivot controls that appear on the chart
    /// </summary>
    ASPOSE_CELLS_API PivotOptions GetPivotOptions();
    /// <summary>
    /// The source is the data of the pivotTable.
    /// If PivotSource is not empty ,the chart is PivotChart.
    /// </summary>
    /// <remarks>If the pivot table  "PivotTable1" in the Worksheet "Sheet1" in the file "Book1.xls".
    /// The pivotSource could be "[Book1.xls]Sheet1!PivotTable1" if the chart and the PivotTable is not in the same workbook.
    /// If you set this property ,the previous data source setting will be lost.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetPivotSource();
    /// <summary>
    /// The source is the data of the pivotTable.
    /// If PivotSource is not empty ,the chart is PivotChart.
    /// </summary>
    /// <remarks>If the pivot table  "PivotTable1" in the Worksheet "Sheet1" in the file "Book1.xls".
    /// The pivotSource could be "[Book1.xls]Sheet1!PivotTable1" if the chart and the PivotTable is not in the same workbook.
    /// If you set this property ,the previous data source setting will be lost.
    /// </remarks>
    ASPOSE_CELLS_API void SetPivotSource(const U16String& value);
    /// <summary>
    /// The source is the data of the pivotTable.
    /// If PivotSource is not empty ,the chart is PivotChart.
    /// </summary>
    /// <remarks>If the pivot table  "PivotTable1" in the Worksheet "Sheet1" in the file "Book1.xls".
    /// The pivotSource could be "[Book1.xls]Sheet1!PivotTable1" if the chart and the PivotTable is not in the same workbook.
    /// If you set this property ,the previous data source setting will be lost.
    /// </remarks>
    ASPOSE_CELLS_API void SetPivotSource(const char16_t* value);
    /// <summary>
    /// Returns whether the cell refered by the chart.
    /// </summary>
    /// <param name="sheetIndex">
    /// The sheet Index.-1 means the worksheet which contains current chart.
    /// </param>
    /// <param name="rowIndex">The row index</param>
    /// <param name="columnIndex">The column index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool IsCellReferedByChart(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);
    /// <summary>
    /// Detects if a chart's data source has changed.
    /// </summary>
    /// <remarks>
    /// The method detects the changes in the chart's data source before rendering the chart to image format.
    /// At first Chart.toImage call, the chart source data (e.g. XValuesParseData, ValuesParseData) will be recorded.
    /// Before calling the Chart.toImage method again, call IsChartDataChanged method to check if Chart needs re-rendering.
    /// </remarks>
    /// <returns>Returns true if the chart has changed otherwise returns false</returns>
    ASPOSE_CELLS_API bool IsChartDataChanged();
    /// <summary>
    /// Gets and sets whether plot by row or column.
    /// </summary>
    ASPOSE_CELLS_API PlotDataByType GetPlotBy();
    /// <summary>
    /// Refreshes pivot chart's data  from it's pivot data source.
    /// </summary>
    /// <remarks>
    /// We will gather data from pivot data source to the pivot chart cache.
    /// This method is only used to gather all data to a pivot chart.
    /// </remarks>
    ASPOSE_CELLS_API void RefreshPivotData();
    /// <summary>
    /// Gets and sets  how to plot the empty cells.
    /// </summary>
    ASPOSE_CELLS_API PlotEmptyCellsType GetPlotEmptyCellsType();
    /// <summary>
    /// Gets and sets  how to plot the empty cells.
    /// </summary>
    ASPOSE_CELLS_API void SetPlotEmptyCellsType(PlotEmptyCellsType value);
    /// <summary>
    /// Indicates whether plot visible cells only.
    /// </summary>
    ASPOSE_CELLS_API bool GetPlotVisibleCellsOnly();
    /// <summary>
    /// Indicates whether plot visible cells only.
    /// </summary>
    ASPOSE_CELLS_API void SetPlotVisibleCellsOnly(bool value);
    /// <summary>
    /// Indicates whether displaying #N/A as blank value.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayNaAsBlank();
    /// <summary>
    /// Indicates whether displaying #N/A as blank value.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayNaAsBlank(bool value);
    /// <summary>
    /// Gets and sets the name of the chart.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the chart.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the chart.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// True if Microsoft Excel resizes the chart to match the size of the chart sheet window.
    /// </summary>
    ASPOSE_CELLS_API bool GetSizeWithWindow();
    /// <summary>
    /// True if Microsoft Excel resizes the chart to match the size of the chart sheet window.
    /// </summary>
    ASPOSE_CELLS_API void SetSizeWithWindow(bool value);
    /// <summary>
    /// Gets the worksheet which contains this chart.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Returns all drawing shapes in this chart.
    /// </summary>
    ASPOSE_CELLS_API ShapeCollection GetShapes();
    /// <summary>
    /// Gets and sets the printed chart size.
    /// </summary>
    ASPOSE_CELLS_API PrintSizeType GetPrintSize();
    /// <summary>
    /// Gets and sets the printed chart size.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintSize(PrintSizeType value);
    /// <summary>
    /// Change chart type with preset template.
    /// </summary>
    /// <param name="data">The data of chart template file(.crtx).</param>
    ASPOSE_CELLS_API void ChangeTemplate(const Vector<uint8_t>& data);
    /// <summary>
    /// Gets or sets a chart's type.
    /// </summary>
    ASPOSE_CELLS_API ChartType GetType();
    /// <summary>
    /// Gets or sets a chart's type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ChartType value);
    /// <summary>
    /// Moves the chart to a specified location.
    /// </summary>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    ASPOSE_CELLS_API void Move(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn);
    /// <summary>
    /// Gets a <see cref="SeriesCollection"/> collection representing the data series in the chart.
    /// </summary>
    ASPOSE_CELLS_API SeriesCollection GetNSeries();
    /// <summary>
    /// Gets a <see cref="SeriesCollection"/> collection representing the data series that are filtered in the chart.
    /// </summary>
    ASPOSE_CELLS_API SeriesCollection GetFilteredNSeries();
    /// <summary>
    /// Gets the chart's title.
    /// </summary>
    ASPOSE_CELLS_API Title GetTitle();
    /// <summary>
    /// Gets the chart's sub-title.
    /// Only for ODS format file.
    /// </summary>
    ASPOSE_CELLS_API Title GetSubTitle();
    /// <summary>
    /// Gets the chart's plot area which includes axis tick labels.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API PlotArea GetPlotArea();
    /// <summary>
    /// Gets the chart area in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API ChartArea GetChartArea();
    /// <summary>
    /// Gets the chart's X axis.
    /// </summary>
    ASPOSE_CELLS_API Axis GetCategoryAxis();
    /// <summary>
    /// Gets the chart's Y axis.
    /// </summary>
    ASPOSE_CELLS_API Axis GetValueAxis();
    /// <summary>
    /// Gets the chart's second Y axis.
    /// </summary>
    ASPOSE_CELLS_API Axis GetSecondValueAxis();
    /// <summary>
    /// Gets the chart's second X axis.
    /// </summary>
    ASPOSE_CELLS_API Axis GetSecondCategoryAxis();
    /// <summary>
    /// Gets the chart's series axis.
    /// </summary>
    ASPOSE_CELLS_API Axis GetSeriesAxis();
    /// <summary>
    /// Gets the chart legend.
    /// </summary>
    ASPOSE_CELLS_API Legend GetLegend();
    /// <summary>
    /// Represents the chart data table.
    /// </summary>
    ASPOSE_CELLS_API ChartDataTable GetChartDataTable();
    /// <summary>
    /// Gets or sets a value indicating whether the chart legend will be displayed. Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowLegend();
    /// <summary>
    /// Gets or sets a value indicating whether the chart legend will be displayed. Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetShowLegend(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the chart area is rectangular cornered.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsRectangularCornered();
    /// <summary>
    /// Gets or sets a value indicating whether the chart area is rectangular cornered.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRectangularCornered(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the chart displays a data table.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowDataTable();
    /// <summary>
    /// Gets or sets a value indicating whether the chart displays a data table.
    /// </summary>
    ASPOSE_CELLS_API void SetShowDataTable(bool value);
    /// <summary>
    /// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical).
    /// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstSliceAngle();
    /// <summary>
    /// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical).
    /// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstSliceAngle(int32_t value);
    /// <summary>
    /// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetGapWidth();
    /// <summary>
    /// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API void SetGapWidth(int32_t value);
    /// <summary>
    /// Gets or sets the distance between the data series in a 3-D chart, as a percentage of the marker width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetGapDepth();
    /// <summary>
    /// Gets or sets the distance between the data series in a 3-D chart, as a percentage of the marker width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API void SetGapDepth(int32_t value);
    /// <summary>
    /// Calculates the custom position of plot area, axes if the position of them are auto assigned.
    /// </summary>
    ASPOSE_CELLS_API void Calculate();
    /// <summary>
    /// Returns a <see cref="Floor"/> object that represents the walls of a 3-D chart.
    /// </summary>
    /// <remarks>This property doesn't apply to 3-D pie charts.</remarks>
    ASPOSE_CELLS_API Floor GetFloor();
    /// <summary>
    /// Returns a <see cref="Walls"/> object that represents the walls of a 3-D chart.
    /// </summary>
    /// <remarks>This property doesn't apply to 3-D pie charts.</remarks>
    ASPOSE_CELLS_API Walls GetWalls();
    /// <summary>
    /// Returns a <see cref="Walls"/> object that represents the back wall of a 3-D chart.
    /// </summary>
    ASPOSE_CELLS_API Walls GetBackWall();
    /// <summary>
    /// Returns a <see cref="Walls"/> object that represents the side wall of a 3-D chart.
    /// </summary>
    ASPOSE_CELLS_API Walls GetSideWall();
    /// <summary>
    /// True if gridlines are drawn two-dimensionally on a 3-D chart.
    /// </summary>
    ASPOSE_CELLS_API bool GetWallsAndGridlines2D();
    /// <summary>
    /// True if gridlines are drawn two-dimensionally on a 3-D chart.
    /// </summary>
    ASPOSE_CELLS_API void SetWallsAndGridlines2D(bool value);
    /// <summary>
    /// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
    /// </summary>
    /// <remarks>
    /// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44.
    /// The default value is 20. Applies only to 3-D charts.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetRotationAngle();
    /// <summary>
    /// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
    /// </summary>
    /// <remarks>
    /// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44.
    /// The default value is 20. Applies only to 3-D charts.
    /// </remarks>
    ASPOSE_CELLS_API void SetRotationAngle(int32_t value);
    /// <summary>
    /// Represents the elevation of the 3-D chart view, in degrees.
    /// </summary>
    /// <remarks>
    /// The chart elevation is the height at which you view the chart, in degrees.
    /// The default is 15 for most chart types.
    /// The value of this property must be between -90 and 90, except for 3-D bar charts, where it must be between 0 and 44.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetElevation();
    /// <summary>
    /// Represents the elevation of the 3-D chart view, in degrees.
    /// </summary>
    /// <remarks>
    /// The chart elevation is the height at which you view the chart, in degrees.
    /// The default is 15 for most chart types.
    /// The value of this property must be between -90 and 90, except for 3-D bar charts, where it must be between 0 and 44.
    /// </remarks>
    ASPOSE_CELLS_API void SetElevation(int32_t value);
    /// <summary>
    /// True if the chart axes are at right angles. Applies only for 3-D charts(except Column3D and 3-D Pie Charts).
    /// </summary>
    /// <remarks>
    /// If this property is True, the Perspective property is ignored.
    /// </remarks>
    ASPOSE_CELLS_API bool GetRightAngleAxes();
    /// <summary>
    /// True if the chart axes are at right angles. Applies only for 3-D charts(except Column3D and 3-D Pie Charts).
    /// </summary>
    /// <remarks>
    /// If this property is True, the Perspective property is ignored.
    /// </remarks>
    ASPOSE_CELLS_API void SetRightAngleAxes(bool value);
    /// <summary>
    /// True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart.
    /// The RightAngleAxes property must be True.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoScaling();
    /// <summary>
    /// True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart.
    /// The RightAngleAxes property must be True.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoScaling(bool value);
    /// <summary>
    /// Returns or sets the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeightPercent();
    /// <summary>
    /// Returns or sets the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// </summary>
    ASPOSE_CELLS_API void SetHeightPercent(int32_t value);
    /// <summary>
    /// Returns or sets the perspective for the 3-D chart view. Must be between 0 and 100.
    /// This property is ignored if the RightAngleAxes property is True.
    /// </summary>
    ASPOSE_CELLS_API int16_t GetPerspective();
    /// <summary>
    /// Returns or sets the perspective for the 3-D chart view. Must be between 0 and 100.
    /// This property is ignored if the RightAngleAxes property is True.
    /// </summary>
    ASPOSE_CELLS_API void SetPerspective(int16_t value);
    /// <summary>
    /// Indicates whether the chart is a 3d chart.
    /// </summary>
    ASPOSE_CELLS_API bool GetIs3D();
    /// <summary>
    /// Represents the depth of a 3-D chart as a percentage of the chart width (between 20 and 2000 percent).
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDepthPercent();
    /// <summary>
    /// Represents the depth of a 3-D chart as a percentage of the chart width (between 20 and 2000 percent).
    /// </summary>
    ASPOSE_CELLS_API void SetDepthPercent(int32_t value);
    /// <summary>
    /// Creates the chart image and saves it to a file.
    /// The extension of the file name determines the format of the image.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <remarks>
    /// <p>The format of the image is specified by using the extension of the file name.
    /// For example, if you specify "myfile.png", then the image will be saved
    /// in the PNG format. The following file extensions are recognized:
    /// .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const U16String& imageFile);
    /// <summary>
    /// Creates the chart image and saves it to a file.
    /// The extension of the file name determines the format of the image.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <remarks>
    /// <p>The format of the image is specified by using the extension of the file name.
    /// For example, if you specify "myfile.png", then the image will be saved
    /// in the PNG format. The following file extensions are recognized:
    /// .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const char16_t* imageFile);
    /// <summary>
    /// Creates the chart image and saves it to a file in the specified image type.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="imageType">The image type in which to save the image.</param>
    /// <remarks>
    /// <p>The type of the image is specified by using <c>imageType</c>.
    /// The following types are supported:
    /// ImageType.Bmp, ImageType.Gif, ImageType.Png, ImageType.Jpeg, ImageType.Tiff, ImageType.Emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const U16String& imageFile, Aspose::Cells::Drawing::ImageType imageType);
    /// <summary>
    /// Creates the chart image and saves it to a file in the specified image type.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="imageType">The image type in which to save the image.</param>
    /// <remarks>
    /// <p>The type of the image is specified by using <c>imageType</c>.
    /// The following types are supported:
    /// ImageType.Bmp, ImageType.Gif, ImageType.Png, ImageType.Jpeg, ImageType.Tiff, ImageType.Emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const char16_t* imageFile, Aspose::Cells::Drawing::ImageType imageType);
    /// <summary>
    /// Creates the chart image and saves it to a file in the Jpeg format.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="jpegQuality">Jpeg quality.</param>
    /// <remarks>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const U16String& imageFile, int64_t jpegQuality);
    /// <summary>
    /// Creates the chart image and saves it to a file in the Jpeg format.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="jpegQuality">Jpeg quality.</param>
    /// <remarks>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const char16_t* imageFile, int64_t jpegQuality);
    /// <summary>
    /// Creates the chart image and saves it to a stream in the Jpeg format.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    /// <param name="jpegQuality">Jpeg quality.</param>
    /// <remarks>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(int64_t jpegQuality);
    /// <summary>
    /// Creates the chart image and saves it to a stream in the specified format.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    /// <param name="imageType">The image type in which to save the image.</param>
    /// <remarks>
    /// <p>The type of the image is specified by using <c>imageType</c>.
    /// The following types are supported:
    /// ImageType.Bmp, ImageType.Gif, ImageType.Png, ImageType.Jpeg, ImageType.Tiff, ImageType.Emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// </remarks>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(Aspose::Cells::Drawing::ImageType imageType);
    /// <summary>
    /// Saves the chart to a pdf file.
    /// </summary>
    /// <param name="fileName">the pdf file name with full path</param>
    ASPOSE_CELLS_API void ToPdf(const U16String& fileName);
    /// <summary>
    /// Saves the chart to a pdf file.
    /// </summary>
    /// <param name="fileName">the pdf file name with full path</param>
    ASPOSE_CELLS_API void ToPdf(const char16_t* fileName);
    /// <summary>
    /// Saves the chart to a pdf file.
    /// </summary>
    /// <param name="fileName">the pdf file name with full path</param>
    /// <param name="desiredPageWidth">The desired page width in inches.</param>
    /// <param name="desiredPageHeight">The desired page height in inches.</param>
    /// <param name="hAlignmentType">The chart horizontal alignment type in the output page.</param>
    /// <param name="vAlignmentType">The chart vertical alignment type in the output page.</param>
    ASPOSE_CELLS_API void ToPdf(const U16String& fileName, float desiredPageWidth, float desiredPageHeight, PageLayoutAlignmentType hAlignmentType, PageLayoutAlignmentType vAlignmentType);
    /// <summary>
    /// Saves the chart to a pdf file.
    /// </summary>
    /// <param name="fileName">the pdf file name with full path</param>
    /// <param name="desiredPageWidth">The desired page width in inches.</param>
    /// <param name="desiredPageHeight">The desired page height in inches.</param>
    /// <param name="hAlignmentType">The chart horizontal alignment type in the output page.</param>
    /// <param name="vAlignmentType">The chart vertical alignment type in the output page.</param>
    ASPOSE_CELLS_API void ToPdf(const char16_t* fileName, float desiredPageWidth, float desiredPageHeight, PageLayoutAlignmentType hAlignmentType, PageLayoutAlignmentType vAlignmentType);
    /// <summary>
    /// Creates the chart pdf and saves it to a stream.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    ASPOSE_CELLS_API Vector<uint8_t> ToPdf();
    /// <summary>
    /// Creates the chart pdf and saves it to a stream.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    /// <param name="desiredPageWidth">The desired page width in inches.</param>
    /// <param name="desiredPageHeight">The desired page height in inches.</param>
    /// <param name="hAlignmentType">The chart horizontal alignment type in the output page.</param>
    /// <param name="vAlignmentType">The chart vertical alignment type in the output page.</param>
    ASPOSE_CELLS_API Vector<uint8_t> ToPdf(float desiredPageWidth, float desiredPageHeight, PageLayoutAlignmentType hAlignmentType, PageLayoutAlignmentType vAlignmentType);
    /// <summary>
    /// Creates the chart image and saves it to a file.
    /// The extension of the file name determines the format of the image.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="options">Additional image creation options</param>
    /// <remarks>
    /// <p>The format of the image is specified by using the extension of the file name.
    /// For example, if you specify "myfile.png", then the image will be saved
    /// in the PNG format. The following file extensions are recognized:
    /// .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// Please refer to <a href="http://www.aspose.com/documentation/.net-components/aspose.cells-for-.net/converting-chart-to-image.html">Supported Charts List</a> for more details.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const U16String& imageFile, const ImageOrPrintOptions& options);
    /// <summary>
    /// Creates the chart image and saves it to a file.
    /// The extension of the file name determines the format of the image.
    /// </summary>
    /// <param name="imageFile">The image file name with full path.</param>
    /// <param name="options">Additional image creation options</param>
    /// <remarks>
    /// <p>The format of the image is specified by using the extension of the file name.
    /// For example, if you specify "myfile.png", then the image will be saved
    /// in the PNG format. The following file extensions are recognized:
    /// .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// Please refer to <a href="http://www.aspose.com/documentation/.net-components/aspose.cells-for-.net/converting-chart-to-image.html">Supported Charts List</a> for more details.
    /// </remarks>
    ASPOSE_CELLS_API void ToImage(const char16_t* imageFile, const ImageOrPrintOptions& options);
    /// <summary>
    /// Creates the chart image and saves it to a stream in the specified format.
    /// </summary>
    /// <param name="stream">The output stream.</param>
    /// <param name="options">Additional image creation options</param>
    /// <remarks>
    /// <p>The type of the image is specified by using <c>options.ImageType</c>.
    /// The following formats are supported:
    /// ImageType.Bmp, ImageType.Gif, ImageType.Png, ImageType.Jpeg, ImageType.Tiff, ImageType.Emf.</p>
    /// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
    /// Please refer to <a href="http://www.aspose.com/documentation/.net-components/aspose.cells-for-.net/converting-chart-to-image.html">Supported Charts List</a> for more details.
    /// </remarks>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(const ImageOrPrintOptions& options);
    /// <summary>
    /// Gets actual size of chart in unit of pixels.
    /// </summary>
    /// <returns>Actual size in an array(width and height).
    /// [0] is width; [1] is height.
    /// </returns>
    ASPOSE_CELLS_API Vector<int32_t> GetActualSize();
    /// <summary>
    /// Represents the way the chart is attached to the cells below it.
    /// </summary>
    ASPOSE_CELLS_API PlacementType GetPlacement();
    /// <summary>
    /// Represents the way the chart is attached to the cells below it.
    /// </summary>
    ASPOSE_CELLS_API void SetPlacement(PlacementType value);
    /// <summary>
    /// Represents the page setup description in this chart.
    /// </summary>
    ASPOSE_CELLS_API PageSetup GetPageSetup();
    /// <summary>
    /// Returns which axes exist on the chart.
    /// </summary>
    /// <remarks>
    /// Normally, Pie, PieExploded, PiePie,PieBar, Pie3D, Pie3DExploded,Doughnut, DoughnutExploded is no axis.
    /// </remarks>
    ASPOSE_CELLS_API bool HasAxis(AxisType aixsType, bool isPrimary);
    /// <summary>
    /// Switches row/column.
    /// </summary>
    /// <returns>
    /// False means switching row/column fails.
    /// </returns>
    ASPOSE_CELLS_API bool SwitchRowColumn();
    /// <summary>
    /// Gets the data source range of the chart.
    /// </summary>
    /// <returns>The data source.</returns>
    /// <remarks>
    /// Only supports range.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetChartDataRange();
    /// <summary>
    /// Specifies data range for a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    ASPOSE_CELLS_API void SetChartDataRange(const U16String& area, bool isVertical);
    /// <summary>
    /// Specifies data range for a chart.
    /// </summary>
    /// <param name="area">Specifies values from which to plot the data series</param>
    /// <param name="isVertical">Specifies whether to plot the series from a range of cell values by row or by column.</param>
    ASPOSE_CELLS_API void SetChartDataRange(const char16_t* area, bool isVertical);
    /// <summary>
    /// Gets the line.
    /// </summary>
    ASPOSE_CELLS_API Line GetLine();
    
};

} } }

#endif
