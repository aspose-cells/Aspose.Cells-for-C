#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "LoadDataFilterOptions.h"
#include "System/Object.h"
//#include "System/GC.h"
#include "System/String.h"
//#include "System/ApplicationException.h"
#include "System/Int32.h"
#include "System/IDisposable.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAIMPWHOLE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Workbook;
class LoadOptions;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataImpWhole : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _bookRelsMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_FontMap;
	public:

			void Close();
			void Dispose();
			Aspose::Cells::Workbook* Workbook;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> SheetInfoMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SheetInfos;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> XfIdMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> SameDefaultXfMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Blips;
			intrusive_ptr<Aspose::Cells::System::String> FnWorkbook;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _pivotCacheList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _fontList;
			Aspose::Cells::LoadOptions* _loadOptions;
			Aspose::Cells::LoadDataFilterOptions loadFilters;
			bool hasHandler;
			intrusive_ptr<Aspose::Cells::System::String> RevisionHeaderPartName;
			intrusive_ptr<Aspose::Cells::System::String> RevisionUserPartName;
			intrusive_ptr<Aspose::Cells::System::String> SharedStringsName;
			bool _IsXml;
			 DataImpWhole(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 DataImpWhole(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			void AddSheetInfo(intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Int32 localSheetId , intrusive_ptr<Aspose::Cells::System::String> sheetId , intrusive_ptr<Aspose::Cells::System::String> rId);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheetByLocalSheetId(Aspose::Cells::System::Int32 localSheetId);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SlicerCacheRels;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetBookRelsMap();
			void SetBookRelsMap(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> value);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetFontMap();
			void SetFontMap(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ExternalRefList;
			 DataImpWhole();
		public:
			virtual ~DataImpWhole();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
