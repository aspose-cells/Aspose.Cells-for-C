#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/UInt32.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DBCELLRECORD() 

namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DBCellRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> positionList;
			Aspose::Cells::System::Int64 dbCellStartPosition;
	public:

			Aspose::Cells::System::Int64 GetStartPosition();
			 DBCellRecord();
			void SetPositionList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~DBCellRecord();
	};

}

}

}
