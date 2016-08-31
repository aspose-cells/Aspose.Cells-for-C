#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBFMTRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbFmtRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbFmtRecord();
			void SetFormat(Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::System::String> custom);
		public:
			virtual ~XlsbFmtRecord();
	};

}

}

}

}
