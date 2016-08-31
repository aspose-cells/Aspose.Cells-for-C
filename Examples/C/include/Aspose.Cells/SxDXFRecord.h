#pragma once
#include "System/UInt16.h"
#include "BIFFRecord.h"
//#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_SXDXFRECORD() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxDXFRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void Init();
			void ToBin();
	public:

			intrusive_ptr<Aspose::Cells::Style> style;
			Aspose::Cells::System::UInt32 option1;
			Aspose::Cells::System::UInt16 option2;
			 SxDXFRecord(intrusive_ptr<Aspose::Cells::Style> style);
			 SxDXFRecord();
		public:
			virtual ~SxDXFRecord();
	};

}

}

}

}
