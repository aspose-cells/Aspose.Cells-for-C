#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Collections/SortedList.h"
#include "System/Array1D.h"
#define STATIC_VPAGEBREAKRECORD() 

namespace Aspose {
namespace Cells {
class VerticalPageBreakCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class VPageBreakRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 VPageBreakRecord();
			void AddVPageBreaks(intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vPageBreaks);
		public:
			virtual ~VPageBreakRecord();
	};

}

}

}
