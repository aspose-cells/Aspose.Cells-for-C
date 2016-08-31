#pragma once
#include "System/Object.h"
#include "XmlMap.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XMLMAPCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API XmlMapCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class XmlMapCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::WorksheetCollection* Sheets;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _keepSchemaList;
			intrusive_ptr<Aspose::Cells::System::String> _selectionNS;
			intrusive_ptr<Aspose::Cells::System::String> _xmlns;
			 XmlMapCollection();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::XmlMap> map);
			intrusive_ptr<Aspose::Cells::XmlMap> GetIndexObject(Aspose::Cells::System::Int32 index);
		public:
			virtual ~XmlMapCollection();
	};

}

}
