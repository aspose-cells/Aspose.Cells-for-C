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
#define STATIC_XLSBBRTBEGINSLICERCACHEIDRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSlicerCacheIDRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSlicerCacheIDRecord(intrusive_ptr<Aspose::Cells::System::String> rid);
			 XlsbBrtBeginSlicerCacheIDRecord();
		public:
			virtual ~XlsbBrtBeginSlicerCacheIDRecord();
	};

}

}

}

}
