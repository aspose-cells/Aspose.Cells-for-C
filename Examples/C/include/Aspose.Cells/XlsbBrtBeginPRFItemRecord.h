#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPRFITEMRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPRFItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRFItemRecord(Aspose::Cells::System::Int32 index);
			 XlsbBrtBeginPRFItemRecord();
		public:
			virtual ~XlsbBrtBeginPRFItemRecord();
	};

}

}

}

}
