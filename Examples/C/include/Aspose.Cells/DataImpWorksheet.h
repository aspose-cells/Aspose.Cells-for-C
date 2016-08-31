#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "OpenXMLUtil.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
//#include "System/Collections/ICollection.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAIMPWORKSHEET() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpObject;
class DataRelationship;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataImpWorksheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> GetRelationTargetFn(intrusive_ptr<Aspose::Cells::System::String> type);
	public:

			Aspose::Cells::System::Int32 LocalSheetId;
			intrusive_ptr<Aspose::Cells::System::String> SheetId;
			intrusive_ptr<Aspose::Cells::System::String> RId;
			Aspose::Cells::Worksheet* Worksheet;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RelationsMap;
			intrusive_ptr<Aspose::Cells::System::String> LegacyDrawingRid;
			intrusive_ptr<Aspose::Cells::System::String> LegacyDrawingHFRid;
			intrusive_ptr<Aspose::Cells::System::String> DrawingRid;
			intrusive_ptr<Aspose::Cells::System::String> BgPictureRid;
			intrusive_ptr<Aspose::Cells::System::String> PageSetupRid;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CustProperties;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SliceRels;
			Aspose::Cells::OpenXML::DataImpWhole* ImpData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CompatExtList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Slicers;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ImpObjects;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpObject> GetImpObject(intrusive_ptr<Aspose::Cells::System::String> id , intrusive_ptr<Aspose::Cells::System::String> spid);
			 DataImpWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::System::String> GetCommentsFilePath();
			void AddToKeepRelInfoList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void AddToXlsbKeepRelInfoList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			intrusive_ptr<Aspose::Cells::System::String> GetRelTarget(intrusive_ptr<Aspose::Cells::System::String> rid);
			intrusive_ptr<Aspose::Cells::System::String> GetTableSingleCellsTarget();
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> GetRelInfo(intrusive_ptr<Aspose::Cells::System::String> rid);
			 DataImpWorksheet();
		public:
			virtual ~DataImpWorksheet();
	};

}

}

}
