#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"

namespace Aspose {
	namespace Cells {
		enum DirectoryType;
		class IExternalLink;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents external links collection in a workbook.
			/// </summary>
			/// <example><code>
			/// [C++]
			/// //Open a file with external links
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(new String("d:\\book1.xls"));
			/// 
			/// //Change external link data source
			/// workbook->GetIWorksheets()->GetIExternalLinks()->GetObjectByIndex(0)->SetDataSource(new String("d:\\link.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IExternalLinkCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the number of elements actually contained in the collection.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			/// Adds an external link.
			/// </summary>
			/// <param name="fileName" >The external file name.</param>
			/// <param name="sheetNames" >All sheet names of the external file.</param>
			/// <returns>The position of the external name in this list. </returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNames)=0;
			/// <summary>
			/// Add an external link .
			/// </summary>
			/// <param name="directoryType" >The directory type of the file name.</param>
			/// <param name="fileName" >the file name.</param>
			/// <param name="sheetNames" >All sheet names of the external file.</param>
			/// <returns>The position of the external name in this list. </returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::DirectoryType directoryType , intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNames)=0;
			/// <summary>
			///  Gets the <see cref="IExternalLink" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IExternalLink> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;

	};
}
}
