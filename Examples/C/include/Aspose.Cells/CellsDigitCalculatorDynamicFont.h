#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Double.h"
#include "CellsDigitCalculatorDynamic.h"
#include "System/Drawing/FontStyle.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CELLSDIGITCALCULATORDYNAMICFONT() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsDigitCalculatorDynamicFont : public Aspose::Cells::Internal::Format::CellsDigitCalculatorDynamic
	{
	protected:

			 virtual bool IsDefaultFont();
			 virtual void InitDefaultFont();
			 virtual void InitCurrentFont();
	private:

			void Init_Vars();
			bool m_IsDefaultFont;
			intrusive_ptr<Aspose::Cells::System::String> m_CurrentFontName;
			Aspose::Cells::System::Int32 m_CurrentFontSize;
			Aspose::Cells::System::Drawing::FontStyle m_CurrentFontStyle;
			Aspose::Cells::System::Double m_CurrentWidth;
	public:

			 CellsDigitCalculatorDynamicFont(intrusive_ptr<Aspose::Cells::System::String> defaultFontName , Aspose::Cells::System::Int32 defaultFontSize , Aspose::Cells::System::Drawing::FontStyle defaultFontStyle , bool absoluteWidth);
			void SetFont(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			 virtual Aspose::Cells::System::Double GetWidth();
			void SetWidth(Aspose::Cells::System::Double value);
			 CellsDigitCalculatorDynamicFont();
		public:
			virtual ~CellsDigitCalculatorDynamicFont();
	};

}

}

}

}
