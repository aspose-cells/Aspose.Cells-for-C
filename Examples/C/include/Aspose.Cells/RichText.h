#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "RefString.h"
#include "System/Collections/ArrayList.h"
#define STATIC_RICHTEXT() 

namespace Aspose {
namespace Cells {
class Cell;
class StyleFlag;
class Cells;
class Font;
class Style;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class RichText : public Aspose::Cells::RefString
	{
	private:

			void Init_Vars();
	public:

			 RichText();
			 RichText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formatRuns);
			 RichText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formatRuns , Aspose::Cells::System::Int32 count);
			 virtual bool IsString();
			 virtual bool IsRichText();
			 virtual bool IsPhoneticText();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formatRuns;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormatRuns();
			void SetFormatRuns(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_CharsList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCharsList();
			void SetCharsList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			bool IsGathered();
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			void InitCharsList(intrusive_ptr<Aspose::Cells::RichText> source , intrusive_ptr<Aspose::Cells::Cell> cell);
			void InitCharsList(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> fmtRuns , intrusive_ptr<Aspose::Cells::Cell> cell);
			void InitCharsList(intrusive_ptr<Aspose::Cells::Cell> cell);
			void Copy(intrusive_ptr<Aspose::Cells::Cell> sourceCell , intrusive_ptr<Aspose::Cells::RichText> source , intrusive_ptr<Aspose::Cells::Cell> destCell);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCharacters(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 valueLength , intrusive_ptr<Aspose::Cells::Font> defaultFont);
			bool Equals(intrusive_ptr<Aspose::Cells::RichText> a);
			bool IsEqualRichText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> runs);
		public:
			virtual ~RichText();
	};

}

}
