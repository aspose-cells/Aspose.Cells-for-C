#pragma once
namespace Aspose {
namespace Cells {
namespace Charts {
			/// <summary>
			/// Enumerates all chart types used in Excel.
			/// </summary>
	enum ChartType 

	{

			/// <summary>
			/// Represents Area Chart.
			/// </summary>
			ChartType_Area ,
			/// <summary>
			/// Represents Stacked Area Chart.
			/// </summary>
			ChartType_AreaStacked ,
			/// <summary>
			/// Represents 100% Stacked Area Chart.
			/// </summary>
			ChartType_Area100PercentStacked ,
			/// <summary>
			/// Represents 3D Area Chart.
			/// </summary>
			ChartType_Area3D ,
			/// <summary>
			/// Represents 3D Stacked Area Chart.
			/// </summary>
			ChartType_Area3DStacked ,
			/// <summary>
			/// Represents 3D 100% Stacked Area Chart.
			/// </summary>
			ChartType_Area3D100PercentStacked ,
			/// <summary>
			/// Represents Bar Chart: Clustered Bar Chart.
			/// </summary>
			ChartType_Bar ,
			/// <summary>
			/// Represents Stacked Bar Chart.
			/// </summary>
			ChartType_BarStacked ,
			/// <summary>
			/// Represents 100% Stacked Bar Chart.
			/// </summary>
			ChartType_Bar100PercentStacked ,
			/// <summary>
			/// Represents 3D Colustered Bar Chart.
			/// </summary>
			ChartType_Bar3DClustered ,
			/// <summary>
			/// Represents 3D Stacked Bar Chart.
			/// </summary>
			ChartType_Bar3DStacked ,
			/// <summary>
			/// Represents 3D 100% Stacked Bar Chart.
			/// </summary>
			ChartType_Bar3D100PercentStacked ,
			/// <summary>
			/// Represents Bubble Chart.
			/// </summary>
			ChartType_Bubble ,
			/// <summary>
			/// Represents 3D Bubble Chart. 
			/// </summary>
			ChartType_Bubble3D ,
			/// <summary>
			/// Represents Column Chart: Clustered Column Chart.
			/// </summary>
			ChartType_Column ,
			/// <summary>
			/// Represents Stacked Column Chart.
			/// </summary>
			ChartType_ColumnStacked ,
			/// <summary>
			/// Represents 100% Stacked Column Chart.
			/// </summary>
			ChartType_Column100PercentStacked ,
			/// <summary>
			/// Represents 3D Column Chart.
			/// </summary>
			ChartType_Column3D ,
			/// <summary>
			/// Represents 3D Colustered Column Chart.
			/// </summary>
			ChartType_Column3DClustered ,
			/// <summary>
			/// Represents 3D Stacked Column Chart.
			/// </summary>
			ChartType_Column3DStacked ,
			/// <summary>
			/// Represents 3D 100% Stacked Column Chart.
			/// </summary>
			ChartType_Column3D100PercentStacked ,
			/// <summary>
			/// Represents Cone Chart.
			/// </summary>
			ChartType_Cone ,
			/// <summary>
			/// Represents Stacked Cone Chart.
			/// </summary>
			ChartType_ConeStacked ,
			/// <summary>
			/// Represents 100% Stacked Cone Chart.
			/// </summary>
			ChartType_Cone100PercentStacked ,
			/// <summary>
			/// Represents Conical Bar Chart.
			/// </summary>
			ChartType_ConicalBar ,
			/// <summary>
			/// Represents Stacked Conical Bar Chart.
			/// </summary>
			ChartType_ConicalBarStacked ,
			/// <summary>
			/// Represents 100% Stacked Conical Bar Chart.
			/// </summary>
			ChartType_ConicalBar100PercentStacked ,
			/// <summary>
			/// Represents 3D Conical Column Chart.
			/// </summary>
			ChartType_ConicalColumn3D ,
			/// <summary>
			/// Represents Cylinder Chart.
			/// </summary>
			ChartType_Cylinder ,
			/// <summary>
			/// Represents Stacked Cylinder Chart.
			/// </summary>
			ChartType_CylinderStacked ,
			/// <summary>
			/// Represents 100% Stacked Cylinder Chart.
			/// </summary>
			ChartType_Cylinder100PercentStacked ,
			/// <summary>
			/// Represents Cylindrical Bar Chart.
			/// </summary>
			ChartType_CylindricalBar ,
			/// <summary>
			/// Represents Stacked Cylindrical Bar Chart.
			/// </summary>
			ChartType_CylindricalBarStacked ,
			/// <summary>
			/// Represents 100% Stacked Cylindrical Bar Chart.
			/// </summary>
			ChartType_CylindricalBar100PercentStacked ,
			/// <summary>
			/// Represents 3D Cylindrical Column Chart.
			/// </summary>
			ChartType_CylindricalColumn3D ,
			/// <summary>
			/// Represents Doughnut Chart.
			/// </summary>
			ChartType_Doughnut ,
			/// <summary>
			/// Represents Exploded Doughnut Chart.
			/// </summary>
			ChartType_DoughnutExploded ,
			/// <summary>
			/// Represents Line Chart.
			/// </summary>
			ChartType_Line ,
			/// <summary>
			/// Represents Stacked Line Chart.
			/// </summary>
			ChartType_LineStacked ,
			/// <summary>
			/// Represents 100% Stacked Line Chart.
			/// </summary>
			ChartType_Line100PercentStacked ,
			/// <summary>
			/// Represents Line Chart with data markers.
			/// </summary>
			ChartType_LineWithDataMarkers ,
			/// <summary>
			/// Represents Stacked Line Chart with data markers.
			/// </summary>
			ChartType_LineStackedWithDataMarkers ,
			/// <summary>
			/// Represents 100% Stacked Line Chart with data markers.
			/// </summary>
			ChartType_Line100PercentStackedWithDataMarkers ,
			/// <summary>
			/// Represents 3D Line Chart.
			/// </summary>
			ChartType_Line3D ,
			/// <summary>
			/// Represents Pie Chart.
			/// </summary>
			ChartType_Pie ,
			/// <summary>
			/// Represents 3D Pie Chart.
			/// </summary>
			ChartType_Pie3D ,
			/// <summary>
			/// Represents Pie of Pie Chart.
			/// </summary>
			ChartType_PiePie ,
			/// <summary>
			/// Represents Exploded Pie Chart.
			/// </summary>
			ChartType_PieExploded ,
			/// <summary>
			/// Represents 3D Exploded Pie Chart.
			/// </summary>
			ChartType_Pie3DExploded ,
			/// <summary>
			/// Represents Bar of Pie Chart.
			/// </summary>
			ChartType_PieBar ,
			/// <summary>
			/// Represents Pyramid Chart.
			/// </summary>
			ChartType_Pyramid ,
			/// <summary>
			/// Represents Stacked Pyramid Chart.
			/// </summary>
			ChartType_PyramidStacked ,
			/// <summary>
			/// Represents 100% Stacked Pyramid Chart.
			/// </summary>
			ChartType_Pyramid100PercentStacked ,
			/// <summary>
			/// Represents Pyramid Bar Chart.
			/// </summary>
			ChartType_PyramidBar ,
			/// <summary>
			/// Represents Stacked Pyramid Bar Chart.
			/// </summary>
			ChartType_PyramidBarStacked ,
			/// <summary>
			/// Represents 100% Stacked Pyramid Bar Chart.
			/// </summary>
			ChartType_PyramidBar100PercentStacked ,
			/// <summary>
			/// Represents 3D Pyramid Column Chart.
			/// </summary>
			ChartType_PyramidColumn3D ,
			/// <summary>
			/// Represents Radar Chart.
			/// </summary>
			ChartType_Radar ,
			/// <summary>
			/// Represents Radar Chart with data markers.
			/// </summary>
			ChartType_RadarWithDataMarkers ,
			/// <summary>
			/// Represents Filled Radar Chart.
			/// </summary>
			ChartType_RadarFilled ,
			/// <summary>
			/// Represents Scatter Chart.
			/// </summary>
			ChartType_Scatter ,
			/// <summary>
			/// Represents Scatter Chart connected by curves, with data markers.
			/// </summary>
			ChartType_ScatterConnectedByCurvesWithDataMarker ,
			/// <summary>
			/// Represents Scatter Chart connected by curves, without data markers.
			/// </summary>
			ChartType_ScatterConnectedByCurvesWithoutDataMarker ,
			/// <summary>
			/// Represents Scatter Chart connected by lines, with data markers.
			/// </summary>
			ChartType_ScatterConnectedByLinesWithDataMarker ,
			/// <summary>
			/// Represents Scatter Chart connected by lines, without data markers.
			/// </summary>
			ChartType_ScatterConnectedByLinesWithoutDataMarker ,
			/// <summary>
			/// Represents High-Low-Close Stock Chart.
			/// </summary>
			ChartType_StockHighLowClose ,
			/// <summary>
			/// Represents Open-High-Low-Close Stock Chart.
			/// </summary>
			ChartType_StockOpenHighLowClose ,
			/// <summary>
			/// Represents Volume-High-Low-Close Stock Chart.
			/// </summary>
			ChartType_StockVolumeHighLowClose ,
			/// <summary>
			/// Represents Volume-Open-High-Low-Close Stock Chart.
			/// </summary>
			ChartType_StockVolumeOpenHighLowClose ,
			/// <summary>
			/// Represents Surface Chart: 3D Surface Chart.
			/// </summary>
			ChartType_Surface3D ,
			/// <summary>
			/// Represents Wireframe 3D Surface Chart.
			/// </summary>
			ChartType_SurfaceWireframe3D ,
			/// <summary>
			/// Represents Contour Chart.
			/// </summary>
			ChartType_SurfaceContour ,
			/// <summary>
			/// Represents Wireframe Contour Chart.
			/// </summary>
			ChartType_SurfaceContourWireframe ,
			/// <summary>
			/// The series is laid out as box and whisker.
			/// </summary>
			ChartType_BoxWhisker ,
			/// <summary>
			/// The series is laid out as a funnel.
			/// </summary>
			ChartType_Funnel ,
			/// <summary>
			/// The series is laid out as pareto lines.
			/// </summary>
			ChartType_ParetoLine ,
			/// <summary>
			/// The series is laid out as a sunburst.
			/// </summary>
			ChartType_Sunburst ,
			/// <summary>
			/// The series is laid out as a treemap.
			/// </summary>
			ChartType_Treemap ,
			/// <summary>
			/// The series is laid out as a waterfall.
			/// </summary>
			ChartType_Waterfall ,
			/// <summary>
			/// The series is laid out as a histogram.
			/// </summary>
			ChartType_Histogram ,
	};


}

}

}
