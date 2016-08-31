#pragma once
//#include "System/IO/Stream.h"
//#include "System/Int64.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Int16.h"
#include "System/String.h"
//#include "System/IO/MemoryStream.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
//#include "System/Byte.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_THEMERECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
class ZipOutputStream;
class ZipEntry;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ThemeRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateXmlWriter(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s);
			void DoCopy(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s);
			void CopyData(intrusive_ptr<Aspose::Cells::OpenXML::ZipEntry> originEntry , intrusive_ptr<Aspose::Cells::System::String> newEntryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> _s);
	public:

			 ThemeRecord();
			 ThemeRecord(Aspose::Cells::System::Int32 themeVersion);
			void Write(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~ThemeRecord();
	};

}

}

}
