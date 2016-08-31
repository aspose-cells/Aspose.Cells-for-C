#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "DataFormatRunType.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAFORMATRUN() 

namespace Aspose {
namespace Cells {
class RichText;
class Workbook;
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataFormatRun : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void AddDataFormatRuns(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx , intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::Workbook> wbook);
			static void AddDataFormatRuns(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 startIdx , Aspose::Cells::System::Int32 endIdx , Aspose::Cells::System::Int32 fontIdx , intrusive_ptr<Aspose::Cells::Workbook> wbook);
	public:

			intrusive_ptr<Aspose::Cells::System::String> Text;
			intrusive_ptr<Aspose::Cells::Font> Font;
			Aspose::Cells::System::Int32 WidthInPixel;
			Aspose::Cells::OpenXML::DataFormatRunType type;
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetDataFormatRunsList(intrusive_ptr<Aspose::Cells::RichText> rtext , intrusive_ptr<Aspose::Cells::Font> cellFont , intrusive_ptr<Aspose::Cells::Workbook> wbook);
			 DataFormatRun();
		public:
			virtual ~DataFormatRun();
	};

}

}

}
