#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COLINFORECORD() 

namespace Aspose {
namespace Cells {
class Column;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ColInfoRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ColInfoRecord();
			void SetColumn(intrusive_ptr<Aspose::Cells::Column> column , Aspose::Cells::System::Int32 charWidth , Aspose::Cells::System::Int32 constValue , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 endCol);
		public:
			virtual ~ColInfoRecord();
	};

}

}

}
