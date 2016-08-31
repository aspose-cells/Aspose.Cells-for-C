#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_MERGECELLSRECORD() 

namespace Aspose {
namespace Cells {
class MergedCellsCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class MergeCellsRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 MergeCellsRecord(intrusive_ptr<Aspose::Cells::MergedCellsCollection> areaList);
			 MergeCellsRecord(intrusive_ptr<Aspose::Cells::MergedCellsCollection> areaList , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex);
			 MergeCellsRecord();
		public:
			virtual ~MergeCellsRecord();
	};

}

}

}
