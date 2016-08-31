#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTCFRULEEXTRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtCFRuleExtRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtCFRuleExtRecord(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> guid);
			 XlsbBrtCFRuleExtRecord();
		public:
			virtual ~XlsbBrtCFRuleExtRecord();
	};

}

}

}

}
