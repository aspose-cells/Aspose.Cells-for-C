#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// A specified range to be allowed to edit when the sheet protection is ON. 
			/// </summary>
	class ASPOSE_CELLS_API IProtectedRange : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the Range title. This is used as a descriptor, not as a named range definition.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets the Range title. This is used as a descriptor, not as a named range definition.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the <see cref="ICellArea" />
			///  object represents the cell area to be protected.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetICellArea()=0;
			/// <summary>
			/// Gets all referred areas.
			/// </summary>
			/// <returns>Returns all referred areas.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::ICellArea*>> 		GetICellAreas()=0;
			/// <summary>
			/// Adds a referred area to this 
			/// </summary>
			/// <param name="startRow" >The start row.</param>
			/// <param name="startColumn" >The start column.</param>
			/// <param name="endRow" >The end row.</param>
			/// <param name="endColumn" >The end column.</param>
			 virtual void AddArea(Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 endRow , Aspose::Cells::Systems::Int32 endColumn)=0;
			/// <summary>
			/// Represents the password to protect the range.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPassword()=0;
			/// <summary>
			/// Represents the password to protect the range.
			/// </summary>
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The security descriptor defines user accounts who may edit this range without providing a password to access the range.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSecurityDescriptor()=0;
			/// <summary>
			/// The security descriptor defines user accounts who may edit this range without providing a password to access the range.
			/// </summary>
			 virtual void SetSecurityDescriptor(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
