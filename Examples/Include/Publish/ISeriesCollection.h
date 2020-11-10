#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class ISeries;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates a collection of <see cref="Series" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API ISeriesCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="ISeries" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISeries> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="ISeries" />
			///  element by order.
			/// </summary>
			/// <param name="order" >The order of series</param>
			/// <returns>The element series</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISeries> 		GetISeriesByOrder(Aspose::Cells::Systems::Int32 order)=0;
			/// <summary>
			/// Remove at a series at the specific index.
			/// </summary>
			/// <param name="index" >The index.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Sets the range of category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCategoryData()=0;
			/// <summary>
			/// Sets the range of category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  </summary>
			 virtual void SetCategoryData(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSecondCatergoryData()=0;
			/// <summary>
			/// Sets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual void SetSecondCatergoryData(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSecondCategoryData()=0;
			/// <summary>
			/// Sets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual void SetSecondCategoryData(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Directly chanages the orders of the two series.
			/// </summary>
			/// <param name="sourceIndex" >The current index</param>
			/// <param name="destIndex" >The dest index</param>
			 virtual void ChangeSeriesOrder(Aspose::Cells::Systems::Int32 sourceIndex , Aspose::Cells::Systems::Int32 destIndex)=0;
			/// <summary>
			/// Adds the <see cref="ISeriesCollection" />
			///  collection to a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <returns>Return the first index of the added ASeries in the NSeries.</returns>
			/// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, R[1]C[1]:R[3]C[2].</br>
			/// <br>If set data on contiguous cells, use comma to seperate them.For example,R[1]C[1],R[3]C[2].</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 AddR1C1(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Adds the <see cref="ISeriesCollection" />
			///  collection to a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <returns>Return the first index of the added ASeries in the NSeries.</returns>
			/// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, C2:C5.</br>
			/// <br>If set data on non contiguous cells, use comma to seperate them.For example, C2,D5.</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// </summary>
			 virtual bool IsColorVaried()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// </summary>
			 virtual void SetColorVaried(bool value)=0;

	};
}
}
}
