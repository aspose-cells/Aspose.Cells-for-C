#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ChartType;
			class IChart;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates a collection of <see cref="Chart" />
			///  objects.
			/// </summary>
			/// <example><code>
			/// [C++]
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(); 
			/// intrusive_ptr<IChartCollection> charts = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICharts();
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a chart to the collection.
			/// </summary>
			/// <param name="type" >Chart type</param>
			/// <param name="left" >The x offset to corner</param>
			/// <param name="top" >The y offset to corner</param>
			/// <param name="width" >The chart width</param>
			/// <param name="height" >The chart height</param>
			/// <returns><see cref="IChart" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 AddFloatingChart(Aspose::Cells::Charts::ChartType type , Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height)=0;
			/// <summary>
			/// Adds a chart to the collection.
			/// </summary>
			/// <param name="type" >Chart type</param>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <returns><see cref="IChart" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::Charts::ChartType type , Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 lowerRightRow , Aspose::Cells::System::Int32 lowerRightColumn)=0;
			/// <summary>
			///  Gets the <see cref="IChart" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChart> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the chart by the name.
			/// </summary>
			/// <param name="name" > The chart name.</param>
			/// <returns>The chart.</returns>
			/// <remarks>
			/// The default chart name is null. So you have to explicitly set the name of the chart.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChart> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Remove a chart at the specific index.
			/// </summary>
			/// <param name="index" >The chart index.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Clear all charts.
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
}
