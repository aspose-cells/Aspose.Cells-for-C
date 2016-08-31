#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINFILTERSRECORD() 

namespace Aspose {
namespace Cells {
class MultipleFilterCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginFiltersRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginFiltersRecord(intrusive_ptr<Aspose::Cells::MultipleFilterCollection> multiFilters);
			static Aspose::Cells::System::Int32 GetFilterCalendarType(intrusive_ptr<Aspose::Cells::System::String> type);
			 XlsbBeginFiltersRecord();
		public:
			virtual ~XlsbBeginFiltersRecord();
	};

}

}

}

}
