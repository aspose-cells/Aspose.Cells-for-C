#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINISXVISRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginISxVisRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginISxVisRecord(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item);
			 XlsbBeginISxVisRecord();
		public:
			virtual ~XlsbBeginISxVisRecord();
	};

}

}

}

}
