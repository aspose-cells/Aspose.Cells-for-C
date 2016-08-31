#pragma once
//#include "System/Int32Helper.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Collections/ArrayList.h"
//#include "System/Collections/ICollection.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_EXPPARTIMPL() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
class ExpWholeImpl;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpPartImpl : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> _xlsbWriter;
			intrusive_ptr<Aspose::Cells::OpenXML::ExpWholeImpl> _expImpl;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _removedEntries;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _removedTypes;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _contentTypes;
			intrusive_ptr<Aspose::Cells::System::String> extension;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _pkRelList;
			void DoPrepare();
			void DoPrepareProps();
			void WriteParts();
			void ReadRels(intrusive_ptr<Aspose::Cells::System::String> fn);
			void ReadContentTypes();
			void AddContentType(bool isDefault , intrusive_ptr<Aspose::Cells::System::String> partName , intrusive_ptr<Aspose::Cells::System::String> contentType , intrusive_ptr<Aspose::Cells::System::String> extension);
			static Aspose::Cells::System::Int32 AddRel(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> rels , Aspose::Cells::System::Int32 startId , intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			void DoCopy();
	public:

			 ExpPartImpl(intrusive_ptr<Aspose::Cells::OpenXML::ExpWholeImpl> expImpl);
			 ExpPartImpl(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter);
			void Write();
			void WriteProps();
			 ExpPartImpl();
		public:
			virtual ~ExpPartImpl();
	};

}

}

}
