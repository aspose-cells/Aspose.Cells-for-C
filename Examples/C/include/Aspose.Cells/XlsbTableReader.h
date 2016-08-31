#pragma once
//#include "System/Exception.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSBTABLEREADER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class MultipleFilterCollection;
class AutoFilter;
class CustomFilterCollection;
class Cells;
class Workbook;
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
namespace Tables {
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWorksheet;
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbTableReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> GlobalData;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::Tables::ListObject> table;
			void ReadTable();
			void ReadTableColumns();
			void ReadTableColumn(Aspose::Cells::System::Int32 index);
			void ReadTableStyleClient();
			void ReadAfilter();
			void ReadFilterColumn(intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadCustomFilters(intrusive_ptr<Aspose::Cells::CustomFilterCollection> customFilters);
			void ReadFilters(intrusive_ptr<Aspose::Cells::MultipleFilterCollection> multiFilters);
	public:

			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetTable();
			void SetTable(intrusive_ptr<Aspose::Cells::Tables::ListObject> value);
			 XlsbTableReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader);
			void Read(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			 XlsbTableReader();
		public:
			virtual ~XlsbTableReader();
	};

}

}

}
