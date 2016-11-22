#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/Byte.h"

namespace Aspose {
	namespace Cells {
		class IStyle;
		class IStyleFlag;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a single column in a worksheet.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Obtaining the reference of the first worksheet
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0); 
			/// //Add new Style to Workbook
			/// intrusive_ptr<IStyle> style = workbook->GetIStyles()->GetObjectByIndex(workbook->GetIStyles()->Add());
			/// //Setting the background color to Blue
			/// style->SetBackgroundColor(Color::GetBlue());  
			/// //Setting the foreground color to Red
			/// style->SetForegroundColor(Color::GetRed());  
			/// //setting Background Pattern
			/// style->SetPattern(BackgroundType::BackgroundType_DiagonalStripe);	  
			/// //New Style Flag
			/// intrusive_ptr<IStyleFlag> styleFlag = Factory::CreateIStyleFlag();	  
			/// //Set All Styles			
			/// styleFlag->SetAll(true);  
			/// //Get first Column
			/// intrusive_ptr<IColumn>  column = worksheet->GetICells()->GetIColumns()->GetObjectByIndex(0);  
			/// //Apply Style to first Column
			/// column->ApplyStyle(style, styleFlag);	  
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xls"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
	class ASPOSE_CELLS_API IColumn : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the index of this column.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetIndex()=0;
			/// <summary>
			/// Gets the column width in unit of characters.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetWidth()=0;
			/// <summary>
			/// Sets the column width in unit of characters.
			/// </summary>
			/// 
			/// 
			 virtual void SetWidth(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the group level of the column.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Byte GetGroupLevel()=0;
			/// <summary>
			/// Indicates whether the column is hidden.
			/// </summary>
			/// 
			/// 
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Indicates whether the column is hidden.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsHidden(bool value)=0;
			/// <summary>
			/// Applies formattings for a whole column.
			/// </summary>
			/// 
			/// <param name="style" >The style object which will be applied.</param>
			/// 
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			/// 
			/// 
			 virtual void ApplyStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Gets the style of this column.
			/// </summary>
			/// 
			/// <remarks>
			/// You have to call ApplyStyle() method to save your changing with the row style,
			/// otherwise it will not effect.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;

	};
}
}
