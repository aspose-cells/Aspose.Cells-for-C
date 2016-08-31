#pragma once
//#include "System/Int32Helper.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "DocumentPropertyCollection.h"
//#include "System/Boxing.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_CUSTOMDOCUMENTPROPERTYCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Properties {
class DocumentProperty;
}
}
}

namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomDocumentPropertyCollection : public Aspose::Cells::Properties::DocumentPropertyCollection
#else	class CustomDocumentPropertyCollection : public Aspose::Cells::Properties::DocumentPropertyCollection
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 GetNextPropId();
			 static const Aspose::Cells::System::Int32 MaxReservedPropertyId;
	public:

			Aspose::Cells::WorksheetCollection* sheets;
			 CustomDocumentPropertyCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::DateTime> value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , bool value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> AddLinkToContent(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> source);
			void UpdateLinkedPropertyValue();
			void UpdateLinkedRange();
			 CustomDocumentPropertyCollection();
		public:
			virtual ~CustomDocumentPropertyCollection();
	};

}

}

}
