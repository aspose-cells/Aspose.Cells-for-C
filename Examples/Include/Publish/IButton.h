#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IShape.h"

namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			///  Represents the Forms control: Button
			///  </summary>
			/// <example>
			///  <code>
			/// [C++]
			///  
			///  //Create a new Workbook.
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  
			///  //Get the first worksheet in the workbook.
			///  intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			///  
			///  //Add a new button to the worksheet.
			///  intrusive_ptr<IButton> button = sheet->GetIShapes()->AddIButton(2, 0, 2, 0, 28, 80);
			///  
			///  //Set the caption of the button.
			///  button->SetText(new String("Aspose"));
			///  
			///  //Set the Placement Type, the way the
			///  //button is attached to the cells.
			///  button->SetPlacement(PlacementType_FreeFloating);
			///  
			///  //Set the font name.
			///  button->GetIFont()->SetName(new String("Tahoma"));
			///  
			///  //Set the caption string bold.
			///  button->GetIFont()->SetBold( true);
			///  
			///  //Set the color to blue.
			///  button->GetIFont()->SetColor(Systems::Drawing::Color::GetBlue());
			///  
			///  //Set the hyperlink for the button.
			///  button->AddIHyperlink(new String("http://www.aspose.com/"));
			///  
			///  //Saves the file.
			///  workbook->Save(new String("D:\\test\\ButtonTest.xls"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IButton : virtual public Aspose::Cells::Drawing::IShape
	{
		public:

	};
}
}
}
