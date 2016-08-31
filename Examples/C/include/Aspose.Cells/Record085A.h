#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_RECORD085A() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record085A : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record085A();
			void SetDisplayUnit(Aspose::Cells::System::Int32 fontIndex1 , Aspose::Cells::System::Int32 fontIndex2);
		public:
			virtual ~Record085A();
	};

}

}

}
