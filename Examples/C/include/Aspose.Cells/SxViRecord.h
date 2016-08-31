#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXVIRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxViRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxViRecord();
			void SetPivotItem(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			void SetItem(Aspose::Cells::System::Int16 type , Aspose::Cells::System::UInt16 sxViOption , Aspose::Cells::System::UInt16 index , intrusive_ptr<Aspose::Cells::System::String> name);
		public:
			virtual ~SxViRecord();
	};

}

}

}

}
