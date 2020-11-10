#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/Drawing/Bitmap.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "Aspose.Cells.Systems/Int64.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Size.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IChartShape;
			class IShapeCollection;
			enum PlacementType;
			class ILine;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IPivotOptions;
			enum PlotEmptyCellsType;
			enum ChartType;
			class ISeriesCollection;
			class ITitle;
			class IChartFrame;
			class IPlotArea;
			class IChartArea;
			class IAxis;
			class ILegend;
			class IChartDataTable;
			class IFloor;
			class IWalls;
			enum AxisType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IWorksheet;
		enum PrintSizeType;
		class IPageSetup;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Encapsulates the object that represents a single Excel chart.
			///  </summary>
			/// <example>
			///  <code>
			///  [C++]
			///  
	        ///  //Create a new Workbook.
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  
			///  //Get the first worksheet in the workbook.
			///  intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// 
			///  intrusive_ptr<ICells> cells = sheet->GetICells();
			///  cells->GetObjectByIndex(0, 1)->PutValue((StringPtr)(new String("Income")));
			///  cells->GetObjectByIndex(1, 0)->PutValue((StringPtr)new String("Company A"));
			///  cells->GetObjectByIndex(2, 0)->PutValue((StringPtr)new String("Company B"));
			///  cells->GetObjectByIndex(3, 0)->PutValue((StringPtr)new String("Company C"));
			///  cells->GetObjectByIndex(1, 1)->PutValue(10000);
			///  cells->GetObjectByIndex(2, 1)->PutValue(20000);
			///  cells->GetObjectByIndex(3, 1)->PutValue(30000);
			/// 			
			///  int chartIndex = sheet->GetICharts()->Add(ChartType_Column, 9, 9, 21, 15);
			/// 
			///  intrusive_ptr<IChart> chart = sheet->GetICharts()->GetObjectByIndex(chartIndex);
			///  chart->GetNISeries()->Add(new String("B2:B4"), true);
			///  chart->GetNISeries()->SetCategoryData(new String("A2:A4"));
			/// 
			///  intrusive_ptr<ISeries> aSeries = chart->GetNISeries()->GetObjectByIndex(0);
			///  chart->SetLegendShown( true);
			///  chart->GetITitle()->SetText (new String("Income Analysis"));
			///  workbook->Save(new String("D:\\test\\ChartTest.xls"));
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IChart : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the builtin style.
			/// </summary>
			/// <remarks>
			/// It should be between 1 and 48.
			/// Return -1 if it's not be set.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetStyle()=0;
			/// <summary>
			/// Sets the builtin style.
			/// </summary>
			 virtual void SetStyle(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the chartShape;
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IChartShape> 		GetIChartObject()=0;
			/// <summary>
			/// Indicates whether hide the pivot chart field buttons only when the chart is PivotChart
			/// </summary>
			 virtual bool GetHidePivotFieldButtons()=0;
			/// <summary>
			/// Indicates whether hide the pivot chart field buttons only when the chart is PivotChart
			/// </summary>
			 virtual void SetHidePivotFieldButtons(bool value)=0;
			/// <summary>
			/// Specifies the pivot controls that appear on the chart
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IPivotOptions> 		GetIPivotOptions()=0;
			/// <summary>
			/// The source is the data of the pivotTable.
			/// If PivotSource is not empty ,the chart is PivotChart.
			/// </summary>
			/// <remarks>If the pivot table  "PivotTable1" in the Worksheet "Sheet1" in the file "Book1.xls".
			/// The pivotSource could be "[Book1.xls]Sheet1!PivotTable1" if the chart and the PivotTable is not in the same workbook.
			/// If you set this method ,the previous data source setting will be lost.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPivotSource()=0;
			/// <summary>
			/// The source is the data of the pivotTable.
			/// If PivotSource is not empty ,the chart is PivotChart.
			/// </summary>
			/// <remarks>If the pivot table  "PivotTable1" in the Worksheet "Sheet1" in the file "Book1.xls".
			/// The pivotSource could be "[Book1.xls]Sheet1!PivotTable1" if the chart and the PivotTable is not in the same workbook.
			/// If you set this property ,the previous data source setting will be lost.
			/// </remarks>
			 virtual void SetPivotSource(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Detects if a chart's data source has changed.
			/// </summary>
			/// <remarks>
			/// The method detects the changes in the chart's data source before rendering the chart to image format.
			/// At first Chart.toImage call, the chart source data (e.g. XValuesParseData, ValuesParseData) will be recorded.
			/// Before calling the Chart.toImage method again, call IsChartDataChanged method to check if Chart needs re-rendering.
			/// </remarks>
			/// <returns>Returns true if the chart has changed otherwise returns false</returns>
			 virtual bool IsChartDataChanged()=0;
			/// <summary>
			/// Refreshes pivot chart's data  from it's pivot data source.
			/// </summary>
			/// <remarks>
			/// We will gather data from pivot data source to the pivot chart cache.
			/// This method is only used to gather all data to a pivot chart.
			/// </remarks>
			 virtual void RefreshPivotData()=0;
			/// <summary>
			/// Gets how to plot the empty cells.
			/// </summary>
			 virtual Aspose::Cells::Charts::PlotEmptyCellsType GetPlotEmptyCellsType()=0;
			/// <summary>
			/// Sets  how to plot the empty cells.
			/// </summary>
			 virtual void SetPlotEmptyCellsType(Aspose::Cells::Charts::PlotEmptyCellsType value)=0;
			/// <summary>
			/// Indicates whether only plot visible cells.
			/// </summary>
			 virtual bool GetPlotVisibleCells()=0;
			/// <summary>
			/// Indicates whether only plot visible cells.
			/// </summary>
			 virtual void SetPlotVisibleCells(bool value)=0;
			/// <summary>
			/// Gets the name of the chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Sets the name of the chart.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// True if Microsoft Excel resizes the chart to match the size of the chart sheet window.
			/// </summary>
			 virtual bool GetSizeWithWindow()=0;
			/// <summary>
			/// True if Microsoft Excel resizes the chart to match the size of the chart sheet window.
			/// </summary>
			 virtual void SetSizeWithWindow(bool value)=0;
			/// <summary>
			/// Gets the worksheet which contains this chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetIWorksheet()=0;
			/// <summary>
			/// Returns all drawing shapes in this chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapeCollection> 		GetIShapes()=0;
			/// <summary>
			/// Gets the printed chart size.
			/// </summary>
			 virtual Aspose::Cells::PrintSizeType GetPrintSize()=0;
			/// <summary>
			/// Sets the printed chart size.
			/// </summary>
			 virtual void SetPrintSize(Aspose::Cells::PrintSizeType value)=0;
			/// <summary>
			/// Gets a chart's type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartType GetType()=0;
			/// <summary>
			/// Sets a chart's type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Charts::ChartType value)=0;
			/// <summary>
			/// Moves the chart to a specified location.
			/// </summary>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			 virtual void Move(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 lowerRightRow , Aspose::Cells::Systems::Int32 lowerRightColumn)=0;
			/// <summary>
			/// Gets a <see cref="ISeriesCollection" />
			///  collection representing the data series in the chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISeriesCollection> 		GetNISeries()=0;
			/// <summary>
			/// Gets the chart's title.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITitle> 		GetITitle()=0;
			/// <summary>
			///  Gets the chart's plot area which does not inculde axis tick lables.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartFrame> 		GetIChartPlotAreaWithoutTickLabels()=0;
			/// <summary>
			/// Gets the chart's plot area which includes axis tick lables.
			/// </summary>
			/// <remarks></remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IPlotArea> 		GetIPlotArea()=0;
			/// <summary>
			/// Gets the chart area in the worksheet
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartArea> 		GetIChartArea()=0;
			/// <summary>
			/// Gets the chart's X axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IAxis> 		GetCategoryIAxis()=0;
			/// <summary>
			/// Gets the chart's Y axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IAxis> 		GetValueIAxis()=0;
			/// <summary>
			/// Gets the chart's second Y axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IAxis> 		GetSecondValueIAxis()=0;
			/// <summary>
			/// Gets the chart's second X axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IAxis> 		GetSecondCategoryIAxis()=0;
			/// <summary>
			/// Gets the chart's series axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IAxis> 		GetSeriesIAxis()=0;
			/// <summary>
			/// Gets the chart legend.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegend> 		GetILegend()=0;
			/// <summary>
			/// Represents the chart data table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartDataTable> 		GetIChartDataTable()=0;
			/// <summary>
			/// Gets a value indicating whether the chart legend will be displayed. Default is true.
			/// </summary>
			 virtual bool IsLegendShown()=0;
			/// <summary>
			/// Sets a value indicating whether the chart legend will be displayed. Default is true.
			/// </summary>>
			 virtual void SetLegendShown(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the chart legend will be displayed. Default is true.
			/// </summary>
			 virtual bool GetShowLegend()=0;
			/// <summary>
			/// Sets a value indicating whether the chart legend will be displayed. Default is true.
			/// </summary>
			 virtual void SetShowLegend(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the chart area is rectangular cornered.
			/// Default is true.
			/// </summary>
			 virtual bool IsRectangularCornered()=0;
			/// <summary>
			/// Sets a value indicating whether the chart area is rectangular cornered.
			/// Default is true.
			/// </summary>
			 virtual void SetRectangularCornered(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the chart displays a data table. 
			/// </summary>
			 virtual bool IsDataTableShown()=0;
			/// <summary>
			/// Sets a value indicating whether the chart displays a data table. 
			/// </summary>
			 virtual void SetDataTableShown(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the chart displays a data table. 
			/// </summary>
			 virtual bool GetShowDataTable()=0;
			/// <summary>
			/// Sets a value indicating whether the chart displays a data table. 
			/// </summary>
			 virtual void SetShowDataTable(bool value)=0;
			/// <summary>
			/// Gets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetFirstSliceAngle()=0;
			/// <summary>
			/// Gets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual void SetFirstSliceAngle(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetGapWidth()=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual void SetGapWidth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the distance between the data series in a 3-D chart, as a percentage of the marker width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetGapDepth()=0;
			/// <summary>
			/// Sets the distance between the data series in a 3-D chart, as a percentage of the marker width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual void SetGapDepth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Calcuate the custom position of plot area, axises if the position of them are auto assigned.
			/// </summary>
			 virtual void Calculate()=0;
			/// <summary>
			///  Returns a <see cref="IFloor" />
			///  object that represents the walls of a 3-D chart.
			/// </summary>
			/// <remarks>This property doesn't apply to 3-D pie charts.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IFloor> 		GetIFloor()=0;
			/// <summary>
			/// Returns a <see cref="IWalls" />
			///  object that represents the walls of a 3-D chart.
			/// </summary>
			/// <remarks>This property doesn't apply to 3-D pie charts.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IWalls> 		GetIWalls()=0;
			/// <summary>
			/// Returns a <see cref="IWalls" />
			///  object that represents the back wall of a 3-D chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IWalls> 		GetBackIWall()=0;
			/// <summary>
			/// Returns a <see cref="IWalls" />
			///  object that represents the side wall of a 3-D chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IWalls> 		GetSideIWall()=0;
			/// <summary>
			/// True if gridlines are drawn two-dimensionally on a 3-D chart.
			/// </summary>
			 virtual bool GetWallsAndGridlines2D()=0;
			/// <summary>
			/// True if gridlines are drawn two-dimensionally on a 3-D chart.
			/// </summary>
			 virtual void SetWallsAndGridlines2D(bool value)=0;
			/// <summary>
			/// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
			/// </summary>
			/// <remarks>
			/// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44. 
			/// The default value is 20. Applies only to 3-D charts. 
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetRotationAngle()=0;
			/// <summary>
			/// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
			/// </summary>
			/// <remarks>
			/// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44. 
			/// The default value is 20. Applies only to 3-D charts. 
			/// </remarks>
			 virtual void SetRotationAngle(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
			/// </summary>
			/// <remarks>
			/// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44. 
			/// The default value is 20. Applies only to 3-D charts. 
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetRotation()=0;
			/// <summary>
			/// Represents the rotation of the 3-D chart view (the rotation of the plot area around the z-axis, in degrees).
			/// </summary>
			/// <remarks>
			/// The value of this property must be from 0 to 360, except for 3-D bar charts, where the value must be from 0 to 44. 
			/// The default value is 20. Applies only to 3-D charts. 
			/// </remarks>
			 virtual void SetRotation(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the elevation of the 3-D chart view, in degrees.
			/// </summary>
			/// <remarks>
			/// The chart elevation is the height at which you view the chart, in degrees. 
			/// The default is 15 for most chart types. 
			/// The value of this property must be between -90 and 90, except for 3-D bar charts, where it must be between 0 and 44.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetElevation()=0;
			/// <summary>
			/// Represents the elevation of the 3-D chart view, in degrees.
			/// </summary>
			/// <remarks>
			/// The chart elevation is the height at which you view the chart, in degrees. 
			/// The default is 15 for most chart types. 
			/// The value of this property must be between -90 and 90, except for 3-D bar charts, where it must be between 0 and 44.
			/// </remarks>
			 virtual void SetElevation(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if the chart axes are at right angles.Applies only for 3-D charts(except Column3D and 3-D Pie Charts).
			/// </summary>
			/// <remarks>
			/// If this return True, the Perspective property is ignored.
			/// </remarks>
			 virtual bool GetRightAngleAxes()=0;
			/// <summary>
			/// True if the chart axes are at right angles.Applies only for 3-D charts(except Column3D and 3-D Pie Charts).
			/// </summary>
			/// <remarks>
			/// If this return True, the Perspective property is ignored.
			/// </remarks>
			 virtual void SetRightAngleAxes(bool value)=0;
			/// <summary>
			/// True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart. 
			/// The RightAngleAxes property must be True.
			/// </summary>
			 virtual bool GetAutoScaling()=0;
			/// <summary>
			/// True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart. 
			/// The RightAngleAxes property must be True.
			/// </summary>
			 virtual void SetAutoScaling(bool value)=0;
			/// <summary>
			/// Returns or sets the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetHeightPercent()=0;
			/// <summary>
			/// Returns or sets the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
			/// </summary>
			 virtual void SetHeightPercent(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Returns or sets the perspective for the 3-D chart view. Must be between 0 and 100.
			/// This property is ignored if the RightAngleAxes property is True. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetPerspective()=0;
			/// <summary>
			/// Returns or sets the perspective for the 3-D chart view. Must be between 0 and 100.
			/// This property is ignored if the RightAngleAxes property is True. 
			/// </summary>
			 virtual void SetPerspective(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Indicates whether the chart is a 3d chart.
			/// </summary>
			 virtual bool GetIs3D()=0;
			/// <summary>
			/// Represents the depth of a 3-D chart as a percentage of the chart width (between 20 and 2000 percent). 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetDepthPercent()=0;
			/// <summary>
			/// Represents the depth of a 3-D chart as a percentage of the chart width (between 20 and 2000 percent). 
			/// </summary>
			 virtual void SetDepthPercent(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets a 32-bit <c>Bitmap</c>
			///  object of the chart.
			/// </summary>
			/// <returns>the picture of the chart.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> ToImage()=0;
			/// <summary>
			///  Gets a 32-bit <c>Bitmap</c>
			///  object of the chart.
			///  <c>ImageOrPrintOptions.ImageFormat</c>
			/// , ImageOrPrintOptions.TiffCompression and ImageOrPrintOptions.Quality attributes are ignored.
			///  </summary>
			/// <param name="options" >Addtional image creation options</param>
			/// <returns>the picture of the chart.</returns>
			/// <remarks>
			///  Returns a 32-bit bitmap object, so ImageOrPrintOptions.ImageFormat, ImageOrPrintOptions.TiffCompression and ImageOrPrintOptions.Quality
			///  attributes do not affect the method.
			///  
			///  If the width or height is zero or the chart is not supported according to Supported Charts List, it will return null.
			///  </remarks>
			/// <example>
			///  Gets a bitmap object with 200 x dpi and 300 y dpi.
			///  <code>
			///  
			///  [C++]
			///  intrusive_ptr<IImageOrPrintOptions> options = Factory::CreateIImageOrPrintOptions();
			///  options->SetHorizontalResolution(200);
			///  options->SetVerticalResolution(300);
			///  
			///  intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(new String("c:\test.xls"));
			///  intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> chartObject = wb->GetIWorksheets()->GetObjectByIndex(0)->GetICharts()->GetObjectByIndex(0)->ToImage(options);
			///  </code>
			/// 
			///  </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> 		ToImage(intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Creates the chart image and saves it to a file.
			/// The extension of the file name determines the format of the image.
			/// </summary>
			/// <param name="imageFile" >The image file name with full path.</param>
			/// <remarks><p>The format of the image is specified by using the extension of the file name.
			/// For example, if you specify "myfile.png", then the image will be saved
			/// in the PNG format. The following file extensions are recognized: 
			/// .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
			/// 
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::String> imageFile)=0;
			/// <summary>
			/// Creates the chart image and saves it to a file in the specified format.
			/// </summary>
			/// <param name="imageFile" >The image file name with full path.</param>
			/// <param name="imageFormat" >The format in which to save the image.</param>
			/// <remarks><p>The format of the image is specified by using <c>imageFormat</c>
			/// .
			/// The following formats are supported: 
			/// ImageFormat.Bmp, ImageFormat.Gif, ImageFormat.Png, ImageFormat.Jpeg, ImageFormat.Tiff, ImageFormat.Emf.</p>
			/// 
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::String> imageFile , intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> imageFormat)=0;
			/// <summary>
			/// Creates the chart image and saves it to a file in the Jpeg format.
			/// </summary>
			/// <param name="imageFile" >The image file name with full path.</param>
			/// <param name="jpegQuality" >Jpeg quality.</param>
			/// <remarks>
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::String> imageFile , Aspose::Cells::Systems::Int64 jpegQuality)=0;
			/// <summary>
			/// Creates the chart image and saves it to a stream in the Jpeg format.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			/// <param name="jpegQuality" >Jpeg quality.</param>
			/// <remarks>
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , Aspose::Cells::Systems::Int64 jpegQuality)=0;
			/// <summary>
			/// Creates the chart image and saves it to a stream in the specified format.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			/// <param name="imageFormat" >The format in which to save the image.</param>
			/// <remarks><p>The format of the image is specified by using <c>imageFormat</c>
			/// .
			/// The following formats are supported: 
			/// ImageFormat.Bmp, ImageFormat.Gif, ImageFormat.Png, ImageFormat.Jpeg, ImageFormat.Tiff, ImageFormat.Emf.</p>
			/// 
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> imageFormat)=0;
			/// <summary>
			/// Saves the chart to a pdf file.
			/// </summary>
			/// <param name="fileName" >the pdf file name with full path</param>
			 virtual void ToPdf(intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Creates the chart pdf and saves it to a stream.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			 virtual void ToPdf(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			///  Creates the chart image and saves it to a file.
			///  The extension of the file name determines the format of the image.
			///  </summary>
			/// <param name="imageFile" >The image file name with full path.</param>
			/// <param name="options" >Addtional image creation options</param>
			/// <remarks>
			///  <p>The format of the image is specified by using the extension of the file name.
			///  For example, if you specify "myfile.png", then the image will be saved
			///  in the PNG format. The following file extensions are recognized: 
			///  .bmp, .gif, .png, .jpg, .jpeg, .tiff, .tif, .emf.</p>
			/// 
			///  If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			///  Please refer to <a href="http://www.aspose.com/documentation/.net-components/aspose.cells-for-.net/converting-chart-to-image.html" >Supported Charts List</a>
			///  for more details.
			///  </remarks>
			/// <example>
			///  Saves to Tiff with 300 dpi and CCITT4 compression.
			///  <code>
			///  
			///  [C++]
			///  intrusive_ptr<IImageOrPrintOptions> options = Factory::CreateIImageOrPrintOptions();
			///  options->SetHorizontalResolution(300);
			///  options->SetVerticalResolution(300);
			///  options->SetTiffCompression(TiffCompression_CompressionCCITT4);
			///  intrusive_ptr<IWorkbook> book = Factory::CreateIWorkbook(new String("D:\test.xls"));
			///  book->GetIWorksheets()->GetObjectByIndex(0)->GetICharts()->GetObjectByIndex(0)->ToImage(new String("D:\chart.Tiff"), options);
			///  </code>
			/// 
			///  
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::String> imageFile , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Creates the chart image and saves it to a stream in the specified format.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			/// <param name="options" >Addtional image creation options</param>
			/// <remarks><p>The format of the image is specified by using <c>options.ImageFormat</c>
			/// .
			/// The following formats are supported: 
			/// ImageFormat.Bmp, ImageFormat.Gif, ImageFormat.Png, ImageFormat.Jpeg, ImageFormat.Tiff, ImageFormat.Emf.</p>
			/// 
			/// If the width or height is zero or the chart is not supported according to Supported Charts List, this method will do nothing.
			/// </remarks>
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Gets actual size of chart
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Size> GetActualChartSize()=0;
			/// <summary>
			/// Represents the way the chart is attached to the cells below it.
			/// </summary>
			 virtual Aspose::Cells::Drawing::PlacementType GetPlacement()=0;
			/// <summary>
			/// Represents the way the chart is attached to the cells below it.
			/// </summary>
			 virtual void SetPlacement(Aspose::Cells::Drawing::PlacementType value)=0;
			/// <summary>
			/// Represents the page setup description in this chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IPageSetup> 		GetIPageSetup()=0;
			/// <summary>
			/// Returns which axes exist on the chart.
			/// </summary>
			/// <remarks>
			/// Normarlly, Pie, PieExploded, PiePie,PieBar, Pie3D, Pie3DExploded,Doughnut, DoughnutExploded is no axis.
			/// </remarks>
			 virtual bool HasAxis(Aspose::Cells::Charts::AxisType aixsType , bool isPrimary)=0;
			/// <summary>
			/// Specifies data range for a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			 virtual void SetChartDataRange(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Gets the line.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetILine()=0;

	};
}
}
}
