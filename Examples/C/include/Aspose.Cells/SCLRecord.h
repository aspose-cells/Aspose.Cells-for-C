#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_SCLRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SCLRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SCLRecord(Aspose::Cells::System::Int32 factor);
			 SCLRecord();
		public:
			virtual ~SCLRecord();
	};

}

}

}
