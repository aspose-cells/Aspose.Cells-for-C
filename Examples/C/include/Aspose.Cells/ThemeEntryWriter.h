#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "AbstractEntryWriter.h"
#define STATIC_THEMEENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ThemeEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expData;
			 ThemeEntryWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			 ThemeEntryWriter();
		public:
			virtual ~ThemeEntryWriter();
	};

}

}

}
