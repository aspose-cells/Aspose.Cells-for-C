#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_SORTCONDRECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
class DataSorterKey;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class SortCondRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SortCondRecord();
			void SetDataSorterKey(intrusive_ptr<Aspose::Cells::DataSorterKey> key , intrusive_ptr<Aspose::Cells::CellArea> ca);
		public:
			virtual ~SortCondRecord();
	};

}

}

}
