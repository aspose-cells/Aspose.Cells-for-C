#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			enum PivotFieldType;
			class IPivotField;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a collection of all the PivotField objects
			/// in the PivotTable's specific PivotFields type.
			/// </summary>
	class ASPOSE_CELLS_API IPivotFieldCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			///  Gets the PivotFields type.
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotFieldType GetType()=0;
			/// <summary>
			/// Gets the count of the pivotFields.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			/// Gets the PivotField Object at the specific index.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotField> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the PivotField Object of the specific name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotField> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Adds a PivotField Object to the specific type PivotFields.
			/// </summary>
			/// <param name="baseFieldIndex" >field index in the base PivotFields.</param>
			/// <returns>the index of  the PivotField Object in this PivotFields.</returns>
			 virtual Aspose::Cells::System::Int32 AddByBaseIndex(Aspose::Cells::System::Int32 baseFieldIndex)=0;
			/// <summary>
			/// Adds a PivotField Object to the specific type PivotFields.
			/// </summary>
			/// <param name="pivotField" >a PivotField Object.</param>
			/// <returns>the index of  the PivotField Object in this PivotFields.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField)=0;
			/// <summary>
			/// clear all fields of PivotFieldCollection
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
}
