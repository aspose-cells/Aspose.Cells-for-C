#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		class IBorder;
		enum BorderType;
		enum CellBorderType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates a collection of <see cref="IBorder" />
			///  objects.
			///  </summary>
			/// 
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Instantiating a Workbook object
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  
			///  //Adding a new worksheet to the Excel object
			///  workbook->GetIWorksheets()->Add();
			///  
			///  //Obtaining the reference of the newly added worksheet by passing its sheet index
			///  intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			///  
			///  //Accessing the "A1" cell from the worksheet
			///  intrusive_ptr<Aspose::Cells::ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));
			///  
			///  //Adding some value to the "A1" cell
			///  cell->PutValue((StringPtr)new String("Visit Aspose!"));
			///  
			///  intrusive_ptr<IStyle> style = cell->GetIStyle();
			///  
			///  //Setting the line style of the top border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_TopBorder)->SetLineStyle(CellBorderType_Thick);
			///  
			///  //Setting the color of the top border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_TopBorder)->SetColor(Color::GetBlack());
			///  
			///  //Setting the line style of the bottom border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_BottomBorder)->SetLineStyle(CellBorderType_Thick);
			///  
			///  //Setting the color of the bottom border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_BottomBorder)->SetColor(Color::GetBlack());
			///  
			///  //Setting the line style of the left border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_LeftBorder)->SetLineStyle(CellBorderType_Thick);
			///  
			///  //Setting the color of the left border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_LeftBorder)->SetColor(Color::GetBlack());
			///  
			///  //Setting the line style of the right border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_RightBorder)->SetLineStyle(CellBorderType_Thick);
			///  
			///  //Setting the color of the right border
			///  style->GetIBorders()->GetObjectByIndex(BorderType_RightBorder)->SetColor(Color::GetBlack());
			///  
			///  cell->SetIStyle(style);
			///  
			///  //Saving the Excel file
			///  workbook->Save(new String("C:\\book1.xls"));
			/// 
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IBorderCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			///  Gets the <see cref="IBorder" />
			///  element at the specified index.
			///  </summary>
			/// <param name="borderType" >The border to be retrieved.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IBorder> 		GetObjectByIndex(Aspose::Cells::BorderType borderType)=0;
			/// <summary>
			/// Sets the <see cref="System.Drawing.Color" />
			///  of all borders in the collection.
			/// </summary>
			/// <param name="color" >Borders' <see cref="System.Drawing.Color" />
			/// .</param>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color)=0;
			/// <summary>
			/// Sets the style of all borders of the collection.
			/// </summary>
			/// <param name="style" >Borders' style</param>
			 virtual void SetStyle(Aspose::Cells::CellBorderType style)=0;
			/// <summary>
			/// Gets the <see cref="System.Drawing.Color" />
			///  of Diagonal lines.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetDiagonalColor()=0;
			/// <summary>
			/// Sets the <see cref="System.Drawing.Color" />
			///  of Diagonal lines.
			/// </summary>
			 virtual void SetDiagonalColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the style of Diagonal lines.
			/// </summary>
			 virtual Aspose::Cells::CellBorderType GetDiagonalStyle()=0;
			/// <summary>
			/// Sets the style of Diagonal lines.
			/// </summary>
			 virtual void SetDiagonalStyle(Aspose::Cells::CellBorderType value)=0;

	};
}
}
