#pragma once
namespace Aspose {
namespace Cells {
namespace Charts {
			/// <summary>
			/// Represents the way the two sections of either a pie of pie chart or a bar of pie chart are split.
			/// </summary>
	enum ChartSplitType 

	{

			/// <summary>
			/// Represents the data points shall be split between the pie
			/// and the second chart by putting the last Split Position
			/// of the data points in the second chart
			/// </summary>
			ChartSplitType_Position ,
			/// <summary>
			/// Represents the data points shall be split between the pie
			/// and the second chart by putting the data points with
			/// value less than Split Position in the second chart.
			/// </summary>
			ChartSplitType_Value ,
			/// <summary>
			/// Represents the data points shall be split between the pie
			/// and the second chart by putting the points with
			/// percentage less than Split Position percent in the
			/// second chart.
			/// </summary>
			ChartSplitType_PercentValue ,
			/// <summary>
			/// Represents the data points shall be split between the pie
			/// and the second chart according to the InnerCustom Split
			/// values.
			/// </summary>
			ChartSplitType_Custom ,
			/// <summary>
			/// Represents the data points shall be split using the default
			/// mechanism for this chart type.
			/// </summary>
			ChartSplitType_Auto ,
	};


}

}

}
