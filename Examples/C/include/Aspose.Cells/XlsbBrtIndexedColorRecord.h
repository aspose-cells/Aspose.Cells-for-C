#pragma once
#include "XlsbRecord.h"
#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_XLSBBRTINDEXEDCOLORRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtIndexedColorRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtIndexedColorRecord(Aspose::Cells::System::Byte a , Aspose::Cells::System::Byte r , Aspose::Cells::System::Byte g , Aspose::Cells::System::Byte b);
			 XlsbBrtIndexedColorRecord();
		public:
			virtual ~XlsbBrtIndexedColorRecord();
	};

}

}

}

}
