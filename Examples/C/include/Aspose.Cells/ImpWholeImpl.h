#pragma once
//#include "System/IO/Stream.h"
#include "System/Collections/ArrayList.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
#include "SheetType.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "Abstract07Reader.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Object.h"
//#include "System/Byte.h"
//#include "System/Text/Encoding.h"
//#include "System/GC.h"
#include "System/Int32.h"
//#include "System/IO/Path.h"
//#include "System/Int64.h"
//#include "System/StringHelperPal.h"
#include "OpenXMLUtil.h"
//#include "System/Collections/ICollection.h"
//#include "System/Collections/IDictionaryEnumerator.h"
#define STATIC_IMPWHOLEIMPL() 

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
namespace OpenXML {
class DataImpWhole;
class DataImpWorksheet;
class ImpSharedStrings;
class DataKeepEntry;
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWholeImpl : public Aspose::Cells::OpenXML::Abstract07Reader
	{
	private:

			void Init_Vars();
			void BindPivotSlicerAndCache();
			void ProcessListObject();
			void BindPivottableAndCache();
			void CheckFormulaForCalculateItem(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void ReadKeepEntries();
			void ReadPackageRels();
			void ReadWorkbook();
			void ReadWorkbookExternalLinkInfo();
			void ReadExternalLinks();
			void ReadContentTypes();
			void ReadWorkBookRels();
			void ReadCustomUI();
			void ReadRevisions();
			void ReadXmlMap();
			void ReadPropsCore();
			void ReadPropsApp();
			void ReadPropsCustom();
			void ReadStyles();
			void ReadShareStringTable();
			void ReadWorksheets();
			void ReadWorksheetTables(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
			void ReadQueryTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RelationsMap , intrusive_ptr<Aspose::Cells::System::Object> parent);
			void ReadWorkSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
			void ReadprinterSettings(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadTable(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadSheetCustProperties(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadBgPicture(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadHFLegacyDrawing(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadChartSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
			void ReadWorkSheetData(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheet);
			void ReadSheetRels(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , Aspose::Cells::SheetType type , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
			void ReadConnections();
			void ReadPivotSlicerCaches();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ReadRels(intrusive_ptr<Aspose::Cells::System::String> fnPivotCacheRels);
			void ReadPivotCaches();
			void ReadPivotCacheRecords(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> id , Aspose::Cells::System::Int32 recordCount);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ReadPivotCacheRels(intrusive_ptr<Aspose::Cells::System::String> fnBase);
			void ReadPivotTables(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadPivotSlicers(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadVmlDrawing(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnVmlDrawing);
			void ReadComments(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadChartSheetData(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheet);
			void ReadDrawings(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> baseDirectory , intrusive_ptr<Aspose::Cells::System::String> fnDrawing);
	public:

			void Close();
			 virtual void Dispose();
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> _impSST;
			 ImpWholeImpl(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			void Read();
			void AddToKeepRelInfoList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataKeepEntry> AddKeepEntry(intrusive_ptr<Aspose::Cells::System::String> path , intrusive_ptr<Aspose::Cells::System::String> folder , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static void ReadTheme(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			 ImpWholeImpl();
		public:
			virtual ~ImpWholeImpl();
	};

}

}

}
