#pragma once
#include "System/IO/Stream.h"
//#include "System/Collections/IEnumerator.h"
#include "System/IDisposable.h"
#include "System/Array1D.h"
//#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "FileFormatType.h"
//#include "System/IO/Path.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/GC.h"
#include "System/Int32.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ICollection.h"
//#include "System/DateTime.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_EXPWHOLEIMPL() 

namespace Aspose {
namespace Cells {
class OoxmlSaveOptions;
class Workbook;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpWhole;
class DataExpWorksheet;
class ZipFile;
class ZipEntry;
class ExpStyles;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpWholeImpl : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:


		class CXXFinallyWrite;

		 friend class ExpWholeImpl::CXXFinallyWrite;

		class CXXFinallyOneSheet;

		 friend class ExpWholeImpl::CXXFinallyOneSheet;

		
	class CXXFinallyWrite : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
	public:

			 CXXFinallyWrite(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			 CXXFinallyWrite();
		public:
			virtual ~CXXFinallyWrite();
	};

		
	class CXXFinallyOneSheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool _cacheHW;
			intrusive_ptr<Aspose::Cells::Cells> _cells;
	public:

			 CXXFinallyOneSheet(bool cacheHW , intrusive_ptr<Aspose::Cells::Cells> cells);
			 CXXFinallyOneSheet();
		public:
			virtual ~CXXFinallyOneSheet();
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OoxmlSaveOptions> _saveOptions;
			intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> ExpStyles;
			void WriteEntries(bool isRel);
			void WriteCustomUI();
			void ExpRelFileWithOnlyRID1(intrusive_ptr<Aspose::Cells::System::String> relFileName , intrusive_ptr<Aspose::Cells::System::String> relType , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			void WriteExternalLinks();
			void WriteWorksheets();
			void WriteOneSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteCustProperties(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WritePrinterSettings(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteTables(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteSheetRels(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteWorkSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo);
			void WriteRevisions();
			void WriteShareStringTable();
			void WriteStyles();
			void WriteWorkbook();
			void WriteCustomXmlItem();
			void WritePkgRels();
			void WriteXmlMaps();
			void CopyKeepEmbeddings();
			void WriteKeepData();
			void CopyKeepEntries();
			void CopyAndUpdateRelFile(intrusive_ptr<Aspose::Cells::System::String> originRelFn , intrusive_ptr<Aspose::Cells::System::String> newRelFn);
			void CopyDir(intrusive_ptr<Aspose::Cells::System::String> dir);
			void CopyDir(intrusive_ptr<Aspose::Cells::System::String> dir , intrusive_ptr<Aspose::Cells::System::String> excludeEntryName);
			void CopyEntry(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::String> newEntryName);
			void DoCopy(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::String> newEntryName , bool isDir);
			void DoCopy(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::String> newEntryName , bool isDir , intrusive_ptr<Aspose::Cells::System::String> excludeEntryName);
	public:

			void Close();
			void Dispose();
			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::System::IO::Stream> _stream;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> _s;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			bool _macroEnable;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			Aspose::Cells::FileFormatType _fileType;
			 ExpWholeImpl(intrusive_ptr<Aspose::Cells::Workbook> wbook , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::FileFormatType fType , intrusive_ptr<Aspose::Cells::OoxmlSaveOptions> saveOptions);
			void Write();
			static void WriteData(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			void WritePropsCustom();
			void WritePropsApp();
			void WritePropsCore();
			void WriteContentTypes();
			void CopyData(intrusive_ptr<Aspose::Cells::OpenXML::ZipEntry> originEntry , intrusive_ptr<Aspose::Cells::System::String> newEntryName);
			void DoPrepare();
			 ExpWholeImpl();
		public:
			virtual ~ExpWholeImpl();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
