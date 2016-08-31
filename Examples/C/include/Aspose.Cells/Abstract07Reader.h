#pragma once
#include "System/IDisposable.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Collections/ICollection.h"
//#include "System/IO/Stream.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
//#include "System/Collections/SortedList.h"
#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_ABSTRACT07READER() 

namespace Aspose {
namespace Cells {
class LoadOptions;
class Workbook;
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
	class Abstract07Reader : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			 virtual void Dispose();
			 Abstract07Reader(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			void ReadVbAProject();
			void ReadCustomXml();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadEntryData(intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile , intrusive_ptr<Aspose::Cells::System::String> fnImage);
			 Abstract07Reader();
		public:
			virtual ~Abstract07Reader();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
