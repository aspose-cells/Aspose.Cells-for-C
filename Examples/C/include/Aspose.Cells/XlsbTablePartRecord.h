#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/String.h"
#define STATIC_XLSBTABLEPARTRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbTablePartRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTablePartRecord(intrusive_ptr<Aspose::Cells::System::String> id);
			 XlsbTablePartRecord();
		public:
			virtual ~XlsbTablePartRecord();
	};

}

}

}

}
