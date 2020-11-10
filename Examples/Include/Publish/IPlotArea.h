#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IChartFrame.h"

namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the plot area in a chart. 
			/// </summary>
	class ASPOSE_CELLS_API IPlotArea : virtual public Aspose::Cells::Charts::IChartFrame
	{
		public:
			/// <summary>
			/// Gets the x coordinate of the upper left corner of plot-area bounding box in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual Aspose::Cells::Systems::Int32 GetX()=0;
			/// <summary>
			/// Sets the x coordinate of the upper left corner of plot-area bounding box in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual void SetX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the y coordinate of the upper top corner  of plot-area bounding box in units of 1/4000 of the chart area.	
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual Aspose::Cells::Systems::Int32 GetY()=0;
			/// <summary>
			/// Sets the y coordinate of the upper top corner  of plot-area bounding box in units of 1/4000 of the chart area.	
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual void SetY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the height of plot-area bounding box in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual Aspose::Cells::Systems::Int32 GetHeight()=0;
			/// <summary>
			/// Sets the height of plot-area bounding box in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual void SetHeight(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the width of plot-area bounding box in units of 1/4000 of the chart area.	
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual Aspose::Cells::Systems::Int32 GetWidth()=0;
			/// <summary>
			/// Sets the width of plot-area bounding box in units of 1/4000 of the chart area.	
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			  virtual void SetWidth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetInnerX()=0;
			/// <summary>
			/// Sets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual void SetInnerX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetInnerY()=0;
			/// <summary>
			/// Sets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual void SetInnerY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the height of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetInnerHeight()=0;
			/// <summary>
			/// Sets the height of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual void SetInnerHeight(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the width  of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetInnerWidth()=0;
			/// <summary>
			/// Sets the width  of plot area in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks> 
			/// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
			/// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
			/// <p>The <b>X</b>
			/// , <b>Y</b>
			/// , <b>Width</b>
			///  and <b>Height</b>
			///  of <b>PlotArea</b>
			///  represents the plot-area 
			/// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks. 
			/// If you want to get actual size of plot area, you should call <b>InnerX</b>
			/// , <b>InnerY</b>
			/// , <b>InnerWidth</b>
			///  and 
			/// <b>InnerHeight</b>
			///  properties.</p>
			///  
			/// <p>For excel 2007 or latter, the defaut value is zero. you should call get the value after calling Chart.Calculate().</p>
			///  
			/// </remarks>
			 virtual void SetInnerWidth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Set position of the plot area to automatic
			/// </summary>
			  virtual void SetPositionAuto()=0;

	};
}
}
}
