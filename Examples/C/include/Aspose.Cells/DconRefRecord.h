#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_DCONREFRECORD() 

namespace Aspose {
namespace Cells {
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DconRefRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 DconRefRecord();
			void SetDisplayUnitLabel();
			void SetDisplayUnitLabelFont(intrusive_ptr<Aspose::Cells::Font> font);
			void SetDisplayUnit(Aspose::Cells::System::Int32 index , bool isDisplayUnitLabelShown);
		public:
			virtual ~DconRefRecord();
	};

}

}

}
