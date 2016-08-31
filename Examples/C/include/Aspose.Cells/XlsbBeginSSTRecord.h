#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/UInt32.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINSSTRECORD() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginSSTRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSSTRecord();
			void SetCount(Aspose::Cells::System::UInt32 total , Aspose::Cells::System::Int32 unique);
		public:
			virtual ~XlsbBeginSSTRecord();
	};

}

}

}

}
