#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Byte.h"
#include "System/IO/MemoryStream.h"
//#include "System/Drawing/Color.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#define STATIC_XLSBSTYLESWRITER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpStyles;
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbStylesWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
			void Write();
			void WriteColorPalette();
			void WriteTableStyles();
			void WriteTableStyle(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle);
			void WriteNumberFormat();
			void WriteFonts();
			void WriteFills(intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteBorders(intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteCellStylesXFs(intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteXfs(intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			void WriteCellStyle(intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> sStruct);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CollectDxfStyleList(Aspose::Cells::System::Int32 originCount);
			void WriteDxfs();
	public:

			 XlsbStylesWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			 XlsbStylesWriter();
		public:
			virtual ~XlsbStylesWriter();
	};

}

}

}
