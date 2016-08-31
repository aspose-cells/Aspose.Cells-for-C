#pragma once
//#include "System/DateTime.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTUSERRECORD() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionUser;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtUserRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtUserRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionUser> user);
			 XlsbBrtUserRecord();
		public:
			virtual ~XlsbBrtUserRecord();
	};

}

}

}

}
