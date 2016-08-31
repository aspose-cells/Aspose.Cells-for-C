#pragma once
#include "FontSchemeType.h"
#include "StyleModifyFlag.h"
#include "FontUnderlineType.h"
#include "System/UInt16.h"
//#include "System/DoubleHelper.h"
//#include "System/Collections/ArrayList.h"
#include "System/Drawing/Color.h"
#include "System/Int16.h"
#include "System/Drawing/FontStyle.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
#include "TextCapsType.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "FontNameConstants.h"
#include "System/Array1D.h"
#include "System/Text/StringBuilder.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "TextStrikeType.h"
#define STATIC_FONT() 

namespace Aspose {
namespace Cells {
class InternalColor;
class CopyOptions;
class ThemeColor;
class WorksheetCollection;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Font : public Aspose::Cells::System::Object
#else	class Font : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 fontHeight;
			Aspose::Cells::System::Int32 m_BaseLine;
			Aspose::Cells::System::Int16 weight;
			Aspose::Cells::System::Int32 fontIndex;
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetScheme();
			void SetScheme(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Byte charset;
			Aspose::Cells::System::Int32 GetCharset();
			void SetCharset(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetColorIndex(bool match , bool& found);
			intrusive_ptr<Aspose::Cells::InternalColor> _InternalColor;
			 virtual intrusive_ptr<Aspose::Cells::InternalColor> GetInternalColor();
			 virtual void SetInternalColor(intrusive_ptr<Aspose::Cells::InternalColor> value);
			Aspose::Cells::WorksheetCollection* Sheets;
			Aspose::Cells::System::Object* Parent;
			 Font(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Object> format , bool isShape);
			 Font(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Object> format , bool isShape , bool reading);
			void DoBeforeReading();
			intrusive_ptr<Aspose::Cells::System::Object> GetEmbedded();
			void SetEmbedded(intrusive_ptr<Aspose::Cells::System::Object> value);
			bool IsAutoScaleFont();
			bool IsItalic();
			void SetIsItalic(bool value);
			bool IsBold();
			void SetIsBold(bool value);
			void SetInternalBold(bool value);
			Aspose::Cells::TextCapsType GetCapsType();
			void SetCapsType(Aspose::Cells::TextCapsType value);
			Aspose::Cells::TextStrikeType GetStrikeType();
			void SetStrikeType(Aspose::Cells::TextStrikeType value);
			bool IsStrikeout();
			void SetIsStrikeout(bool value);
			Aspose::Cells::System::Byte GetScript();
			Aspose::Cells::System::Int32 GetBaseLine();
			void SetBaseLine(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetScriptOffset();
			void SetScriptOffset(Aspose::Cells::System::Double value);
			bool IsSuperscript();
			void SetIsSuperscript(bool value);
			bool IsSubscript();
			void SetIsSubscript(bool value);
			Aspose::Cells::System::Int32 GetWeight();
			void SetWeight(Aspose::Cells::System::Int32 value);
			Aspose::Cells::FontUnderlineType GetUnderline();
			void SetUnderline(Aspose::Cells::FontUnderlineType value);
			Aspose::Cells::System::Byte family;
			Aspose::Cells::System::Byte GetFamily();
			void SetFamily(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::System::String> fontName;
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName();
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			 virtual bool IsColorModified();
			 virtual void SetAcctualInternalName(intrusive_ptr<Aspose::Cells::System::String> name);
			 virtual void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> name , bool setScheme , Aspose::Cells::FontSchemeType scheme);
			void SetFamilyAndCharset(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Double GetDoubleSize();
			void SetDoubleSize(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetSize();
			void SetSize(Aspose::Cells::System::Int32 value);
			void SetReadDoubleSize(Aspose::Cells::System::Double value);
			void SetInnerDoubleSize(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetFontHeight();
			void SetFontHeight(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::ThemeColor> GetThemeColor();
			void SetThemeColor(intrusive_ptr<Aspose::Cells::ThemeColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetArgbColor();
			void SetArgbColor(Aspose::Cells::System::Int32 value);
			bool Equals(intrusive_ptr<Aspose::Cells::Font> font);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Font> font);
			bool IsAllEqual(intrusive_ptr<Aspose::Cells::Font> font);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::Workbook> current , intrusive_ptr<Aspose::Cells::Workbook> workbook2);
			void InnerCopyColor(intrusive_ptr<Aspose::Cells::Font> font);
			void InnerCopyColor(intrusive_ptr<Aspose::Cells::InternalColor> source);
			bool IsAutoColor();
			void SetIsAutoColor(bool value);
			bool IsShapeColor();
			void SetIsShapeColor(bool value);
			 virtual bool IsShapeFont();
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Font> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			Aspose::Cells::System::Int32 GetFontIndex();
			void SetFontIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 m_Options;
			bool IsNormalizeHeights();
			void SetIsNormalizeHeights(bool value);
			Aspose::Cells::FontSchemeType GetSchemeType();
			void SetSchemeType(Aspose::Cells::FontSchemeType value);
			Aspose::Cells::System::Int32 SetFlags;
			void ClearFlags();
			bool IsSameOption(intrusive_ptr<Aspose::Cells::Font> font);
			void SetFontWithOption(intrusive_ptr<Aspose::Cells::Font> font);
			void AppendFontString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> hashString);
			void GetFont(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> fontData);
			bool IsModified(Aspose::Cells::StyleModifyFlag flag);
			void SetStyleFlag(Aspose::Cells::StyleModifyFlag flag);
			Aspose::Cells::System::Drawing::FontStyle GetFontStyle();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 Font();
		public:
			virtual ~Font();
	};

}

}
