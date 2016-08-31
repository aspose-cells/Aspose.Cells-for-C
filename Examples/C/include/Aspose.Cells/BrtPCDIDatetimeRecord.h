#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
#define STATIC_BRTPCDIDATETIMERECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIDatetimeRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIDatetimeRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIDatetimeRecord();
		public:
			virtual ~BrtPCDIDatetimeRecord();
	};

}

}

}

}
