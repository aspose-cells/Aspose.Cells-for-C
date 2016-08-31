#pragma once
#include "XlsbUtil.h"
#include "FileFormatType.h"
#include "System/String.h"
#include "System/Object.h"
//#include "System/Int32.h"
#include "OpenXMLUtil.h"
//#include "System/StringHelperPal.h"
#include "System/Collections/ArrayList.h"
#define STATIC_IMPCONTENTTYPES() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpContentTypes : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _list;
			bool ProcOverride(intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType);
			void AddToKeepList(bool isDefault , intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType , intrusive_ptr<Aspose::Cells::System::String> extension);
			bool IsKeepContentType(intrusive_ptr<Aspose::Cells::System::String> contentType);
			static void DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
	public:

			 ImpContentTypes(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			static Aspose::Cells::FileFormatType DetectFileFormat(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			bool Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			 ImpContentTypes();
		public:
			virtual ~ImpContentTypes();
	};

}

}

}
