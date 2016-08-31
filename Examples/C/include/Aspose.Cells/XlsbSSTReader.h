#pragma once
#include "System/Byte.h"
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/IO/Stream.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Object.h"
#include "System/IO/BinaryReader.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBSSTREADER() 

namespace Aspose {
namespace Cells {
class Workbook;
class RefString;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbSSTReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
	public:

			 XlsbSSTReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader);
			void Read(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static intrusive_ptr<Aspose::Cells::RefString> ReadRefString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			 XlsbSSTReader();
		public:
			virtual ~XlsbSSTReader();
	};

}

}

}
