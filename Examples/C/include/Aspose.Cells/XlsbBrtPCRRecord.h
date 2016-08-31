#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTPCRRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtPCRRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbBrtPCRRecord> instance;
			static intrusive_ptr<Aspose::Cells::System::Object> _lock;
			 XlsbBrtPCRRecord();
	public:

			 XlsbBrtPCRRecord(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> columnDatas);
			static intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbBrtPCRRecord> GetInstance();
			intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbRecord> GetXlsbRecord(intrusive_ptr<Aspose::Cells::System::Object> item);
		public:
			virtual ~XlsbBrtPCRRecord();
	};

}

}

}

}
