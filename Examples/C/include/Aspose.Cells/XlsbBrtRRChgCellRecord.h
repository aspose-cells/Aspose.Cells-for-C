#pragma once
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "XlsbRecord.h"
#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTRRCHGCELLRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellChange;
class RevisionCellData;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRChgCellRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> rcc;
			void Init();
			intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbRecord> InitCellData(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> cellData);
			void SetRTCell(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> cellData , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
	public:

			intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbRecord> OldCellData;
			intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbRecord> NewCellData;
			 XlsbBrtRRChgCellRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> rcc , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRChgCellRecord();
		public:
			virtual ~XlsbBrtRRChgCellRecord();
	};

}

}

}

}
