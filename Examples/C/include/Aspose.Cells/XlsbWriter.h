#pragma once
#include "System/IO/Stream.h"
//#include "System/Collections/IEnumerator.h"
#include "System/IDisposable.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
//#include "System/Text/Encoding.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/IO/Path.h"
#include "System/Object.h"
//#include "System/Byte.h"
//#include "System/GC.h"
//#include "System/Int32.h"
//#include "System/Boxing.h"
//#include "System/StringHelperPal.h"
#include "System/IO/MemoryStream.h"
//#include "System/Collections/ICollection.h"
//#include "System/DateTime.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Int32Helper.h"
#define STATIC_XLSBWRITER() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class Workbook;
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
class ZipOutputStream;
class DataExpWhole;
class DataExpWorksheet;
class ZipEntry;
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbWriter : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Write();
			void WriteCustomXmlItem();
			void WriteRevisions();
			void WriteKeepData();
			void CopyKeepEmbeddings();
			void CopyKeepEntries();
			void CopyAndUpdateRelFile(intrusive_ptr<Aspose::Cells::System::String> originRelFn , intrusive_ptr<Aspose::Cells::System::String> newRelFn);
			void WriteExternalLinks(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void WriteEntries(bool isRel);
			void WriteVmlDrawings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteWorksheets();
			void WriteOneSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteTables(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteHFVmlDrawings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteCharts(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteDrawings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteComments(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteSheetRels(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteChartSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteWorkSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WritePkgRels();
			void WriteContentTypes();
			void CopyDir(intrusive_ptr<Aspose::Cells::System::String> dir);
			void CopyEntry(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::String> newEntryName);
			void DoCopy(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::String> newEntryName , bool isDir);
			void CopyData(intrusive_ptr<Aspose::Cells::OpenXML::ZipEntry> originEntry , intrusive_ptr<Aspose::Cells::System::String> newEntryName);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> CreateXmlWriter(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s);
			void WritePrinterSettings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
	public:

			Aspose::Cells::Workbook* _wbook;
			intrusive_ptr<Aspose::Cells::System::IO::Stream> _stream;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> _s;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _wbookInfo;
			bool _macroEnable;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			intrusive_ptr<Aspose::Cells::SaveOptions> _saveOptions;
			void Close();
			void Dispose();
			 XlsbWriter(intrusive_ptr<Aspose::Cells::Workbook> wbook , bool macroEnable , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void WritePropsCustom();
			void WritePropsApp();
			void WritePropsCore();
			void DoPrepare();
			void ExpRelFileWithOnlyRID1(intrusive_ptr<Aspose::Cells::System::String> relFileName , intrusive_ptr<Aspose::Cells::System::String> relType , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			static void WriteStreamToZip(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s);
			 XlsbWriter();
		public:
			virtual ~XlsbWriter();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
