#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "XmlnsType.h"
#define STATIC_EXTURIUTIL() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExtUriUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const intrusive_ptr<Aspose::Cells::System::String> PivotCaches14;
			 static const intrusive_ptr<Aspose::Cells::System::String> PivotCaches15;
			 static const intrusive_ptr<Aspose::Cells::System::String> PivotTableReferences15;
			 static const intrusive_ptr<Aspose::Cells::System::String> WorkbookPr14;
			 static const intrusive_ptr<Aspose::Cells::System::String> WorkbookPr15;
			 static const intrusive_ptr<Aspose::Cells::System::String> SlicerCaches14;
			 static const intrusive_ptr<Aspose::Cells::System::String> SlicerCaches15;
			 static const intrusive_ptr<Aspose::Cells::System::String> Slicer14;
			 static const intrusive_ptr<Aspose::Cells::System::String> Slicer15;
			 static const intrusive_ptr<Aspose::Cells::System::String> DataField14;
			 static const intrusive_ptr<Aspose::Cells::System::String> DataField15;
			 static const intrusive_ptr<Aspose::Cells::System::String> CondFmt14;
			 static const intrusive_ptr<Aspose::Cells::System::String> TimelineCachePivotCaches15;
			 static const intrusive_ptr<Aspose::Cells::System::String> TimelineCacheRef15;
			 static const intrusive_ptr<Aspose::Cells::System::String> TimelineRef15;
			 static const intrusive_ptr<Aspose::Cells::System::String> DataModel15;
			static intrusive_ptr<Aspose::Cells::System::String> GetPivotCachesUri(Aspose::Cells::OpenXML::XmlnsType type);
			 ExtUriUtil();
		public:
			virtual ~ExtUriUtil();
	};

}

}

}
