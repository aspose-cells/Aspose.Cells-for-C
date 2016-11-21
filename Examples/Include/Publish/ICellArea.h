#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/IComparable.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represent an area of cells.
			/// </summary>
			/// 
	class ASPOSE_CELLS_API ICellArea : public Aspose::Cells::System::IComparable , public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Internal use only.
			/// </summary>
			/// 
			/// <param name="obj" />
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 CompareTo(intrusive_ptr<Aspose::Cells::System::Object> obj)=0;
			/// <summary>
			/// Returns a string represents the current Worksheet object.
			/// </summary>
			/// 
			/// <returns/>
			/// 
			/// 
			  virtual intrusive_ptr<Aspose::Cells::System::String> ToString()=0;
public:
			/// <summary>
			/// Create a cell area.
			/// </summary>
			/// 
			/// <param name="startRow" >The start row.</param>
			/// 
			/// <param name="startColumn" >The start column.</param>
			/// 
			/// <param name="endRow" >The end row.</param>
			/// 
			/// <param name="endColumn" >The end column.</param>
			/// 
			/// <returns>Return an <see cref="ICellArea" /></returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::ICellArea> 		CreateICellArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			/// <summary>
			/// Create a cell area.
			/// </summary>
			/// 
			/// <param name="startCellName" >The top-left cell of the range.</param>
			/// 
			/// <param name="endCellName" >The bottom-right cell of the range.</param>
			/// 
			/// <returns>Return an <see cref="ICellArea" /></returns>
			/// 
			/// 
			static  intrusive_ptr<Aspose::Cells::ICellArea> 		CreateICellArea(intrusive_ptr<Aspose::Cells::System::String> startCellName , intrusive_ptr<Aspose::Cells::System::String> endCellName);
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
