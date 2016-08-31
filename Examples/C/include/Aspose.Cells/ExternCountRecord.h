#pragma once
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_EXTERNCOUNTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ExternCountRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ExternCountRecord();
			void SetCount(Aspose::Cells::System::UInt16 count);
		public:
			virtual ~ExternCountRecord();
	};

}

}

}
