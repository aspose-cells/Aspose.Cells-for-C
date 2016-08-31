#pragma once
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
#include "FilterOperatorType.h"
#include "Constants.h"
//#include "System/Int32.h"
//#include "System/Type.h"
//#include "System/TypeCode.h"
#include "System/Array1D.h"
#define STATIC_XLSBCUSTOMFILTERRECORD() 

namespace Aspose {
namespace Cells {
class AutoFilter;
class CustomFilter;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCustomFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCustomFilterRecord();
			void SetCustomFilter(intrusive_ptr<Aspose::Cells::CustomFilter> customFilter);
			void SetFilter(intrusive_ptr<Aspose::Cells::AutoFilter> filter , Aspose::Cells::FilterOperatorType operatorType , bool isSimple , intrusive_ptr<Aspose::Cells::System::Object> criteria);
		public:
			virtual ~XlsbCustomFilterRecord();
	};

}

}

}

}
