#pragma once
//#include "System/Text/RegularExpressions/Match.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/Math.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_SHAREDSTRINGTABLERECORD() 

namespace Aspose {
namespace Cells {
class RefString;
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
namespace CellsSs {
class IStringPool;
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class OFFSET;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class SharedStringTableRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt32 sum;
			Aspose::Cells::System::Int32 distinctSum;
			Aspose::Cells::System::UInt32 groupSize;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupList;
			Aspose::Cells::System::Int32 dataPointer;
			intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> m_Regex;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> m_StringTable;
	public:

			 SharedStringTableRecord();
			void SetPool(intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringTable);
			Aspose::Cells::System::UInt32 GetTotalStringNumber();
			void SetTotalStringNumber(Aspose::Cells::System::UInt32 value);
			Aspose::Cells::System::UInt32 GetUniqueCount();
			void SetUniqueCount(Aspose::Cells::System::UInt32 value);
			void WriteToStream(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			intrusive_ptr<Aspose::Cells::Record::OFFSET> offset;
			void WriteRefString(intrusive_ptr<Aspose::Cells::RefString> r , bool group , intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~SharedStringTableRecord();
	};

}

}

}
