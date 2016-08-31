#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_BRTPCDISTRINGRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIStringRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIStringRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIStringRecord();
		public:
			virtual ~BrtPCDIStringRecord();
	};

}

}

}

}
