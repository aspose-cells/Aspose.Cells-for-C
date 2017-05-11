#pragma once
#include "System/Object.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		enum ThemeColorType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a theme color.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++] 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<ICells> cells = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			/// cells->GetObjectByIndex(new String("A1"))->PutValue((StringPtr)new String("Hello World"));
			/// intrusive_ptr<IStyle> style = cells->GetObjectByIndex(new String("A1"))->GetIStyle();
			/// //Set ThemeColorType.Text2 color type with 40% lighten as the font color.
			/// style->GetIFont()->SetIThemeColor(Factory::CreateIThemeColor(ThemeColorType_Text2, 0.4));
			/// style->SetPattern(BackgroundType_Solid);
			/// //Set ThemeColorType.Background2 color type with 75% darken as the foreground color
			/// style->SetForegroundIThemeColor(Factory::CreateIThemeColor(ThemeColorType_Background2, -0.75));
			/// cells->GetObjectByIndex(new String("A1"))->SetIStyle(style);
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xlsx"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IThemeColor : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the theme type.
			/// </summary>
			 virtual Aspose::Cells::ThemeColorType GetColorType()=0;
			/// <summary>
			/// Sets the theme type.
			/// </summary>
			 virtual void SetColorType(Aspose::Cells::ThemeColorType value)=0;
			/// <summary>
			/// Gets the tint value.
			/// </summary>
			/// <remarks>
			/// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken 
			/// and 1.0 means 100% lighten. Also, 0.0 means no change.
			/// </remarks>
			 virtual Aspose::Cells::System::Double GetTint()=0;
			/// <summary>
			/// Sets the tint value.
			/// </summary>
			/// <remarks>
			/// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken 
			/// and 1.0 means 100% lighten. Also, 0.0 means no change.
			/// </remarks>
			 virtual void SetTint(Aspose::Cells::System::Double value)=0;

	};
}
}
