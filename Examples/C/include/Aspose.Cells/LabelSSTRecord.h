#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_LABELSSTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class LabelSSTRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 LabelSSTRecord(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::UInt32 sstIndex);
			 LabelSSTRecord();
		public:
			virtual ~LabelSSTRecord();
	};

}

}

}
