#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a referred object by the formula.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IReferredArea : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates whether this is an external link.
			/// </summary>
			/// 
			/// 
			 virtual bool IsExternalLink()=0;
			/// <summary>
			///  
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetExternalFileName()=0;
			/// <summary>
			/// Indicates which sheet this is in
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSheetName()=0;
			/// <summary>
			/// Indicates whether this is an area.
			/// </summary>
			/// 
			/// <remarks>
			/// If this is not an area, only StartRow and StartColumn effect.
			/// </remarks>
			/// 
			/// 
			 virtual bool IsArea()=0;
			/// <summary>
			/// The end column of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetEndColumn()=0;
			/// <summary>
			/// The start column of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetStartColumn()=0;
			/// <summary>
			/// The end row of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetEndRow()=0;
			/// <summary>
			/// The start row of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetStartRow()=0;
			/// <summary>
			/// Gets cell values in this area.
			/// </summary>
			/// 
			/// <returns>If this area is invalid, "#REF!" will be returned;
			/// If this area is one single cell, then return the cell value object;
			/// Otherwise return one array for all values in this area.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValues()=0;
			/// <summary>
			/// Gets cell value with given offset from the top-left of this area.
			/// </summary>
			/// 
			/// <param name="rowOffset" >row offset from the start row of this area</param>
			/// 
			/// <param name="colOffset" >column offset from the start row of this area</param>
			/// 
			/// <returns>"#REF!" if this area is invalid;
			/// "#N/A" if given offset out of this area;
			/// Otherwise return the cell value at given position.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue(Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 colOffset)=0;

	};
}
}
