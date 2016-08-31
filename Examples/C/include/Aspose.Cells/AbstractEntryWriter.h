#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/String.h"
#define STATIC_ABSTRACTENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class AbstractEntryWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 virtual bool IsRel();
			intrusive_ptr<Aspose::Cells::System::String> EntryName;
			intrusive_ptr<Aspose::Cells::System::String> GetContentPartName();
			intrusive_ptr<Aspose::Cells::System::String> GetFileName();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 AbstractEntryWriter();
		public:
			virtual ~AbstractEntryWriter();
	};

}

}

}
