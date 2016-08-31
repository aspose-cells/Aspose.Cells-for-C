#pragma once
//#include "System/UInt16.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FEATURE11RECORD() 

namespace Aspose {
namespace Cells {
class XFExternsionPropertyCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListColumn;
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class DxfnRecord;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class Feature11Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 dataLength;
			Aspose::Cells::System::Int32 SetName(intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 offset);
	public:

			 Feature11Record();
			Aspose::Cells::System::Int32 GetLength(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			Aspose::Cells::System::Int32 GetNameLength(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> FilterColumnData;
			void SetListObject(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			static Aspose::Cells::System::Int32 SizeDxfn12List(intrusive_ptr<Aspose::Cells::Record::DxfnRecord> dxfn , intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> xfEx);
			Aspose::Cells::System::Int32 GetColumnLength(intrusive_ptr<Aspose::Cells::Tables::ListColumn> listColumn , Aspose::Cells::System::Int32 index);
			static Aspose::Cells::System::Int32 WriteDxfn12List(intrusive_ptr<Aspose::Cells::Record::DxfnRecord> dxfn , intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> xfEx , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 SetListColumn(intrusive_ptr<Aspose::Cells::Tables::ListColumn> listColumn , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 offset);
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~Feature11Record();
	};

}

}

}
