#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBCOLINFORECORD() 

namespace Aspose {
namespace Cells {
class Column;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbColInfoRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbColInfoRecord();
			void SetColInfo(intrusive_ptr<Aspose::Cells::Column> column , Aspose::Cells::System::Int32 endIndex , Aspose::Cells::System::Int32 constValue , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
		public:
			virtual ~XlsbColInfoRecord();
	};

}

}

}

}
