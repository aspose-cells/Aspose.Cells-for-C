#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
//#include "System/StringHelperPal.h"
#define STATIC_BRTPCDIERRORRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtPCDIErrorRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtPCDIErrorRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
			 BrtPCDIErrorRecord();
		public:
			virtual ~BrtPCDIErrorRecord();
	};

}

}

}

}
