#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
		class IValidation;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents data validation collection.
			/// </summary>
	class ASPOSE_CELLS_API IValidationCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a data validation to the collection.
			/// </summary>
			/// <returns><see cref="IValidation" />
			///  object index.</returns>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Add(ICellArea) method of IValidationCollection.
			/// This property will be removed 12 months later since JANUARY 2015. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::System::Int32 Add()=0;
			/// <summary>
			/// Adds a data validation to the collection.
			/// </summary>
			/// <param name="ca" >The area contains this validation.</param>
			/// <returns><see cref="IValidation" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			/// Add an <see cref="IValidation" />
			///  to the collection.
			/// </summary>
			/// <param name="validation" > A validation object.</param>
			/// <returns><see cref="IValidation" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::IValidation> validation)=0;
			/// <summary>
			///  Gets the <see cref="IValidation" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IValidation> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Removes all validation setting on the cell.
			/// </summary>
			/// <param name="row" >The row index of the cell.</param>
			/// <param name="column" >The column index of the cell.</param>
			 virtual void RemoveACell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			///  Removes all validation setting on the range..
			///  </summary>
			/// <param name="ca" >The range which contains the validations setting.</param>
			 virtual void 		RemoveArea(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			/// Gets the validation applied to given cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>Returns an <see cref="IValidation" />
			///  object or null if there is no validation for given cell</returns>
			 virtual intrusive_ptr<Aspose::Cells::IValidation> 		GetIValidationInCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;

	};
}
}
