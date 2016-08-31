#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "System/Collections/IComparer.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Int32.h"
//#include "System/Collections/ICollection.h"
#include "System/Collections/ArrayList.h"
#define STATIC_IMPRELATIONSHIPS() 

namespace Aspose {
namespace Cells {
class Workbook;
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
class ZipFile;
class DataRelationship;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpRelationships : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Collections::IComparer> relInfoComparer;
			static intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> ReadOneRelationship(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetRelName(intrusive_ptr<Aspose::Cells::System::String> impEntryName);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadToList(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zipFile , intrusive_ptr<Aspose::Cells::System::String> baseDirectory);
			static intrusive_ptr<Aspose::Cells::System::String> GetTargetFromRelationMap(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> type);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> GetRelationInfo(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> type , bool remove);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> GetRelationInfoByRid(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> rid);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> GetRelationInfoByRid(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::String> rid);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRelationInfoList(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> type);
			static void AddRelationInfoToList(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::String> type);
			 ImpRelationships();
		public:
			virtual ~ImpRelationships();
	};

}

}

}
