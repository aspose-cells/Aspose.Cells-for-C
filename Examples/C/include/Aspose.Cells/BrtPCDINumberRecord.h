#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_BRTPCDINUMBERRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDINumberRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDINumberRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDINumberRecord();
		public:
			virtual ~BrtPCDINumberRecord();
	};

}

}

}

}
