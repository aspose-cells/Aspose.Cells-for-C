#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SXITMRECORD() 


namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxItmRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxItmRecord(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> itemIndexes);
			 SxItmRecord();
		public:
			virtual ~SxItmRecord();
	};

}

}

}

}
