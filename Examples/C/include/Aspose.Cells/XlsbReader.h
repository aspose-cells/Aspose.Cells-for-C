#pragma once
//#include "System/IO/Stream.h"
#include "System/Collections/ArrayList.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
#include "SheetType.h"
//#include "System/IO/Path.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/IO/FileStream.h"
#include "System/Int32.h"
#include "Abstract07Reader.h"
//#include "System/Exception.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/GC.h"
//#include "System/Int64.h"
//#include "System/StringHelperPal.h"
#include "OpenXMLUtil.h"
//#include "System/Collections/ICollection.h"
//#include "System/IO/File.h"
#define STATIC_XLSBREADER() 

namespace Aspose {
namespace Cells {
class Workbook;
class LoadOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class PivotTable;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbStylesReader;
class XlsbBinaryReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWorksheet;
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbReader : public Aspose::Cells::OpenXML::Abstract07Reader
	{
	private:


		class CXXFinallyRead;

		 friend class XlsbReader::CXXFinallyRead;

		
	class CXXFinallyRead : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Workbook> _workbook;
	public:

			intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> _rdr;
			 CXXFinallyRead(intrusive_ptr<Aspose::Cells::Workbook> wb);
			 CXXFinallyRead();
		public:
			virtual ~CXXFinallyRead();
	};
	private:

			void Init_Vars();
			void ReadPackageRels();
			void ReadWorkBookRels();
			void ReadRevisions();
			void BindPivottableAndCache();
			void CheckFormulaForCalculateItem(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void ReadPivotCache();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ReadPivotCacheRels(intrusive_ptr<Aspose::Cells::System::String> fnBase);
			void ReadKeepEntries(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadContentTypes(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadChartSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadprinterSettings(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadBgPicture(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadPivotTables(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadQueryTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RelationsMap , intrusive_ptr<Aspose::Cells::System::Object> parent);
			void ReadTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadVmlDrawing(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadHFLegacyDrawing(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadDrawings(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> baseDirectory , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadSheetRels(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , Aspose::Cells::SheetType type , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
	public:

			void Close();
			 virtual void Dispose();
			static intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> CreateBinaryReader(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::System::String> entryName);
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbStylesReader> StylesReader;
			static void Read(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			 XlsbReader(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadRecordData(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader);
			void Read(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Read();
			void AddToKeepRelInfoList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void ReadPivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::System::String> rid , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , Aspose::Cells::System::Int32 recordCount);
			void ReadWorksheets(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadSST(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader);
			 XlsbReader();
		public:
			virtual ~XlsbReader();
	};

}

}

}
