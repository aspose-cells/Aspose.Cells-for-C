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
#define STATIC_CFEXRECORD() 

namespace Aspose {
namespace Cells {
class FormatConditionInfo;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class CFExRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CFExRecord();
			void Set(intrusive_ptr<Aspose::Cells::FormatConditionInfo> info);
			void Set(Aspose::Cells::System::Int32 nId);
		public:
			virtual ~CFExRecord();
	};

}

}

}
