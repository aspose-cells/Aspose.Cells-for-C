#pragma once
//#include "System/UInt16.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/TypeCode.h"
//#include "System/BitConverter.h"
#include "Constants.h"
//#include "System/Double.h"
#include "FilterOperatorType.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_AUTOFILTERRECORD() 

namespace Aspose {
namespace Cells {
class FilterColumn;
class FilterColumn2003;
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
class AutoFilter12Record;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class AutoFilterRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void SetFilterColumn(intrusive_ptr<Aspose::Cells::FilterColumn2003> filter);
			void SetCriteria(Aspose::Cells::System::Int32 offset , Aspose::Cells::FilterOperatorType operatorType , intrusive_ptr<Aspose::Cells::System::Object> filterCriteria , Aspose::Cells::System::Int32 errorCode);
	public:

			intrusive_ptr<Aspose::Cells::Record::AutoFilter12Record> record12;
			 AutoFilterRecord();
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void SetFilterColumn(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
		public:
			virtual ~AutoFilterRecord();
	};

}

}

}
