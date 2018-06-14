#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "ILine.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum TrendlineType;
			class IDataLabels;
			class ILegendEntry;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a trendline in a chart.
			/// </summary>
	class ASPOSE_CELLS_API ITrendline : virtual public Aspose::Cells::Drawing::ILine
	{
		public:
			/// <summary>
			/// Returns if Microsoft Excel automatically determines the name of the trendline. 
			/// </summary>
			 virtual bool IsNameAuto()=0;
			/// <summary>
			/// Returns if Microsoft Excel automatically determines the name of the trendline. 
			/// </summary>
			 virtual void SetNameAuto(bool value)=0;
			/// <summary>
			/// Returns the trendline type.
			/// </summary>
			 virtual Aspose::Cells::Charts::TrendlineType GetType()=0;
			/// <summary>
			/// Returns the name of the trendline.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Returns the name of the trendline.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial. 
			/// The order must be between 2 and 6.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetOrder()=0;
			/// <summary>
			/// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial. 
			/// The order must be between 2 and 6.
			/// </summary>
			 virtual void SetOrder(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Returns or sets the period for the moving-average trendline.
			/// </summary>
			/// <remarks>This value should be between 2 and 255.
			/// And it must be less than the number of the chart points in the series</remarks>
			 virtual Aspose::Cells::System::Int32 GetPeriod()=0;
			/// <summary>
			/// Returns or sets the period for the moving-average trendline.
			/// </summary>
			/// <remarks>This value should be between 2 and 255.
			/// And it must be less than the number of the chart points in the series</remarks>
			 virtual void SetPeriod(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
			/// The number of periods must be greater than and equal to zero.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetForward()=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
			/// The number of periods must be greater than and equal to zero.
			/// </summary>
			 virtual void SetForward(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward. 
			/// The number of periods must be greater than and equal to zero.
			/// If the chart type is column ,the number of periods must be between 0 and 0.5
			/// </summary>
			 virtual Aspose::Cells::System::Double GetBackward()=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward. 
			/// The number of periods must be greater than and equal to zero.
			/// If the chart type is column ,the number of periods must be between 0 and 0.5
			/// </summary>
			 virtual void SetBackward(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual bool GetDisplayEquation()=0;
			/// <summary>
			/// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual void SetDisplayEquation(bool value)=0;
			/// <summary>
			/// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual bool GetDisplayRSquared()=0;
			/// <summary>
			/// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual void SetDisplayRSquared(bool value)=0;
			/// <summary>
			/// Returns or sets the point where the trendline crosses the value axis.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetIntercept()=0;
			/// <summary>
			/// Returns or sets the point where the trendline crosses the value axis.
			/// </summary>
			 virtual void SetIntercept(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the DataLabels object for the specified ASeries. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets the legend entry according to this trendline
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntry> 		GetILegendEntry()=0;

	};
}
}
}
