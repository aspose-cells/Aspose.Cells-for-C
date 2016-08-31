#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_MULBLANKRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class MulBlankRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 MulBlankRecord(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::Int16 firstColumn , Aspose::Cells::System::Int16 lastColumn , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> xfIndexList);
			 MulBlankRecord();
		public:
			virtual ~MulBlankRecord();
	};

}

}

}
