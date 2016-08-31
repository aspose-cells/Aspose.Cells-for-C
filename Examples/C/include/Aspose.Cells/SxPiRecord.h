#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SXPIRECORD() 

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
	class SxPiRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxPiRecord();
			void SetFields(intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields);
		public:
			virtual ~SxPiRecord();
	};

}

}

}

}
