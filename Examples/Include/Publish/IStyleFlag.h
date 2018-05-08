#pragma once
#include "System/Object.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents flags which indicates applied formatting properties.
			/// </summary>
	class ASPOSE_CELLS_API IStyleFlag : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// All properties will be applied.
			/// </summary>
			 virtual bool GetAll()=0;
			/// <summary>
			/// All properties will be applied.
			/// </summary>
			 virtual void SetAll(bool value)=0;
			/// <summary>
			/// All borders settings will be applied.
			/// </summary>
			 virtual bool GetBorders()=0;
			/// <summary>
			/// All borders settings will be applied.
			/// </summary>
			 virtual void SetBorders(bool value)=0;
			/// <summary>
			/// Left border settings will be applied.
			/// </summary>
			 virtual bool GetLeftBorder()=0;
			/// <summary>
			/// Left border settings will be applied.
			/// </summary>
			 virtual void SetLeftBorder(bool value)=0;
			/// <summary>
			/// Right border settings will be applied.
			/// </summary>
			 virtual bool GetRightBorder()=0;
			/// <summary>
			/// Right border settings will be applied.
			/// </summary>
			 virtual void SetRightBorder(bool value)=0;
			/// <summary>
			/// Top border settings will be applied.
			/// </summary>
			 virtual bool GetTopBorder()=0;
			/// <summary>
			/// Top border settings will be applied.
			/// </summary>
			 virtual void SetTopBorder(bool value)=0;
			/// <summary>
			/// Bottom border settings will be applied.
			/// </summary>
			 virtual bool GetBottomBorder()=0;
			/// <summary>
			/// Bottom border settings will be applied.
			/// </summary>
			 virtual void SetBottomBorder(bool value)=0;
			/// <summary>
			/// Diagonal down border settings will be applied.
			/// </summary>
			 virtual bool GetDiagonalDownBorder()=0;
			/// <summary>
			/// Diagonal down border settings will be applied.
			/// </summary>
			 virtual void SetDiagonalDownBorder(bool value)=0;
			/// <summary>
			/// Diagonal up border settings will be applied.
			/// </summary>
			 virtual bool GetDiagonalUpBorder()=0;
			/// <summary>
			/// Diagonal up border settings will be applied.
			/// </summary>
			 virtual void SetDiagonalUpBorder(bool value)=0;
			/// <summary>
			/// Font settings will be applied.
			/// </summary>
			 virtual bool GetFont()=0;
			/// <summary>
			/// Font settings will be applied.
			/// </summary>
			 virtual void SetFont(bool value)=0;
			/// <summary>
			/// Font size setting will be applied.
			/// </summary>
			 virtual bool GetFontSize()=0;
			/// <summary>
			/// Font size setting will be applied.
			/// </summary>
			 virtual void SetFontSize(bool value)=0;
			/// <summary>
			/// Font name setting will be applied.
			/// </summary>
			 virtual bool GetFontName()=0;
			/// <summary>
			/// Font name setting will be applied.
			/// </summary>
			 virtual void SetFontName(bool value)=0;
			/// <summary>
			/// Font color setting will be applied.
			/// </summary>
			 virtual bool GetFontColor()=0;
			/// <summary>
			/// Font color setting will be applied.
			/// </summary>
			 virtual void SetFontColor(bool value)=0;
			/// <summary>
			/// Font bold setting will be applied.
			/// </summary>
			 virtual bool GetFontBold()=0;
			/// <summary>
			/// Font bold setting will be applied.
			/// </summary>
			 virtual void SetFontBold(bool value)=0;
			/// <summary>
			/// Font italic setting will be applied.
			/// </summary>
			 virtual bool GetFontItalic()=0;
			/// <summary>
			/// Font italic setting will be applied.
			/// </summary>
			 virtual void SetFontItalic(bool value)=0;
			/// <summary>
			/// Font underline setting will be applied.
			/// </summary>
			 virtual bool GetFontUnderline()=0;
			/// <summary>
			/// Font underline setting will be applied.
			/// </summary>
			 virtual void SetFontUnderline(bool value)=0;
			/// <summary>
			/// Font strikeout setting will be applied.
			/// </summary>
			 virtual bool GetFontStrike()=0;
			/// <summary>
			/// Font strikeout setting will be applied.
			/// </summary>
			 virtual void SetFontStrike(bool value)=0;
			/// <summary>
			/// Font script setting will be applied.
			/// </summary>
			 virtual bool GetFontScript()=0;
			/// <summary>
			/// Font script setting will be applied.
			/// </summary>
			 virtual void SetFontScript(bool value)=0;
			/// <summary>
			/// Number format setting will be applied.
			/// </summary>
			 virtual bool Get_NumberFormat()=0;
			/// <summary>
			/// Number format setting will be applied.
			/// </summary>
			 virtual void SetNumberFormat(bool value)=0;
			/// <summary>
			/// Horizontal alignment setting will be applied.
			/// </summary>
			 virtual bool GetHorizontalAlignment()=0;
			/// <summary>
			/// Horizontal alignment setting will be applied.
			/// </summary>
			 virtual void SetHorizontalAlignment(bool value)=0;
			/// <summary>
			/// Vertical alignment setting will be applied.
			/// </summary>
			 virtual bool GetVerticalAlignment()=0;
			/// <summary>
			/// Vertical alignment setting will be applied.
			/// </summary>
			 virtual void SetVerticalAlignment(bool value)=0;
			/// <summary>
			/// Indent level setting will be applied.
			/// </summary>
			 virtual bool GetIndent()=0;
			/// <summary>
			/// Indent level setting will be applied.
			/// </summary>
			 virtual void SetIndent(bool value)=0;
			/// <summary>
			/// Rotation setting will be applied.
			/// </summary>
			 virtual bool GetRotation()=0;
			/// <summary>
			/// Rotation setting will be applied.
			/// </summary>
			 virtual void SetRotation(bool value)=0;
			/// <summary>
			/// Wrap text setting will be applied.
			/// </summary>
			 virtual bool GetWrapText()=0;
			/// <summary>
			/// Wrap text setting will be applied.
			/// </summary>
			 virtual void SetWrapText(bool value)=0;
			/// <summary>
			/// Shrink to fit setting will be applied.
			/// </summary>
			 virtual bool GetShrinkToFit()=0;
			/// <summary>
			/// Shrink to fit setting will be applied.
			/// </summary>
			 virtual void SetShrinkToFit(bool value)=0;
			/// <summary>
			/// Text direction setting will be applied.
			/// </summary>
			 virtual bool GetTextDirection()=0;
			/// <summary>
			/// Text direction setting will be applied.
			/// </summary>
			 virtual void SetTextDirection(bool value)=0;
			/// <summary>
			/// Cell shading setting will be applied.
			/// </summary>
			 virtual bool GetCellShading()=0;
			/// <summary>
			/// Cell shading setting will be applied.
			/// </summary>
			 virtual void SetCellShading(bool value)=0;
			/// <summary>
			/// Locked setting will be applied.
			/// </summary>
			 virtual bool GetLocked()=0;
			/// <summary>
			/// Locked setting will be applied.
			/// </summary>
			 virtual void SetLocked(bool value)=0;
			/// <summary>
			/// Hide formula setting will be applied.
			/// </summary>
			 virtual bool GetHideFormula()=0;
			/// <summary>
			/// Hide formula setting will be applied.
			/// </summary>
			 virtual void SetHideFormula(bool value)=0;

	};
}
}
