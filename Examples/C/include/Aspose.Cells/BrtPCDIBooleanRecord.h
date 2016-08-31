#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_BRTPCDIBOOLEANRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIBooleanRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIBooleanRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIBooleanRecord();
		public:
			virtual ~BrtPCDIBooleanRecord();
	};

}

}

}

}
