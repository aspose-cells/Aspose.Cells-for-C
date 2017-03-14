#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			namespace Texts {
				enum TextNodeType;
			}
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IWorksheetCollection;
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents a range of characters within the cell text.
			///  </summary>
			/// 
			/// <example>
			///  <code>
			///  
			///  [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Adding a new worksheet to the Excel object
			/// workbook->GetIWorksheets()->Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Accessing the "A1" cell from the worksheet
			/// intrusive_ptr<ICell>  cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));
			/// //Adding some value to the "A1" cell
			/// cell->PutValue((StringPtr)new String("Visit Aspose!"));
			/// //getting charactor
			/// intrusive_ptr<IFontSetting> charactor = cell->GetIFontSetting(6, 7);
			/// //Setting the font of selected characters to bold
			/// charactor->GetIFont()->SetIsBold(true);
			/// //Setting the font color of selected characters to blue
			/// charactor->GetIFont()->SetColor(Color::GetBlue());
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xls"));
			///   
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IFontSetting : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the type of text node.
			/// </summary>
			  virtual Aspose::Cells::Drawing::Texts::TextNodeType GetType()=0;
			/// <summary>
			/// Gets the start index of the characters.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetStartIndex()=0;
			/// <summary>
			/// Gets the length of the characters.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetLength()=0;
			/// <summary>
			/// Returns the font of this object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;

	};
}
}
