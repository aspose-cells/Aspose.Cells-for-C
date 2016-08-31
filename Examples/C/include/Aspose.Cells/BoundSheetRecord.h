#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_BOUNDSHEETRECORD() 

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
	class BoundSheetRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 sheetPosition;
			Aspose::Cells::System::Int16 sheetFlag;
	public:

			 BoundSheetRecord(Aspose::Cells::System::Int16 flag , intrusive_ptr<Aspose::Cells::System::String> sheetName);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			 BoundSheetRecord();
		public:
			virtual ~BoundSheetRecord();
	};

}

}

}
