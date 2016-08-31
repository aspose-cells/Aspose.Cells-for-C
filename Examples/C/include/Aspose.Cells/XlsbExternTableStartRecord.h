#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBEXTERNTABLESTARTRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbExternTableStartRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbExternTableStartRecord(Aspose::Cells::System::Int32 index , bool isRefreshError);
			 XlsbExternTableStartRecord();
		public:
			virtual ~XlsbExternTableStartRecord();
	};

}

}

}

}
