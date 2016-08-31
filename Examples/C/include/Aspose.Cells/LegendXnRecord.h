#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#define STATIC_LEGENDXNRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class LegendXnRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 LegendXnRecord(bool isDeleted , Aspose::Cells::System::Int32 index);
			 LegendXnRecord();
		public:
			virtual ~LegendXnRecord();
	};

}

}

}
