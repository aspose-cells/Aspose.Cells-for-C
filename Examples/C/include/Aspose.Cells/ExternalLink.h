#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Char.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_EXTERNALLINK() 

namespace Aspose {
namespace Cells {
class ExternalLinkCollection;
class SupbookData;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ExternalLink : public Aspose::Cells::System::Object
#else	class ExternalLink : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::SupbookData> supbook;
	public:

			Aspose::Cells::ExternalLinkCollection* m_links;
			 ExternalLink(intrusive_ptr<Aspose::Cells::ExternalLinkCollection> links);
			void SetInternalSupbook(intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			intrusive_ptr<Aspose::Cells::SupbookData> GetSupbook();
			intrusive_ptr<Aspose::Cells::System::String> GetOriginalDataSource();
			void SetOriginalDataSource(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetDataSource();
			void SetDataSource(intrusive_ptr<Aspose::Cells::System::String> value);
			void AddExternalName(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::String> referTo);
			bool IsReferred();
			 ExternalLink();
		public:
			virtual ~ExternalLink();
	};

}

}
