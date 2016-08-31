#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SXIVDRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFieldCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxiVdRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxiVdRecord();
			void SetFields(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> pivotFields);
		public:
			virtual ~SxiVdRecord();
	};

}

}

}

}
