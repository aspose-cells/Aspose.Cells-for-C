#pragma once
//#include "System/Collections/ArrayList.h"
#include "StyleModifyFlag.h"
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
#include "System/Object.h"
#include "BackgroundType.h"
#include "System/Int16.h"
#include "System/UInt32.h"
#include "GradientStyleType.h"
//#include "System/Type.h"
#include "BorderType.h"
//#include "System/ArgumentException.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "CellBorderType.h"
#include "System/Array1D.h"
#include "ColorType.h"
#include "TextDirectionType.h"
#include "System/Byte.h"
#include "System/String.h"
#include "TextAlignmentType.h"
#include "System/Int32.h"
#define STATIC_STYLE() 

namespace Aspose {
namespace Cells {
class Border;
class InternalColor;
class Font;
class ThemeColor;
class WorksheetCollection;
class BorderCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Style : public Aspose::Cells::System::Object
#else	class Style : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> name;
			Aspose::Cells::BackgroundType pattern;
			intrusive_ptr<Aspose::Cells::BorderCollection> m_Borders;
			Aspose::Cells::System::Int32 parentXFIndex;
			Aspose::Cells::System::Byte m_UsedFlag;
			void GetBorderstyle(Aspose::Cells::System::Int32 flag , Aspose::Cells::BorderType border);
			static bool IsEqualBorderColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> c1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color> c2);
			Aspose::Cells::System::UInt32 m_SetFlag;
			void AppendBordersString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> hashString);
			void AppendBorderstring(intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> hashString);
			Aspose::Cells::System::Byte m_IndentLevel;
			Aspose::Cells::System::Int32 number;
			intrusive_ptr<Aspose::Cells::Font> font;
			Aspose::Cells::WorksheetCollection* sheets;
			Aspose::Cells::System::Int32 rotation;
			Aspose::Cells::System::Byte m_aligment;
			intrusive_ptr<Aspose::Cells::System::String> custom;
			bool IsCustomDateTime(intrusive_ptr<Aspose::Cells::System::String> c);
			Aspose::Cells::System::Int16 m_Zip;
	public:

			intrusive_ptr<Aspose::Cells::InternalColor> BackgroundInternalColor;
			intrusive_ptr<Aspose::Cells::ThemeColor> GetBackgroundThemeColor();
			void SetBackgroundThemeColor(intrusive_ptr<Aspose::Cells::ThemeColor> value);
			Aspose::Cells::System::Int32 GetBackgroundColorIndex();
			intrusive_ptr<Aspose::Cells::InternalColor> ForeInternalColor;
			intrusive_ptr<Aspose::Cells::ThemeColor> GetForegroundThemeColor();
			void SetForegroundThemeColor(intrusive_ptr<Aspose::Cells::ThemeColor> value);
			Aspose::Cells::System::Int32 GetForegroundColorIndex();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetInernalName();
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::BackgroundType GetPattern();
			void SetPattern(Aspose::Cells::BackgroundType value);
			intrusive_ptr<Aspose::Cells::BorderCollection> GetInternalBorders();
			intrusive_ptr<Aspose::Cells::BorderCollection> GetBorders();
			 Style();
			 Style(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			void SetSheets(intrusive_ptr<Aspose::Cells::WorksheetCollection> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetBackgroundColor();
			void SetBackgroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetBackgroundArgbColor();
			void SetBackgroundArgbColor(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetForegroundColor();
			void SetForegroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int32 GetForegroundArgbColor();
			void SetForegroundArgbColor(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetColorIndex(intrusive_ptr<Aspose::Cells::InternalColor> color , Aspose::Cells::System::Int32 defaultIndex);
			Aspose::Cells::System::Int32 GetColorIndex(intrusive_ptr<Aspose::Cells::InternalColor> color , Aspose::Cells::System::Int32 defaultIndex , bool& found);
			void Copy(intrusive_ptr<Aspose::Cells::Style> style);
			bool HasBorders();
			bool IsCellStyle();
			void SetIsCellStyle(bool value);
			void SetInternalIsCellStyle(bool value);
			Aspose::Cells::System::Int32 GetParentXFIndex();
			void SetParentXFIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::Style> GetParentStyle();
			void GetStyle(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 xfIndexRead);
			void Update();
			void ApplyNamedStyle(intrusive_ptr<Aspose::Cells::Style> namedStyle);
			void ApplyStyleToCellStyle(intrusive_ptr<Aspose::Cells::Style> cellStyle);
			Aspose::Cells::System::Byte GetUsedFlag();
			void SetUsedFlag(Aspose::Cells::System::Byte value);
			bool IsFormatSet();
			void SetIsFormatSet(bool value);
			bool IsFontSet();
			void SetIsFontSet(bool value);
			bool IsAligmentSet();
			void SetIsAligmentSet(bool value);
			bool IsBordersSet();
			void SetIsBordersSet(bool value);
			bool IsPatternSet();
			void SetIsPatternSet(bool value);
			bool IsProtectionSet();
			void SetIsProtectionSet(bool value);
			void GetStyle(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> xfData);
			bool IsDxfEqual(intrusive_ptr<Aspose::Cells::Style> style);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Style> style);
			bool IsEqual(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Byte usedFlag);
			bool IsParent(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::UInt32 GetSetFlag();
			void SetSetFlag(Aspose::Cells::System::UInt32 value);
			bool IsModified(Aspose::Cells::StyleModifyFlag modifyFlag);
			void SetModified(Aspose::Cells::StyleModifyFlag modifyFlag);
			void Remove(Aspose::Cells::StyleModifyFlag flag);
			 virtual bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj);
			 virtual Aspose::Cells::System::Int32 GetHashCode();
			Aspose::Cells::System::Int32 GetIndentLevel();
			void SetIndentLevel(Aspose::Cells::System::Int32 value);
			void SetInternalIndentLevel(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::Font> GetInternalFont();
			intrusive_ptr<Aspose::Cells::Font> GetFont();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorInPalette(Aspose::Cells::System::Int32 colorIndex);
			Aspose::Cells::System::Int32 GetRotationAngle();
			void SetRotationAngle(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetRotation();
			void SetRotation(Aspose::Cells::System::Int32 value);
			Aspose::Cells::TextAlignmentType GetVerticalAlignment();
			void SetVerticalAlignment(Aspose::Cells::TextAlignmentType value);
			Aspose::Cells::TextAlignmentType GetHorizontalAlignment();
			void SetHorizontalAlignment(Aspose::Cells::TextAlignmentType value);
			bool IsTextWrapped();
			void SetIsTextWrapped(bool value);
			Aspose::Cells::System::Int32 GetNumber();
			void SetNumber(Aspose::Cells::System::Int32 value);
			void GetNumberFormat(Aspose::Cells::System::Int32& number , intrusive_ptr<Aspose::Cells::System::String>& custom);
			void SetNumberFormat(Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::System::String> custom);
			void SetReadNumberFormat(Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetInternalNumber();
			void SetInternalNumber(Aspose::Cells::System::Int32 index);
			bool SetBorder(Aspose::Cells::BorderType borderEdge , Aspose::Cells::CellBorderType borderStyle , intrusive_ptr<Aspose::Cells::System::Drawing::Color> borderColor);
			bool IsLocked();
			void SetIsLocked(bool value);
			void SetCustom(intrusive_ptr<Aspose::Cells::System::String> custom , bool builtinPreference);
			intrusive_ptr<Aspose::Cells::System::String> GetCustom();
			void SetCustom(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCultureCustom();
			void SetCultureCustom(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetInternalCustom();
			bool IsFormulaHidden();
			void SetIsFormulaHidden(bool value);
			bool GetShrinkToFit();
			void SetShrinkToFit(bool value);
			Aspose::Cells::TextDirectionType GetTextDirection();
			void SetTextDirection(Aspose::Cells::TextDirectionType value);
			bool GetIshidden();
			void SetIshidden(bool value);
			bool IsJustifyDistributed();
			void SetIsJustifyDistributed(bool value);
			bool GetQuotePrefix();
			bool GetInnnerQuotePrefix();
			void SetInnnerQuotePrefix(bool value);
			bool IsSxButton();
			void SetIsSxButton(bool value);
			Aspose::Cells::System::Byte m_gradient;
			bool IsGradient();
			void SetIsGradient(bool value);
			Aspose::Cells::Drawing::GradientStyleType GetGradientStyleType();
			void SetGradientStyleType(Aspose::Cells::Drawing::GradientStyleType value);
			Aspose::Cells::System::Int32 GetVariant();
			void SetVariant(Aspose::Cells::System::Int32 value);
			void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color2 , Aspose::Cells::Drawing::GradientStyleType gradientStyleType , Aspose::Cells::System::Int32 variant);
			void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::InternalColor> color1 , intrusive_ptr<Aspose::Cells::InternalColor> color2 , Aspose::Cells::Drawing::GradientStyleType gradientStyleType , Aspose::Cells::System::Int32 variant);
			void GetTwoColorGradient(intrusive_ptr<Aspose::Cells::System::Drawing::Color>& color1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color>& color2 , Aspose::Cells::Drawing::GradientStyleType& gradientStyleType , Aspose::Cells::System::Int32& variant);
			bool IsPercent();
			void SetDateTimeFlag(bool flag);
			bool IsDateTime();
			void SetReadBorder(Aspose::Cells::System::Int32 type , intrusive_ptr<Aspose::Cells::System::String> borderType);
			void SetReadBorder(Aspose::Cells::System::Int32 type , intrusive_ptr<Aspose::Cells::System::String> borderType , Aspose::Cells::ColorType colorType , Aspose::Cells::System::Int32 value , Aspose::Cells::System::Double tint);
			void SetColor(Aspose::Cells::System::Int32 type , Aspose::Cells::ColorType colorType , Aspose::Cells::System::Int32 value , Aspose::Cells::System::Double tint);
		public:
			virtual ~Style();
	};

}

}
