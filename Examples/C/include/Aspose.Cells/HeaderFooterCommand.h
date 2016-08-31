#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/Drawing/Color.h"
//#include "System/Exception.h"
#include "HeaderFooterCommandType.h"
//#include "System/Int32.h"
//#include "System/Globalization/NumberStyles.h"
#include "System/Collections/ArrayList.h"
#define STATIC_HEADERFOOTERCOMMAND() 

namespace Aspose {
namespace Cells {
class Workbook;
class Font;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API HeaderFooterCommand : public Aspose::Cells::System::Object
#else	class HeaderFooterCommand : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::HeaderFooterCommandType m_Type;
			intrusive_ptr<Aspose::Cells::System::String> m_Text;
			static void InitHeaderFooterFont(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::System::String> stringText);
	public:

			Aspose::Cells::HeaderFooterCommandType GetType();
			intrusive_ptr<Aspose::Cells::Font> m_Font;
			intrusive_ptr<Aspose::Cells::Font> GetFont();
			intrusive_ptr<Aspose::Cells::System::String> GetText();
			 HeaderFooterCommand(Aspose::Cells::HeaderFooterCommandType type , intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Parse(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::String> strText);
			 HeaderFooterCommand();
		public:
			virtual ~HeaderFooterCommand();
	};

}

}
