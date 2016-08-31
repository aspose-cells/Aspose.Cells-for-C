#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/Drawing/Color.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt32.h"
//#include "System/Collections/SortedList.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/IO/MemoryStream.h"
//#include "System/StringHelperPal.h"
#define STATIC_PIVOTTABLEREADER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Worksheet;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class PivotTable;
class PivotField;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataInStream;
class XlsWorkbookReader;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotTableReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::RW::XlsWorkbookReader> workbookReader;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> tempData;
			intrusive_ptr<Aspose::Cells::RW::DataInStream> stream;
			Aspose::Cells::System::UInt16 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::UInt16 length;
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> dataField;
			Aspose::Cells::System::Int32 numberOfRows;
			Aspose::Cells::System::Int32 numberOfColumns;
			Aspose::Cells::System::Int32 numberOfRowFields;
			Aspose::Cells::System::Int32 numberOfColumnFields;
			Aspose::Cells::System::Int32 numberOfPageFields;
			Aspose::Cells::System::Int32 numberOfDataFields;
			void ReadSxFormat();
			void ReadDXFN(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos , intrusive_ptr<Aspose::Cells::Style> dxf);
			void ReadRecord0864();
			void ReadSxTag();
			void ReadSxViewEx9();
			void ReadSxLi(bool isFirst);
			void ReadKeepedPivotTable();
			bool ReadSxView();
			void RemoveCacheIdStorage(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			intrusive_ptr<Aspose::Cells::System::String> ReadString(Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::String> ReadUniCodeString(Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 count);
			void ReadSxEx();
			void ReadSxiVd(bool isFirst);
			void ReadSxPi();
			void ReadSxDi();
			void ReadPivotField();
			intrusive_ptr<Aspose::Cells::System::String> GetNumberFormat(Aspose::Cells::System::Int32 index);
			void ReadRecordData();
			void ReadWholeRecord();
	public:

			 PivotTableReader();
			void Read(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::RW::XlsWorkbookReader> reader , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
		public:
			virtual ~PivotTableReader();
	};

}

}

}
