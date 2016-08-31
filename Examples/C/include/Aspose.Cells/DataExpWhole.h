#pragma once
#include "System/Collections/ArrayList.h"
#include "System/IDisposable.h"
#include "System/Drawing/Imaging/ImageFormat.h"
#include "System/Array1D.h"
#include "OpenXMLUtil.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Collections/SortedList.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/GC.h"
#include "System/Int32.h"
#include "FileFormatType.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#define STATIC_DATAEXPWHOLE() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class Workbook;
class QueryTable;
class LightCellsExpData;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataRelationship;
class DataContentType;
class DataPivotCache;
class DataExpRevisions;
class AbstractEntryWriter;
class RelHashMap;
class DataExpStyles;
class ZipFile;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpWhole : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startImageFnIdx;
			Aspose::Cells::System::Int32 _vmlDrawingFnIndex;
			Aspose::Cells::System::Int32 _drawingFnIndex;
			Aspose::Cells::System::Int32 _tableFnIndex;
			Aspose::Cells::System::Int32 _tableSingleCellsFnIndex;
			Aspose::Cells::System::Int32 _chartFnIndex;
			Aspose::Cells::System::Int32 _sheetCustPrptsFnIndex;
			Aspose::Cells::FileFormatType _fileFormatType;
			void InitSliceCaches();
			void AddSheetsRelInfo();
			void InitExternalLinks();
			void Init();
			void AddWorkbookRelEntry();
			void InitTheme();
			void UpdateKeepRelInfo();
			void AddKeepEntries();
			Aspose::Cells::System::Int32 PivotCacheFnId;
			Aspose::Cells::System::Int32 PivotRecordFnId;
			void InitPivotCaches();
			void InitPivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			void AddDefault(intrusive_ptr<Aspose::Cells::System::String> extension , intrusive_ptr<Aspose::Cells::System::String> contentType);
			bool IsDefaultExist(intrusive_ptr<Aspose::Cells::System::String> extension);
			void InitContentTypeList();
			void InitVbaProject();
			void AddRevisionContentTypes();
			void AddOleContentTypes();
			void AddCustomXmlItemRelInfo();
			void InitXlsbContentTypeList();
			intrusive_ptr<Aspose::Cells::System::String> CheckBin();
			void AddKeepContentTypes();
			void InitImage(bool isHF);
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> AddToWorkbookRelList(intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target);
	public:

			void Close();
			void Dispose();
			Aspose::Cells::Workbook* Workbook;
			intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> globalExpData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> DataExpWorksheetList;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> StylesInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> WorkbookRelMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ImageFileNameMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> HFImageFileNameMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> DataPivotCaches;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Entries;
			Aspose::Cells::System::Int32 PivotTableFnSuffix;
			Aspose::Cells::System::Int32 SlicerFnIndex;
			Aspose::Cells::System::Int32 ChartsCount;
			bool IsExpMacro;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ContentTypeList;
			intrusive_ptr<Aspose::Cells::System::String> _defaultExtention;
			bool _isXml;
			Aspose::Cells::System::Int32 _themeOverrideIndex;
			Aspose::Cells::System::Int32 ExternalLinkStartRid;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExternalReferenceRIdMap;
			intrusive_ptr<Aspose::Cells::LightCellsExpData> _lightCellsExpData;
			Aspose::Cells::System::Int32 PrintInfoIndex;
			Aspose::Cells::System::Int32 MaxActiveXId;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> FormulaRelInfo;
			intrusive_ptr<Aspose::Cells::SaveOptions> _saveOptions;
			Aspose::Cells::System::Int32 OleObjectIndex;
			 DataExpWhole(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> originZipFile , bool isExpMacro , bool isXml , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			 DataExpWhole(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> originZipFile , bool isExpMacro , Aspose::Cells::FileFormatType fileFormatType , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			Aspose::Cells::System::Int32 GetAndIncreaseVmlDrawingFnIndex();
			Aspose::Cells::System::Int32 GetAndIncreaseDrawingFnIndex();
			Aspose::Cells::System::Int32 GetAndIncreaseKeepChartFnIndex();
			Aspose::Cells::System::Int32 GetAndIncreaseSheetCustPrptsFnIndex();
			Aspose::Cells::System::Int32 GetAndIncreaseTableFnIndex();
			Aspose::Cells::System::Int32 GetAndIncreaseTableSingleCellsFnIndex();
			intrusive_ptr<Aspose::Cells::System::String> BinContentType;
			intrusive_ptr<Aspose::Cells::System::String> CustomUITarget;
			void AddOverride(intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType);
			void AddImageInfoToContentTypeList(intrusive_ptr<Aspose::Cells::System::String> suffix , intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> imageFormat);
			intrusive_ptr<Aspose::Cells::OpenXML::DataContentType> AddContentType(bool isDefault , intrusive_ptr<Aspose::Cells::System::String> extension , intrusive_ptr<Aspose::Cells::System::String> ContentType);
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpRevisions> m_DataExpRevisons;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> GetDataPivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			bool HasCustomProperties();
			Aspose::Cells::System::Int32 QueryTableId;
			bool IsXB();
			void InitQueryTable(intrusive_ptr<Aspose::Cells::QueryTable> queryTable , intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> relHashMap);
			intrusive_ptr<Aspose::Cells::OpenXML::AbstractEntryWriter> AddMediaEntry(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> f);
			void AddEntry(intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::OpenXML::AbstractEntryWriter> writer);
			Aspose::Cells::System::Int32 AddEntry(intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> ender , Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::OpenXML::AbstractEntryWriter> writer);
			Aspose::Cells::System::Int32 AddEntry(intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::OpenXML::AbstractEntryWriter> writer , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> ender , Aspose::Cells::System::Int32 id);
			 DataExpWhole();
		public:
			virtual ~DataExpWhole();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
