#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/String.h"
#define STATIC_XLSBBRTBEGINPCDSCPITEMRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDSCPItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSCPItemRecord(intrusive_ptr<Aspose::Cells::System::String> name);
			 XlsbBrtBeginPCDSCPItemRecord();
		public:
			virtual ~XlsbBrtBeginPCDSCPItemRecord();
	};

}

}

}

}
