#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Text/Encoding.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINSLICEREXRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSlicerExRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSlicerExRecord(intrusive_ptr<Aspose::Cells::System::String> rid);
			 XlsbBrtBeginSlicerExRecord();
		public:
			virtual ~XlsbBrtBeginSlicerExRecord();
	};

}

}

}

}
