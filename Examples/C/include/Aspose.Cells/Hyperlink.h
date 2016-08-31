#pragma once
//#include "System/Text/RegularExpressions/RegexOptions.h"
//#include "System/Exception.h"
#include "System/Collections/Hashtable.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/RegularExpressions/Match.h"
#define STATIC_HYPERLINK() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
class WorksheetCollection;
class HyperlinkCollection;
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Hyperlink : public Aspose::Cells::System::Object
#else	class Hyperlink : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::HyperlinkCollection* parent;
			bool m_IsAbsolute;
			bool m_IsFile;
			intrusive_ptr<Aspose::Cells::System::String> m_ScreenTip;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Option;
	public:

			 Hyperlink(intrusive_ptr<Aspose::Cells::HyperlinkCollection> parent , intrusive_ptr<Aspose::Cells::CellArea> area);
			 Hyperlink();
			bool IsAbsolute();
			void SetIsAbsolute(bool value);
			bool IsFile();
			void SetIsFile(bool value);
			intrusive_ptr<Aspose::Cells::System::String> address;
			intrusive_ptr<Aspose::Cells::System::String> GetAddress();
			void SetAddress(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> m_TextToDisplay;
			intrusive_ptr<Aspose::Cells::System::String> GetTextToDisplay();
			void SetTextToDisplay(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetAddedTextToDisplay(intrusive_ptr<Aspose::Cells::System::String> address);
			void SetInternalTextToDisplay(intrusive_ptr<Aspose::Cells::System::String> textToDisplay);
			intrusive_ptr<Aspose::Cells::CellArea> area;
			intrusive_ptr<Aspose::Cells::CellArea> GetArea();
			void SetInternalArea(intrusive_ptr<Aspose::Cells::CellArea> area);
			intrusive_ptr<Aspose::Cells::System::String> GetScreenTip();
			void SetScreenTip(intrusive_ptr<Aspose::Cells::System::String> value);
			void Copy(intrusive_ptr<Aspose::Cells::Hyperlink> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyData(intrusive_ptr<Aspose::Cells::Hyperlink> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			bool IsEqualData(intrusive_ptr<Aspose::Cells::Hyperlink> source);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetOption();
			void SetOption(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			Aspose::Cells::System::Int32 GetLinkType(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Cell> GetLinkedCell(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamedRange);
		public:
			virtual ~Hyperlink();
	};

}

}
