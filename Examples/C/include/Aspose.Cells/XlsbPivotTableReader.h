#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Exception.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Boxing.h"
#define STATIC_XLSBPIVOTTABLEREADER() 

namespace Aspose {
namespace Cells {
class Workbook;
class CustomFilterCollection;
class WorksheetCollection;
class Worksheet;
class MultipleFilterCollection;
class AutoFilter;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRule;
class PivotTable;
class PivotFormatConditionCollection;
class PivotField;
}
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
class DataImpWhole;
class DataImpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbPivotTableReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> GlobalData;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> authorList;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			bool ReadSxView();
			void ReadSxLocation();
			void ReadSxVd();
			void ReadPivotItem(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadRowFields();
			void ReadColFields();
			void ReadPageFields();
			void ReadDataFields();
			void ReadRowItems();
			void ReadItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item , Aspose::Cells::System::Int32 repeat);
			void ReadColumnItems();
			void ReadPivotTableStyleInfo();
			void ReadPivotFilter();
			void ReadSxVd14(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			void ReadSxView14();
			void ReadAfilter(intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadFilterColumn(intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadCustomFilters(intrusive_ptr<Aspose::Cells::CustomFilterCollection> customFilters);
			void ReadFilters(intrusive_ptr<Aspose::Cells::MultipleFilterCollection> multiFilters);
			void ReadPivotFormat();
			void ReadPivotConditionalFormat14(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pfcs);
			void ReadPivotRules14(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			void ReadPivotConditionalFormat(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatConditionCollection> pfcs);
			void ReadPivotRules(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
	public:

			 XlsbPivotTableReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader);
			void Read(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			 XlsbPivotTableReader();
		public:
			virtual ~XlsbPivotTableReader();
	};

}

}

}
