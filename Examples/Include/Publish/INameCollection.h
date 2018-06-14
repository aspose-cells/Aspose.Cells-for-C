#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IName;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a collection of all the <see cref="IName" />
			///  objects in the spreadsheet. 
			/// </summary>
	class ASPOSE_CELLS_API INameCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Defines a new name.
			/// </summary>
			/// <param name="text" >The text to use as the name.</param>
			/// <returns><see cref="IName" />
			///  object index.</returns>
			/// <remarks>Name cannot include spaces and cannot look like cell references.</remarks>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> text)=0;
			/// <summary>
			///  Gets the <see cref="IName" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IName> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			///  Gets the <see cref="IName" />
			///  element with the specified name.
			///  </summary>
			/// <param name="text" >Name text.</param>
			/// <returns>The element with the specified name.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IName> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> text)=0;
			/// <summary>
			/// Remove an array of name
			/// </summary>
			/// <param name="names" >The names' text.</param>
			 virtual void Remove(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> names)=0;
			/// <summary>
			/// Remove the name.
			/// </summary>
			/// <param name="text" >The name text.</param>
			 virtual void Remove(intrusive_ptr<Aspose::Cells::System::String> text)=0;
			/// <summary>
			/// Remove the name at the specific index.
			/// </summary>
			/// <param name="index" />
			/// 
			/// <remarks>
			/// Please make sure that the name is not referred by the other formulas before calling the method.
			/// And if the name is referred, please only call SetRefersTo(NULL) of IName.
			/// </remarks>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Remove all defined names which are not refered by the formulas and data source.
			/// If the defined name is refered, we only call SetRefersTo(NULL) of IName, and hide them.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Remove the duplicate defined names
			/// </summary>
			 virtual void RemoveDuplicateNames()=0;
			/// <summary>
			/// Sorts defined names.
			/// </summary>
			/// <remarks>If you create a large amount of named ranges in the Excel file, please call this method after all named ranges are created and before saving </remarks>
			 virtual void Sort()=0;

	};
}
}
