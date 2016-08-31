#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBUNDLESHRECORD() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBundleShRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBundleShRecord();
			void SetWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo , Aspose::Cells::System::Int32 sheetId);
		public:
			virtual ~XlsbBundleShRecord();
	};

}

}

}

}
