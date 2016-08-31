#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/DateTime.h"
#include "System/Array1D.h"
#define STATIC_XLSBPIVOTCACHERECORDSREADER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbReader;
class XlsbBinaryReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbPivotCacheRecordsReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> GlobalData;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			Aspose::Cells::System::Int32 numberOfBaseFields;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			void ReadPivotCacheRecords();
	public:

			 XlsbPivotCacheRecordsReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> data , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotcache);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader , Aspose::Cells::System::Int32 recordCount);
			 XlsbPivotCacheRecordsReader();
		public:
			virtual ~XlsbPivotCacheRecordsReader();
	};

}

}

}
