#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "DirectoryType.h"
#include "System/String.h"
#include "ExternalLink.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXTERNALLINKCOLLECTION() 

namespace Aspose {
namespace Cells {
class SupbookCollection;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ExternalLinkCollection : public Aspose::Cells::System::Object
#else	class ExternalLinkCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_List;
			Aspose::Cells::System::Int32 internalIndex;
	public:

			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			 ExternalLinkCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNames);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::DirectoryType directoryType , intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNames);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::ExternalLink> externalLink);
			intrusive_ptr<Aspose::Cells::ExternalLink> GetIndexObject(Aspose::Cells::System::Int32 index);
			void GetExternalLink(intrusive_ptr<Aspose::Cells::SupbookCollection> supbookList);
			 ExternalLinkCollection();
		public:
			virtual ~ExternalLinkCollection();
	};

}

}
