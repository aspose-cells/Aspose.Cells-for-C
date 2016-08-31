#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_RECORD0800() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class Record0800 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0800();
			void SetScreenTip(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::System::String> screenTip);
		public:
			virtual ~Record0800();
	};

}

}

}
