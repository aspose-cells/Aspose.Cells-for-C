#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_CHARTLINERECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ChartLineRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ChartLineRecord(Aspose::Cells::System::Byte type);
			 ChartLineRecord();
		public:
			virtual ~ChartLineRecord();
	};

}

}

}
