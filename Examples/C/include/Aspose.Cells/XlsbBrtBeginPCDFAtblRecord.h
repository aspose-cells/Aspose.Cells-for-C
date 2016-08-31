#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Boolean.h"
//#include "System/DateTime.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/String.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINPCDFATBLRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDFAtblRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			bool IsMixedTypesIgnoringBlanks(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			bool IsTextEtcField(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
	public:

			 XlsbBrtBeginPCDFAtblRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			 XlsbBrtBeginPCDFAtblRecord();
		public:
			virtual ~XlsbBrtBeginPCDFAtblRecord();
	};

}

}

}

}
