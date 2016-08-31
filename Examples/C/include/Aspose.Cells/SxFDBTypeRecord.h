#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_SXFDBTYPERECORD() 


namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxFDBTypeRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxFDBTypeRecord(Aspose::Cells::System::UInt16 type);
			 SxFDBTypeRecord();
		public:
			virtual ~SxFDBTypeRecord();
	};

}

}

}

}
