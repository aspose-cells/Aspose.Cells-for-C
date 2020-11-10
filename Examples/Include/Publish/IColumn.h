#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Byte.h"

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
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// 
			/// //Obtaining the reference of the first worksheet
			/// Worksheet worksheet = workbook.Worksheets[0];
			/// 
			/// //Add new Style to Workbook
			/// Style style = workbook.Styles[workbook.Styles.Add()];
			/// 
			/// //Setting the background color to Blue
			/// style.BackgroundColor = Color.Blue;
			/// 
			/// //Setting the foreground color to Red
			/// style.ForegroundColor= Color.Red;
			/// 
			/// //setting Background Pattern
			/// style.Pattern = BackgroundType.DiagonalStripe;
			/// 
			/// //New Style Flag
			/// StyleFlag styleFlag = new StyleFlag();
			/// 
			/// //Set All Styles
			/// styleFlag.All = true;
			/// 
			/// //Get first Column
			/// Column column = worksheet.Cells.Columns[0];
			/// 
			/// //Apply Style to first Column
			/// column.ApplyStyle(style, styleFlag);
			/// 
			/// //Saving the Excel file
			/// workbook.Save("D:\\book1.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As New Workbook()
			/// 
			/// 'Obtaining the reference of the first worksheet
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			/// 
			/// 'Add new Style to Workbook
			/// Dim style As Style = workbook.Styles(workbook.Styles.Add())
			/// 
			/// 'Setting the background color to Blue
			/// style.BackgroundColor = Color.Blue
			/// 
			/// 'Setting the foreground color to Red
			/// style.ForegroundColor = Color.Red
			/// 
			/// 'setting Background Pattern
			/// style.Pattern = BackgroundType.DiagonalStripe
			/// 
			/// 'New Style Flag
			/// Dim styleFlag As New StyleFlag()
			/// 
			/// 'Set All Styles
			/// styleFlag.All = True
			/// 
			/// 'Get first Column
			/// Dim column As Column = worksheet.Cells.Columns(0)
			/// 
			/// 'Apply Style to first Column
			/// column.ApplyStyle(style, styleFlag)
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("D:\book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IColumn : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the index of this column.
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetIndex() = 0;
			/// <summary>
			/// Gets the column width in unit of characters.
			/// </summary>
			  virtual Aspose::Cells::Systems::Double GetWidth() = 0;
			/// <summary>
			/// Sets the column width in unit of characters.
			/// </summary>
			  virtual void SetWidth(Aspose::Cells::Systems::Double value) = 0;
			/// <summary>
			/// Gets the group level of the column.
			/// </summary>
			  virtual Aspose::Cells::Systems::Byte GetGroupLevel() = 0;
			/// <summary>
			/// Indicates whether the column is hidden.
			/// </summary>
			  virtual bool IsHidden() = 0;
			/// <summary>
			/// Indicates whether the column is hidden.
			/// </summary>
			  virtual void SetHidden(bool value) = 0;
			/// <summary>
			/// Applies formats for a whole column.
			/// </summary>
			/// <param name="style" >The style object which will be applied.</param>
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			 virtual void 		ApplyIStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Gets the style of this column.
			/// </summary>
			/// <remarks>
			/// You have to call Column.ApplyStyle() method to save your changing with the row style,
			/// otherwise it will not effect.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;

	};
}
}
