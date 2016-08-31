#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_DEFCOLWIDTHRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class DefColWidthRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 DefColWidthRecord(Aspose::Cells::System::UInt16 defColWidth);
			 DefColWidthRecord();
		public:
			virtual ~DefColWidthRecord();
	};

}

}

}
