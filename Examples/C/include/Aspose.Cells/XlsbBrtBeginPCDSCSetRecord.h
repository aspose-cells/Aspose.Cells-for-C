#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPCDSCSETRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class DataExpDcon;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDSCSetRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSCSetRecord(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> sxTbg , intrusive_ptr<Aspose::Cells::Pivot::DataExpDcon> dcon);
			 XlsbBrtBeginPCDSCSetRecord();
		public:
			virtual ~XlsbBrtBeginPCDSCSetRecord();
	};

}

}

}

}
