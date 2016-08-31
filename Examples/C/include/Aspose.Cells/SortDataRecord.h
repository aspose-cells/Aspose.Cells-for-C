#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SORTDATARECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
class DataSorter;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class SortDataRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SortDataRecord();
			void SetSorter(intrusive_ptr<Aspose::Cells::DataSorter> sorter , intrusive_ptr<Aspose::Cells::CellArea> ca);
		public:
			virtual ~SortDataRecord();
	};

}

}

}
