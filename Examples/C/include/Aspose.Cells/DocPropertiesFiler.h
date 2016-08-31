#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Exception.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/IO/MemoryStream.h"
//#include "System/Double.h"
//#include "System/Int32Helper.h"
//#include "System/TimeSpan.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/SortedList.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/DateTime.h"
//#include "System/Int32.h"
#include "PropertyGroup.h"
#define STATIC_DOCPROPERTIESFILER() 

namespace Aspose {
namespace Cells {
namespace Properties {
class DocumentPropertyCollection;
class BuiltInDocumentPropertyCollection;
class CustomDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Ss {
class MemoryStorage;
class PropertyCollection;
class PropertySetSection;
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class DocPropertiesFiler : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ReadSummaryInfo(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			void ReadDocSummaryInfo(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static void AddProperties(intrusive_ptr<Aspose::Ss::PropertyCollection> srcProps , intrusive_ptr<Aspose::Cells::Properties::DocumentPropertyCollection> dstProps , Aspose::Cells::Properties::PropertyGroup propGroup);
			void WriteProperties(intrusive_ptr<Aspose::Cells::Properties::DocumentPropertyCollection> srcProps);
			Aspose::Cells::Properties::BuiltInDocumentPropertyCollection* mBuiltInProperties;
			Aspose::Cells::Properties::CustomDocumentPropertyCollection* mCustomProperties;
			intrusive_ptr<Aspose::Ss::PropertySetSection> mSummaryInfoSection;
			intrusive_ptr<Aspose::Ss::PropertySetSection> mDocSummaryInfoSection;
			intrusive_ptr<Aspose::Ss::PropertySetSection> mUserDefinedSection;
			static intrusive_ptr<Aspose::Cells::System::DateTime> Win32EpochStart;
	public:

			void Read(intrusive_ptr<Aspose::Ss::MemoryStorage> storage , intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> builtInProperties , intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> customProperties);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToBlob(intrusive_ptr<Aspose::Cells::System::String> text);
			void Write(intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> builtInProperties , intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> customProperties , intrusive_ptr<Aspose::Ss::MemoryStorage> storage);
			 DocPropertiesFiler();
		public:
			virtual ~DocPropertiesFiler();
	};

}

}

}
