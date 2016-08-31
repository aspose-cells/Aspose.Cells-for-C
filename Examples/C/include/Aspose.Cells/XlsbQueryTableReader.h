#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBQUERYTABLEREADER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class QueryTable;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbBinaryReader;
class XlsbReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbQueryTableReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Object> Parent;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::QueryTable> queryTable;
			void ReadQueryTable();
			void ReadQSIR();
			void ReadQSIF();
			void ReadDeletedName();
	public:

			 XlsbQueryTableReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader , intrusive_ptr<Aspose::Cells::System::Object> parent);
			void Read(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			 XlsbQueryTableReader();
		public:
			virtual ~XlsbQueryTableReader();
	};

}

}

}
