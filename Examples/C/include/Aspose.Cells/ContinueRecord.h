#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_CONTINUERECORD() 

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
	class ContinueRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ContinueRecord();
			void SetData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 length);
			void SetText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void SetCommentRuns(Aspose::Cells::System::UInt16 fontIndex , Aspose::Cells::System::UInt16 length);
			void SetCommentRuns(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> charsList);
		public:
			virtual ~ContinueRecord();
	};

}

}

}
