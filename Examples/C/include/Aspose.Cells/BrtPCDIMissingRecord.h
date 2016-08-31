#pragma once
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/Int32.h"
#define STATIC_BRTPCDIMISSINGRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIMissingRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIMissingRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIMissingRecord();
		public:
			virtual ~BrtPCDIMissingRecord();
	};

}

}

}

}
