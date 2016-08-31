#pragma once
#include "TextNodeType.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_FONTSETTING() 

namespace Aspose {
namespace Cells {
class Font;
class WorksheetCollection;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
class SpaceSize;
}
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FontSetting : public Aspose::Cells::System::Object
#else	class FontSetting : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			void InitFont();
	public:

			 virtual Aspose::Cells::Drawing::Texts::TextNodeType GetType();
			Aspose::Cells::System::Int32 m_StartIndex;
			Aspose::Cells::System::Int32 m_Length;
			intrusive_ptr<Aspose::Cells::Font> m_Font;
			Aspose::Cells::System::Int32 m_FontIndex;
			Aspose::Cells::WorksheetCollection* Sheets;
			intrusive_ptr<Aspose::Cells::System::Object> Parent;
			 FontSetting(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			Aspose::Cells::System::Int32 GetStartIndex();
			Aspose::Cells::System::Int32 GetLength();
			intrusive_ptr<Aspose::Cells::Font> GetFont();
			Aspose::Cells::System::Int32 GetFontIndex();
			intrusive_ptr<Aspose::Cells::Font> GetInternalFont();
			void SetInternalFont(intrusive_ptr<Aspose::Cells::Font> font);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::SpaceSize> GetInternalSpaceAfter();
			intrusive_ptr<Aspose::Cells::Drawing::Texts::SpaceSize> GetInternalSpaceBefore();
			intrusive_ptr<Aspose::Cells::Drawing::Texts::SpaceSize> GetInternalLineSpacing();
			Aspose::Cells::System::Int32 GetLeftMarginEmu0();
			Aspose::Cells::System::Int32 GetFirstLineIndentEmu0();
			Aspose::Cells::System::Int32 GetParagraphIndex(bool onlyFirstChars);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::FontSetting> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 FontSetting();
		public:
			virtual ~FontSetting();
	};

}

}
