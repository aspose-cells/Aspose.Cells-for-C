#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		enum TextCapsType;
		enum TextStrikeType;
		enum FontUnderlineType;
		class IThemeColor;
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the font object used in a spreadsheet.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Accessing the "A1" cell from the worksheet
			/// intrusive_ptr<ICell>  cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));
			/// //Adding some value to the "A1" cell
			/// cell->PutValue((StringPtr)new String("Hello Aspose!"));
			/// intrusive_ptr<IFont> font = cell->GetIStyle()->GetIFont();
			/// //Setting the font name to "Times New Roman"
			/// font->SetName(new String("Times New Roman"));
			/// //Setting font size to 14
			/// font->SetSize(14);
			/// //setting font color as Red
			/// font->SetColor(Color::GetRed());           
			/// //Saving the Excel file
			/// workbook->Save(new String("d:\\dest.xls"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IFont : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Represent the character get.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCharset()=0;
			/// <summary>
			/// Represent the character set.
			/// </summary>
			 virtual void SetCharset(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets a value indicating whether the font is italic.
			/// </summary>
			 virtual bool IsItalic()=0;
			/// <summary>
			/// Sets a value indicating whether the font is italic.
			/// </summary>
			 virtual void SetIsItalic(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the font is bold.
			/// </summary>
			 virtual bool IsBold()=0;
			/// <summary>
			/// Sets a value indicating whether the font is bold.
			/// </summary>
			 virtual void SetIsBold(bool value)=0;
			/// <summary>
			/// Gets the text caps type.
			/// </summary>
			 virtual Aspose::Cells::TextCapsType GetCapsType()=0;
			/// <summary>
			/// Sets the text caps type.
			/// </summary>
			 virtual void SetCapsType(Aspose::Cells::TextCapsType value)=0;
			/// <summary>
			/// Gets the strike type of the text.
			/// </summary>
			 virtual Aspose::Cells::TextStrikeType GetStrikeType()=0;
			/// <summary>
			/// Sets the strike type of the text.
			/// </summary>
			 virtual void SetStrikeType(Aspose::Cells::TextStrikeType value)=0;
			/// <summary>
			/// Gets a value indicating whether the font is single strikeout.
			/// </summary>
			 virtual bool IsStrikeout()=0;
			/// <summary>
			/// Sets a value indicating whether the font is single strikeout.
			/// </summary>
			 virtual void SetIsStrikeout(bool value)=0;
			/// <summary>
			/// Gets the script offset, in unit of percentage
			/// </summary>
			 virtual Aspose::Cells::System::Double GetScriptOffset()=0;
			/// <summary>
			/// Sets the script offset, in unit of percentage
			/// </summary>
			 virtual void SetScriptOffset(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets a value indicating whether the font is super script.
			/// </summary>
			 virtual bool IsSuperscript()=0;
			/// <summary>
			/// Sets a value indicating whether the font is super script.
			/// </summary>
			 virtual void SetIsSuperscript(bool value)=0;
			/// <summary>
			/// Gets a value indicating whether the font is subscript.
			/// </summary>
			 virtual bool IsSubscript()=0;
			/// <summary>
			/// Sets a value indicating whether the font is subscript.
			/// </summary>
			 virtual void SetIsSubscript(bool value)=0;
			/// <summary>
			/// Gets the font underline type.
			/// </summary>
			 virtual Aspose::Cells::FontUnderlineType GetUnderline()=0;
			/// <summary>
			/// Sets the font underline type.
			/// </summary>
			 virtual void SetUnderline(Aspose::Cells::FontUnderlineType value)=0;
			/// <summary>
			/// Gets the name of the <see cref="IFont" />
			/// .
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<IStyle> style;
			/// ..........
			/// intrusive_ptr<IFont> font = style->GetIFont();
			/// font->SetName(new String("Times New Roman"));
			/// 
			/// </code>
			/// </example>
			/// 
			/// 
			  virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Sets the name of the <see cref="Font" />
			/// .
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<IStyle> style;
			/// ..........
			/// intrusive_ptr<IFont> font = style->GetIFont();
			/// font->SetName(new String("Times New Roman"));
			/// 
			/// </code>
			/// </example>
			  virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the double size of the font.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetDoubleSize()=0;
			/// <summary>
			/// Sets the double size of the font.
			/// </summary>
			 virtual void SetDoubleSize(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the size of the font.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetSize()=0;
			/// <summary>
			/// Sets the size of the font.
			/// </summary>
			 virtual void SetSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the theme color.
			/// </summary>
			/// <remarks>
			/// If the font color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetIThemeColor()=0;
			/// <summary>
			/// Sets the theme color.
			/// </summary>
			/// <remarks>
			/// If the font color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual void 		SetIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of the font.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Sets the <see cref="System.Drawing.Color" />
			///  of the font.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetArgbColor()=0;
			/// <summary>
			/// Sets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual void SetArgbColor(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Checks if two fonts are equals.
			/// </summary>
			/// <param name="font" >Compared font object.</param>
			/// <returns>True if equal to the compared font object.</returns>
			 virtual bool 		Equals(intrusive_ptr<Aspose::Cells::IFont> font)=0;
			/// <summary>
			/// Indicates whether the normalization of height that is to be applied to the text run.
			/// </summary>
			 virtual bool IsNormalizeHeights()=0;
			/// <summary>
			/// Indicates whether the normalization of height that is to be applied to the text run.
			/// </summary>
			 virtual void SetIsNormalizeHeights(bool value)=0;
			/// <summary>
			/// Returns a string represents the current Cell object.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::System::String> ToString()=0;

	};
}
}
