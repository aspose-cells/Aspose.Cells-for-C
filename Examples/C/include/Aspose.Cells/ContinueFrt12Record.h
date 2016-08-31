#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Char.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_CONTINUEFRT12RECORD() 

namespace Aspose {
namespace Cells {
class FilterColumn;
class DateTimeGroupItem;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ContinueFrt12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 WriteHeader(intrusive_ptr<Aspose::Cells::CellArea> ca);
			Aspose::Cells::System::Int32 WriteHeader();
	public:

			 ContinueFrt12Record();
			void SetFilterCriteria(intrusive_ptr<Aspose::Cells::FilterColumn> filter , intrusive_ptr<Aspose::Cells::System::Object> criteria);
			void SetFilterDateTimeGroup(intrusive_ptr<Aspose::Cells::FilterColumn> filter , intrusive_ptr<Aspose::Cells::DateTimeGroupItem> criteria);
			void SetFilterMatchBlank(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
		public:
			virtual ~ContinueFrt12Record();
	};

}

}

}
