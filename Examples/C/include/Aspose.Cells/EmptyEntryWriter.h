#pragma once
#include "AbstractEntryWriter.h"
#include "System/Object.h"
#define STATIC_EMPTYENTRYWRITER() 

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
	class EmptyEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
	public:

			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 EmptyEntryWriter();
		public:
			virtual ~EmptyEntryWriter();
	};

}

}

}
