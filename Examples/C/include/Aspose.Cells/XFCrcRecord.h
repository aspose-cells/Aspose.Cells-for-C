#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/UInt32.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_XFCRCRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class XFCrcRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 XFCrcRecord();
			void SetCrc(Aspose::Cells::System::Int32 xfCount , Aspose::Cells::System::UInt32 crc);
		public:
			virtual ~XFCrcRecord();
	};

}

}

}
