#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_RELHASHMAP() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataRelationship;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class RelHashMap : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 Id;
	public:

			static intrusive_ptr<Aspose::Cells::OpenXML::RelHashMap> CreateOneRel(intrusive_ptr<Aspose::Cells::System::String> relType , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Map;
			 RelHashMap();
			Aspose::Cells::System::Int32 GetCount();
			void AddKept(intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> s);
			void AddKept(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void AddKept(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> list);
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> Add(intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> Add(intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target);
		public:
			virtual ~RelHashMap();
	};

}

}

}
