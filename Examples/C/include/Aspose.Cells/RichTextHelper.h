#pragma once
#include "System/Byte.h"
//#include "System/Collections/SortedList.h"
//#include "System/UInt16.h"
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RICHTEXTHELPER() 

namespace Aspose {
namespace Cells {
class Font;
class WorksheetCollection;
class FontSetting;
}
}

namespace Aspose {
namespace Cells {
	class RichTextHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CreateFormatRuns(Aspose::Cells::System::Int32 cellFontIndex , intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FontSetting*>> charsList , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static void ReConstructChararacters(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> charsList , Aspose::Cells::System::Int32 textLength , intrusive_ptr<Aspose::Cells::Font> font , bool isInShape);
			 RichTextHelper();
		public:
			virtual ~RichTextHelper();
	};

}

}
