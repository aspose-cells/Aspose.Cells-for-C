#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#define STATIC_SHEETEXTRECORD() 

namespace Aspose {
namespace Cells {
class InternalColor;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class SheetExtRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SheetExtRecord(Aspose::Cells::System::Int32 colorIndex , intrusive_ptr<Aspose::Cells::InternalColor> c);
			 SheetExtRecord(Aspose::Cells::System::Int32 analogousIndex , Aspose::Cells::System::Int32 analogousColor , intrusive_ptr<Aspose::Cells::InternalColor> c);
			 SheetExtRecord();
		public:
			virtual ~SheetExtRecord();
	};

}

}

}
