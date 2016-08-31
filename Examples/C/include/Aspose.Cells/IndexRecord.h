#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_INDEXRECORD() 

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
	class IndexRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 reserved;
			Aspose::Cells::System::Int32 firstRow;
			Aspose::Cells::System::Int32 lastRow;
			Aspose::Cells::System::Int32 dbCellCount;
	public:

			 IndexRecord();
			Aspose::Cells::System::UInt16 GetFirstRow();
			void SetFirstRow(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::UInt16 GetLastRow();
			void SetLastRow(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::Int32 GetDBCellCount();
			void SetDBCellCount(Aspose::Cells::System::Int32 value);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~IndexRecord();
	};

}

}

}
