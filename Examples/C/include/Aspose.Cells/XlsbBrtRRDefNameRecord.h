#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "XlsbRecord.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRDEFNAMERECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionDefinedName;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRDefNameRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> rdn;
			void Init();
			Aspose::Cells::System::Int32 GetStringLength(intrusive_ptr<Aspose::Cells::System::String> str);
	public:

			 XlsbBrtRRDefNameRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> rdn , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRDefNameRecord();
		public:
			virtual ~XlsbBrtRRDefNameRecord();
	};

}

}

}

}
