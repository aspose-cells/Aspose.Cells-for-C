#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RECORD0802() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxTag;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class Record0802 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0802();
			void SetSxTag(intrusive_ptr<Aspose::Cells::Pivot::SxTag> tag);
			void SetName(intrusive_ptr<Aspose::Cells::System::String> name , bool isSelected);
		public:
			virtual ~Record0802();
	};

}

}

}

}
