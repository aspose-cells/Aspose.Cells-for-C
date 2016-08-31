#pragma once
//#include "System/StringHelperPal.h"
#include "System/Collections/ICollection.h"
#include "System/String.h"
//#include "System/GC.h"
#include "DataKeep.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
//#include "System/IO/Path.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Int32.h"
#include "System/IDisposable.h"
#define STATIC_DATAKEEPWHOLE() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepOriginFile;
class DataKeepBook;
class DataContentType;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepWhole : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool IsRefedByKeepEntry(intrusive_ptr<Aspose::Cells::System::String> fn);
	public:

			void Dispose();
			 DataKeepWhole(intrusive_ptr<Aspose::Cells::Workbook> book);
			Aspose::Cells::Workbook* Workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepOriginFile> OriginFile;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepContentTypeList;
			bool HasTheme;
			bool ThemeIsOldVersion;
			intrusive_ptr<Aspose::Cells::System::String> ThemeFn;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadedEmbeddingObjectList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadedImageNameList;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepBook> BookData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> PackageRelList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepEntryInfoList;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeep> StyleData;
			intrusive_ptr<Aspose::Cells::System::String> CustomUITarget;
			void CollectKeepEntries();
			void RemoveFromKeepEntryInfoList(intrusive_ptr<Aspose::Cells::System::String> impEntryName);
			void UpdateKeepRelDataList(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> relDataList);
			bool IsEmbeddingObjReaded(intrusive_ptr<Aspose::Cells::System::String> fileName);
			intrusive_ptr<Aspose::Cells::OpenXML::DataContentType> GetKeepDataContentType(intrusive_ptr<Aspose::Cells::System::String> contentType);
			void RemoveDigitallySign();
			 DataKeepWhole();
		public:
			virtual ~DataKeepWhole();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
