#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		class IThemeColor;
		enum BackgroundType;
		class IBorderCollection;
		class IStyle;
		enum StyleModifyFlag;
		class IFont;
		enum TextAlignmentType;
		enum BorderType;
		enum CellBorderType;
		enum TextDirectionType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum GradientStyleType;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents display style of excel document, such as font, color, alignment, border, etc.
			///  </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IStyle : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Get the background theme color.
			/// </summary>
			/// <remarks>
			/// If the background color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetBackgroundIThemeColor()=0;
			/// <summary>
			/// Sets the background theme color.
			/// </summary>
			/// <remarks>
			/// If the background color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual void 		SetBackgroundIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets the foreground theme color.
			/// </summary>
			/// <remarks>
			/// If the foreground color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetForegroundIThemeColor()=0;
			/// <summary>
			/// Sets the foreground theme color.
			/// </summary>
			/// <remarks>
			/// If the foreground color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual void 		SetForegroundIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets the name of the style.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Sets the name of the style.
			/// </summary>
			/// 
			/// 
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the cell background pattern type.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::BackgroundType GetPattern()=0;
			/// <summary>
			/// Sets the cell background pattern type.
			/// </summary>
			/// 
			/// 
			 virtual void SetPattern(Aspose::Cells::BackgroundType value)=0;
			/// <summary>
			/// Gets the <see cref="IBorderCollection" />
			///  of the style.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IBorderCollection> 		GetIBorders()=0;
			/// <summary>
			/// Gets a style's background color.
			/// </summary>
			/// 
			/// <remarks>If you want to set a cell's color, please use GetForegroundColor method of IStyle. 
			/// Only if the cell style pattern is other than none or solid, this property will take effect.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackgroundColor()=0;
			/// <summary>
			/// Sets a style's background color.
			/// </summary>
			/// 
			/// <remarks>If you want to set a cell's color, please use GetForegroundColor method of IStyle. 
			/// Only if the cell style pattern is other than none or solid, this property will take effect.</remarks>
			/// 
			/// 
			 virtual void SetBackgroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the background color with a 32-bit ARGB value.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetBackgroundArgbColor()=0;
			/// <summary>
			/// Sets the background color with a 32-bit ARGB value.
			/// </summary>
			/// 
			/// 
			 virtual void SetBackgroundArgbColor(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets a style's foreground color.
			/// </summary>
			/// 
			/// <remarks>It means no color setting if Color::Empty is returned.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForegroundColor()=0;
			/// <summary>
			/// Sets a style's foreground color.
			/// </summary>
			/// 
			/// <remarks>It means no color setting if Color::Empty is returned.</remarks>
			/// 
			/// 
			 virtual void SetForegroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the foreground color with a 32-bit ARGB value.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetForegroundArgbColor()=0;
			/// <summary>
			/// Sets the foreground color with a 32-bit ARGB value.
			/// </summary>
			/// 
			/// 
			 virtual void SetForegroundArgbColor(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Copies data from another style object
			/// </summary>
			/// 
			/// <param name="style" >Source Style object</param>
			/// 
			/// <remarks>
			/// This method does not copy the name of the style.
			/// If you want to copy the name, please call the following codes after copying style:
			/// destStyle->SetName(style->GetName()) </remarks>
			/// 
			/// 
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Gets the parent style of this style.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetParentIStyle()=0;
			/// <summary>
			/// Apply the named style to the styles of the cells which use this named style.
			/// It works like clicking the "ok" button after you finished modifying the style.
			/// Only applies for named style.
			/// </summary>
			/// 
			/// 
			 virtual void Update()=0;
			/// <summary>
			/// Checks whether the specified properties of the style have been modified.
			/// Used for style of ConditionalFormattings to check whether the specified properties of this style should be used when applying the ConditionalFormattings on a cell.
			/// </summary>
			/// 
			/// <param name="modifyFlag" >Style modified flags</param>
			/// 
			/// <returns>true if the specified properties have been modified</returns>
			/// 
			/// 
			 virtual bool IsModified(Aspose::Cells::StyleModifyFlag modifyFlag)=0;
			/// <summary>
			/// Determines whether two Style instances are equal.
			/// </summary>
			/// 
			/// <param name="obj" >The Style object to compare with the current Style object. </param>
			/// 
			/// <returns>true if the specified Object is equal to the current Object; otherwise, false.
			/// </returns>
			/// 
			/// 
			  virtual bool Equals(intrusive_ptr<Aspose::Cells::Systems::Object> obj)=0;
			/// <summary>
			/// Serves as a hash function for an IStyle object.
			/// </summary>
			/// 
			/// <returns>A hash code for the current Object.</returns>
			/// 
			/// <remarks>This method is only for internal use.</remarks>
			/// 
			/// 
			  virtual Aspose::Cells::Systems::Int32 GetHashCode()=0;
			/// <summary>
			/// Represents the m_IndentLevel level for the cell or range. Can only be an integer from 0 to 15.
			/// </summary>
			/// 
			/// <remarks>
			/// If text horizontal alignment type is set to value other than left or right, m_IndentLevel level will
			/// be reset to zero.
			/// </remarks>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetIndentLevel()=0;
			/// <summary>
			/// Represents the m_IndentLevel level for the cell or range. Can only be an integer from 0 to 15.
			/// </summary>
			/// 
			/// <remarks>
			/// If text horizontal alignment type is set to value other than left or right, m_IndentLevel level will
			/// be reset to zero.
			/// </remarks>
			/// 
			/// 
			 virtual void SetIndentLevel(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets an <see cref="IFont" />
			///  object.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// 
			/// <remarks><p>0: Not rotated.</p>
			/// 
			/// <p>255: Top to Bottom.</p>
			/// 
			/// <p>-90: Downward.</p>
			/// 
			/// <p>90: Upward.</p>
			/// 
			/// You can set 255 or value ranged from -90 to 90.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetRotationAngle()=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// 
			/// <remarks><p>0: Not rotated.</p>
			/// 
			/// <p>255: Top to Bottom.</p>
			/// 
			/// <p>-90: Downward.</p>
			/// 
			/// <p>90: Upward.</p>
			/// 
			/// You can set 255 or value ranged from -90 to 90.</remarks>
			/// 
			/// 
			 virtual void SetRotationAngle(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// 
			/// <remarks><p>0: Not rotated.</p>
			/// 
			/// <p>255: Top to Bottom.</p>
			/// 
			/// <p>-90: Downward.</p>
			/// 
			/// <p>90: Upward.</p>
			/// 
			/// You can set 255 or value ranged from -90 to 90.</remarks>
			/// 
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetRotationAngle() method.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetRotation()=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// 
			/// <remarks><p>0: Not rotated.</p>
			/// 
			/// <p>255: Top to Bottom.</p>
			/// 
			/// <p>-90: Downward.</p>
			/// 
			/// <p>90: Upward.</p>
			/// 
			/// You can set 255 or value ranged from -90 to 90.</remarks>
			/// 
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetRotationAngle() method.</remarks>
			/// 
			/// 
			 virtual void SetRotation(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets the vertical alignment type of the text in a cell. 
			///  </summary>
			/// 
			/// 
			 virtual Aspose::Cells::TextAlignmentType GetVerticalAlignment()=0;
			/// <summary>
			///  Sets the vertical alignment type of the text in a cell. 
			///  </summary>
			/// 
			/// 
			 virtual void SetVerticalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			///  Gets the horizontal alignment type of the text in a cell. 
			///  </summary>
			/// 
			/// 
			 virtual Aspose::Cells::TextAlignmentType GetHorizontalAlignment()=0;
			/// <summary>
			///  Sets the horizontal alignment type of the text in a cell. 
			///  </summary>
			/// 
			/// 
			 virtual void SetHorizontalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			/// Gets a value indicating whether the text within a cell is wrapped.
			/// </summary>
			/// 
			/// 
			 virtual bool IsTextWrapped()=0;
			/// <summary>
			/// Sets a value indicating whether the text within a cell is wrapped.
			/// </summary>
			/// 
			/// 
			 virtual void SetTextWrapped(bool value)=0;
			/// <summary>
			///  Gets the display format of numbers and dates.
			///  </summary>
			/// 
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetNumber()=0;
			/// <summary>
			///  Sets the display format of numbers and dates.
			///  </summary>
			/// 
			/// 
			 virtual void SetNumber(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Sets the border of the style.
			/// </summary>
			/// 
			/// <param name="borderEdge" />
			/// 
			/// <param name="borderStyle" />
			/// 
			/// <param name="borderColor" />
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual bool SetBorder(Aspose::Cells::BorderType borderEdge , Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> borderColor)=0;
			/// <summary>
			///  Gets a value indicating whether a cell can be modified or not.
			///  </summary>
			/// 
			/// <remarks>Locking cells has no effect unless the worksheet is protected. </remarks>
			/// 
			/// 
			 virtual bool IsLocked()=0;
			/// <summary>
			///  Sets a value indicating whether a cell can be modified or not.
			///  </summary>
			/// 
			/// <remarks>Locking cells has no effect unless the worksheet is protected. </remarks>
			/// 
			/// 
			 virtual void SetLocked(bool value)=0;
			/// <summary>
			/// Sets the custom number format string of a cell.
			/// </summary>
			/// 
			/// <param name="custom" >custom number format string, should be InvariantCulture pattern.</param>
			/// 
			/// <param name="builtinPreference" >If given custom number format string matches one of the built-in number formats
			/// corresponding to current regional settings, whether set the number format as built-in instead of custom.</param>
			/// 
			/// 
			 virtual void SetCustom(intrusive_ptr<Aspose::Cells::Systems::String> custom , bool builtinPreference)=0;
			/// <summary>
			/// Represents the custom number format string of a cell.
			/// If the custom number format is not set, we will return "".
			/// </summary>
			/// 
			/// <remarks>
			/// It should be InvariantCulture .
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCustom()=0;
			/// <summary>
			/// Represents the custom number format string of a cell.
			/// If the custom number format is not set, we will return "".
			/// </summary>
			/// 
			/// <remarks>
			/// It should be InvariantCulture .
			/// </remarks>
			/// 
			/// 
			 virtual void SetCustom(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the culture custom number format.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCultureCustom()=0;
			/// <summary>
			/// Sets the culture custom number format.
			/// </summary>
			/// 
			/// 
			 virtual void SetCultureCustom(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents if the formula will be hidden when the worksheet is protected.
			/// </summary>
			/// 
			/// 
			 virtual bool IsFormulaHidden()=0;
			/// <summary>
			/// Represents if the formula will be hidden when the worksheet is protected.
			/// </summary>
			/// 
			/// 
			 virtual void SetFormulaHidden(bool value)=0;
			/// <summary>
			/// Represents if text automatically shrinks to fit in the available column width.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShrinkToFit()=0;
			/// <summary>
			/// Represents if text automatically shrinks to fit in the available column width.
			/// </summary>
			/// 
			/// 
			 virtual void SetShrinkToFit(bool value)=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::TextDirectionType GetTextDirection()=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			/// 
			/// 
			 virtual void SetTextDirection(Aspose::Cells::TextDirectionType value)=0;
			/// <summary>
			/// Indicates if the cells justified or distributed alignment should be used on the last line of text.     
			/// </summary>
			/// 
			/// <remarks>
			/// This is typical for East Asian alignments but not typical in other contexts.
			/// </remarks>
			/// 
			/// 
			 virtual bool IsJustifyDistributed()=0;
			/// <summary>
			/// Indicates if the cells justified or distributed alignment should be used on the last line of text.     
			/// </summary>
			/// 
			/// <remarks>
			/// This is typical for East Asian alignments but not typical in other contexts.
			/// </remarks>
			/// 
			/// 
			 virtual void SetJustifyDistributed(bool value)=0;
			/// <summary>
			/// Indicates whether the cell's value starts with single quote mark.
			/// </summary>
			/// 
			/// 
			 virtual bool GetQuotePrefix()=0;
			/// <summary>
			/// Indicates whether the cell shading is a gradient pattern.
			/// </summary>
			/// 
			/// 
			 virtual bool IsGradient()=0;
			/// <summary>
			/// Indicates whether the cell shading is a gradient pattern.
			/// </summary>
			/// 
			/// 
			 virtual void SetGradient(bool value)=0;
			/// <summary>
			/// Sets the specified fill to a two-color gradient.
			/// </summary>
			/// 
			/// <param name="color1" >One gradient color.</param>
			/// 
			/// <param name="color2" >Two gradient color.</param>
			/// 
			/// <param name="gradientStyleType" >Gradient shading style.</param>
			/// 
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyleType_FromCenter, the Variant argument can only be 1 or 2.</param>
			/// 
			/// 
			 virtual void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color1 , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color2 , Aspose::Cells::Drawing::GradientStyleType gradientStyleType , Aspose::Cells::Systems::Int32 variant)=0;
			/// <summary>
			/// Get the two-color gradient setting.
			/// </summary>
			/// 
			/// <param name="color1" >One gradient color.</param>
			/// 
			/// <param name="color2" >Two gradient color.</param>
			/// 
			/// <param name="gradientStyleType" >Gradient shading style.</param>
			/// 
			/// <param name="variant" >The gradient variant.</param>
			/// 
			/// 
			 virtual void GetTwoColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color>& color1 , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color>& color2 , Aspose::Cells::Drawing::GradientStyleType& gradientStyleType , Aspose::Cells::Systems::Int32& variant)=0;
			/// <summary>
			/// Indicates whether the number format is a percent format.
			/// </summary>
			/// 
			/// 
			 virtual bool IsPercent()=0;
			/// <summary>
			/// Indicates whether the number format is a date format.
			/// </summary>
			/// 
			/// 
			 virtual bool IsDateTime()=0;

	};
}
}
