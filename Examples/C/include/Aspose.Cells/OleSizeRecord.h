#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#define STATIC_OLESIZERECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class OleSizeRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 OleSizeRecord(intrusive_ptr<Aspose::Cells::CellArea> area);
			 OleSizeRecord();
		public:
			virtual ~OleSizeRecord();
	};

}

}

}
