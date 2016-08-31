#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "PrintSizeType.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_PRINTSIZERECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class PrintSizeRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PrintSizeRecord(Aspose::Cells::PrintSizeType printSize);
			 PrintSizeRecord();
		public:
			virtual ~PrintSizeRecord();
	};

}

}

}
