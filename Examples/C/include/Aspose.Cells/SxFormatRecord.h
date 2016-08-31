#pragma once
#include "System/Object.h"
#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#define STATIC_SXFORMATRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxFormatRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxFormat> sxFormat;
			 SxFormatRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFormat> sxFormat);
			void Init();
			void SetDxfSize(Aspose::Cells::System::Int16 size);
			 SxFormatRecord();
		public:
			virtual ~SxFormatRecord();
	};

}

}

}

}
