#pragma once
//#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/IO/FileStream.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/IO/File.h"
#include "LoadFormat.h"
//#include "System/Int64.h"
//#include "System/Int32.h"
#define STATIC_WORKBOOKMETADATA() 

namespace Aspose {
namespace Cells {
namespace Properties {
class CustomDocumentPropertyCollection;
class BuiltInDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Metadata {
class MetadataOptions;
}
}
}
namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace Metadata {
#ifdef WIN32

	class ASPOSE_CELLS_API WorkbookMetadata : public Aspose::Cells::System::Object
#else	class WorkbookMetadata : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::System::IO::Stream> _Stream;
			intrusive_ptr<Aspose::Cells::Metadata::MetadataOptions> _options;
			Aspose::Cells::LoadFormat _loadFormat;
			void LoadMetaData(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
	public:

			 WorkbookMetadata(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::Metadata::MetadataOptions> options);
			 WorkbookMetadata(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Metadata::MetadataOptions> options);
			intrusive_ptr<Aspose::Cells::Metadata::MetadataOptions> GetOptions();
			intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> GetBuiltInDocumentProperties();
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> GetCustomDocumentProperties();
			void Save(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			 WorkbookMetadata();
		public:
			virtual ~WorkbookMetadata();
	};

}

}

}
