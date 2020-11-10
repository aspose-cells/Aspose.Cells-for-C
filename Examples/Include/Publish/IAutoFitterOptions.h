#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all auto fitter options.
			/// </summary>
	class ASPOSE_CELLS_API IAutoFitterOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates whether auto fit row height when the cells is merged in a row.
			/// The default value is false.
			/// </summary>
			/// <remarks>
			/// If the cells in merged in a row and auto fit the rows in MS Excel,
			/// MS Excel do not expand the row height.
			/// If this option is true, Aspose.Cells will expand the row height to fit the cells' data.
			/// </remarks>
			 virtual bool GetAutoFitMergedCells()=0;
			/// <summary>
			/// Indicates whether auto fit row height when the cells is merged in a row.
			/// The default value is false.
			/// </summary>
			/// <remarks>
			/// If the cells in merged in a row and auto fit the rows in MS Excel,
			/// MS Excel do not expand the row height.
			/// If this option is true, Aspose.Cells will expand the row height to fit the cells' data.
			/// </remarks>
			 virtual void SetAutoFitMergedCells(bool value)=0;
			/// <summary>
			/// Indicates whether only fit the rows which height are not customed.
			/// </summary>
			 virtual bool GetOnlyAuto()=0;
			/// <summary>
			/// Indicates whether only fit the rows which height are not customed.
			/// </summary>
			 virtual void SetOnlyAuto(bool value)=0;
			/// <summary>
			/// Ingores the hidden rows/columns.
			/// </summary>
			 virtual bool GetIgnoreHidden()=0;
			/// <summary>
			/// Ingores the hidden rows/columns.
			/// </summary>
			 virtual void SetIgnoreHidden(bool value)=0;
			/// <summary>
			/// Gets the max row height(in unit of Point) when autofitting rows.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetMaxRowHeight()=0;
			/// <summary>
			/// Sets the max row height(in unit of Point) when autofitting rows.
			/// </summary>
			 virtual void SetMaxRowHeight(Aspose::Cells::Systems::Double value)=0;

	};
}
}
