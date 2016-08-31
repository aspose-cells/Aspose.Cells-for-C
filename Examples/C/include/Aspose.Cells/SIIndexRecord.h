#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_SIINDEXRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SIIndexRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SIIndexRecord(Aspose::Cells::System::Byte id);
			 SIIndexRecord();
		public:
			virtual ~SIIndexRecord();
	};

}

}

}
