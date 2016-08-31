#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
#include "ErrorType.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_CRNRECORD() 

namespace Aspose {
namespace Cells {
class ExternalRow;
}
}
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
	class CRNRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_continueRecord;
			intrusive_ptr<Aspose::Cells::Record::BIFFRecord> CreateContinueRecord(intrusive_ptr<Aspose::Cells::Record::BIFFRecord> oldRecord , Aspose::Cells::System::Int32& pos);
			Aspose::Cells::System::Int32 byteCount;
			void SetErrorValue(Aspose::Cells::ErrorType type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
	public:

			 CRNRecord();
			Aspose::Cells::System::Int32 GetLength(intrusive_ptr<Aspose::Cells::ExternalRow> row , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cells);
			void Set(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~CRNRecord();
	};

}

}

}
