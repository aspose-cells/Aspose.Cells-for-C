#pragma once
//#include "System/Single.h"
//#include "System/StringHelperPal.h"
#include "InternalColor.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Byte.h"
#include "System/Double.h"
#include "FontUnderlineType.h"
#include "System/Int32.h"
#include "DataFontSetFlag.h"
//#include "System/Convert.h"
#define STATIC_DATAFONT() 

namespace Aspose {
namespace Cells {
class Font;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataFont : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Scheme;
			bool m_IsItalic;
			bool m_IsBold;
			Aspose::Cells::FontUnderlineType m_UnderLineType;
			intrusive_ptr<Aspose::Cells::System::String> m_Lang;
			Aspose::Cells::System::Int32 m_BaseLine;
			intrusive_ptr<Aspose::Cells::System::String> m_AltLang;
			Aspose::Cells::System::Int32 m_Family;
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::InternalColor> m_ColorInfo;
			Aspose::Cells::System::Int32 m_FontIndex;
			Aspose::Cells::System::Int32 m_charset;
			bool m_IsStrikeout;
			bool m_IsDoubleStrikethrough;
			bool m_IsSubscript;
			bool m_IsSuperscript;
			bool m_IsEqualizeCharacterHeight;
			bool m_IsSmallCap;
			bool m_IsAllCap;
			Aspose::Cells::System::Int32 m_FontHeight;
	public:

			bool IsEmpty;
			intrusive_ptr<Aspose::Cells::OpenXML::DataFontSetFlag> SetFlag;
			intrusive_ptr<Aspose::Cells::System::String> GetScheme();
			void SetScheme(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsItalic();
			void SetIsItalic(bool value);
			bool IsBold();
			void SetIsBold(bool value);
			Aspose::Cells::FontUnderlineType GetUnderLineType();
			void SetUnderLineType(Aspose::Cells::FontUnderlineType value);
			intrusive_ptr<Aspose::Cells::System::String> GetLang();
			void SetLang(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetBaseLine();
			void SetBaseLine(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetAltLang();
			void SetAltLang(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Double GetSize();
			void SetSize(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetFamily();
			void SetFamily(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetColorInfo();
			void SetColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			Aspose::Cells::System::Int32 GetFontIndex();
			void SetFontIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCharset();
			void SetCharset(Aspose::Cells::System::Int32 value);
			bool IsStrikeout();
			void SetIsStrikeout(bool value);
			bool IsDoubleStrikethrough();
			void SetIsDoubleStrikethrough(bool value);
			bool IsSubscript();
			void SetIsSubscript(bool value);
			bool IsSuperscript();
			void SetIsSuperscript(bool value);
			bool IsEqualizeCharacterHeight();
			void SetIsEqualizeCharacterHeight(bool value);
			bool IsSmallCap();
			void SetIsSmallCap(bool value);
			bool IsAllCap();
			void SetIsAllCap(bool value);
			Aspose::Cells::System::Int32 GetFontHeight();
			void SetFontHeight(Aspose::Cells::System::Int32 value);
			void ApplyDataFont(intrusive_ptr<Aspose::Cells::OpenXML::DataFont> df , Aspose::Cells::System::Double FontHeightScale);
			void SetDataToCellsFontForCondFmt(intrusive_ptr<Aspose::Cells::Style> style);
			void SetDataToCellsFont(intrusive_ptr<Aspose::Cells::Font> f);
			void SetTxFont(intrusive_ptr<Aspose::Cells::Font> f);
			bool IsNeverSet();
			 DataFont();
		public:
			virtual ~DataFont();
	};

}

}

}
