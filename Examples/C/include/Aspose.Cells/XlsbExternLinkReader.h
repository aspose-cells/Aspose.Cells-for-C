#pragma once
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "ErrorType.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_XLSBEXTERNLINKREADER() 

namespace Aspose {
namespace Cells {
class ExternalRow;
class SupbookData;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbReader;
class XlsbBinaryReader;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbExternLinkReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::SupbookData> m_supData;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			Aspose::Cells::System::Int32 id;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relationsMap;
			void ReadExternName();
			void ReadExternTable();
			void ReadExternCellBlank(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			void ReadExternCellReal(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			void ReadExternCellBool(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			void ReadExternCellError(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			void ReadExternCellString(intrusive_ptr<Aspose::Cells::ExternalRow> row);
			void ReadTabs();
			void ReadBSupBook();
	public:

			 XlsbExternLinkReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader , intrusive_ptr<Aspose::Cells::SupbookData> supData);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relationsMap);
			static Aspose::Cells::ErrorType ToErrorType(Aspose::Cells::System::Byte error);
			 XlsbExternLinkReader();
		public:
			virtual ~XlsbExternLinkReader();
	};

}

}

}
