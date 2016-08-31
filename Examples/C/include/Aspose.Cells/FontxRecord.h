#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_FONTXRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class FontxRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 FontxRecord(Aspose::Cells::System::Int32 fontIndex);
			 FontxRecord();
		public:
			virtual ~FontxRecord();
	};

}

}

}
