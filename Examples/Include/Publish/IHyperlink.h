#pragma once
#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a hyperlink.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Adding a new worksheet to the Workbook object
			/// workbook->GetIWorksheets()->Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Adding a hyperlink to a URL at "A1" cell
			/// worksheet->GetIHyperlinks()->Add(new String("A1"), 1, 1, new String("http://www.aspose.com"));
			/// //Saving the Excel file
			/// workbook->Save(new String("C:\\IHyperlinkTest.xls"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IHyperlink : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the address of a hyperlink.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetAddress()=0;
			/// <summary>
			/// Sets the address of a hyperlink.
			/// </summary>
			 virtual void SetAddress(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the text to be displayed for the specified hyperlink. The default value is the address of the hyperlink. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTextToDisplay()=0;
			/// <summary>
			/// Sets the text to be displayed for the specified hyperlink. 
			/// </summary>
			 virtual void SetTextToDisplay(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the range of hyperlink.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIArea()=0;
			/// <summary>
			/// Gets the screen tip text for the specified hyperlink.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetScreenTip()=0;
			/// <summary>
			/// Sets the screen tip text for the specified hyperlink.
			/// </summary>
			 virtual void SetScreenTip(intrusive_ptr<Aspose::Cells::System::String> value)=0;

	};
}
}
