#pragma once
#include "System/Object.h"
#define STATIC_STYLEFLAG() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API StyleFlag : public Aspose::Cells::System::Object
#else	class StyleFlag : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool all;
			bool borders;
			bool leftBorder;
			bool rightBorder;
			bool topBorder;
			bool bottomBorder;
			bool diagonalDownBorder;
			bool diagonalUpBorder;
			bool font;
			bool fontSize;
			bool fontName;
			bool fontColor;
			bool fontBold;
			bool fontItalic;
			bool fontUnderline;
			bool fontStrike;
			bool fontScript;
			bool numberFormat;
			bool horizontalAlignment;
			bool verticalAlignment;
			bool indent;
			bool rotation;
			bool wrapText;
			bool shrinkToFit;
			bool textDirection;
			bool cellShading;
			bool locked;
			bool hideFormula;
	public:

			bool GetAll();
			void SetAll(bool value);
			bool GetBorders();
			void SetBorders(bool value);
			bool GetLeftBorder();
			void SetLeftBorder(bool value);
			bool GetRightBorder();
			void SetRightBorder(bool value);
			bool GetTopBorder();
			void SetTopBorder(bool value);
			bool GetBottomBorder();
			void SetBottomBorder(bool value);
			bool GetDiagonalDownBorder();
			void SetDiagonalDownBorder(bool value);
			bool GetDiagonalUpBorder();
			void SetDiagonalUpBorder(bool value);
			bool GetFont();
			void SetFont(bool value);
			bool GetFontSize();
			void SetFontSize(bool value);
			bool GetFontName();
			void SetFontName(bool value);
			bool GetFontColor();
			void SetFontColor(bool value);
			bool GetFontBold();
			void SetFontBold(bool value);
			bool GetFontItalic();
			void SetFontItalic(bool value);
			bool GetFontUnderline();
			void SetFontUnderline(bool value);
			bool GetFontStrike();
			void SetFontStrike(bool value);
			bool GetFontScript();
			void SetFontScript(bool value);
			bool GetNumberFormat();
			void SetNumberFormat(bool value);
			bool GetHorizontalAlignment();
			void SetHorizontalAlignment(bool value);
			bool GetVerticalAlignment();
			void SetVerticalAlignment(bool value);
			bool GetIndent();
			void SetIndent(bool value);
			bool GetRotation();
			void SetRotation(bool value);
			bool GetWrapText();
			void SetWrapText(bool value);
			bool GetShrinkToFit();
			void SetShrinkToFit(bool value);
			bool GetTextDirection();
			void SetTextDirection(bool value);
			bool GetCellShading();
			void SetCellShading(bool value);
			bool GetLocked();
			void SetLocked(bool value);
			bool GetHideFormula();
			void SetHideFormula(bool value);
			 StyleFlag();
		public:
			virtual ~StyleFlag();
	};

}

}
