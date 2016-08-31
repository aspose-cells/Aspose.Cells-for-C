#pragma once
//#include "System/Byte.h"
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/CharHelper.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Char.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_SUPBOOKRECORD() 

namespace Aspose {
namespace Cells {
class SupbookData;
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
	class SupbookRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_ContinueList;
	public:

			 SupbookRecord();
			void SetSupbookData(intrusive_ptr<Aspose::Cells::SupbookData> supbook , Aspose::Cells::System::Int32 sheetNumber);
			void SetInternal(Aspose::Cells::System::UInt16 sheetNumber);
			void SetAddIn();
			void SetLink(intrusive_ptr<Aspose::Cells::System::String> encodedFileName);
			void SetExternal(intrusive_ptr<Aspose::Cells::System::String> encodedFileName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNamesList);
			void SetAddIn(intrusive_ptr<Aspose::Cells::System::String> addInFileName);
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~SupbookRecord();
	};

}

}

}
