#pragma once
#include "System/Object.h"
#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#define STATIC_BIFFRECORD() 

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
	class BIFFRecord : public Aspose::Cells::System::Object
	{
	protected:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
			 BIFFRecord();
			void WriteRecordHeader(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int16 length;
			Aspose::Cells::System::Int16 identifier;
	public:

			 static const Aspose::Cells::System::Int16 BIFF8DataSize;
			 static const Aspose::Cells::System::Int16 BIFF7DataSize;
			 static const Aspose::Cells::System::Int16 BIFF7RowLine;
			Aspose::Cells::System::Int16 GetLength();
			void SetLength(Aspose::Cells::System::Int16 value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			Aspose::Cells::System::Int16 GetIdentifier();
			void SetIdentifier(Aspose::Cells::System::Int16 value);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			void SetData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer);
			void Copy(intrusive_ptr<Aspose::Cells::Record::BIFFRecord> source);
		public:
			virtual ~BIFFRecord();
	};

}

}

}
