#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBROWRECORD() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbRowRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbRowRecord();
			void SetDefaultRow(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowHeight , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			void SetRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
		public:
			virtual ~XlsbRowRecord();
	};

}

}

}

}
