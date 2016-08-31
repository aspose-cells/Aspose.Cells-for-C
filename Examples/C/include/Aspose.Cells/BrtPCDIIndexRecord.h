#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_BRTPCDIINDEXRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIIndexRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIIndexRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIIndexRecord();
		public:
			virtual ~BrtPCDIIndexRecord();
	};

}

}

}

}
