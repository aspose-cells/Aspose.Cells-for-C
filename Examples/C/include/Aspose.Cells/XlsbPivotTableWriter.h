#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/UInt16.h"
//#include "System/Math.h"
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSBPIVOTTABLEWRITER() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class PivotField;
class SxRule;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbPivotTableWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			Aspose::Cells::System::Int32 _cacheId;
			void WriteItem(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> item);
			void WriteColFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			Aspose::Cells::System::Int32 GetItemCounts(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
	public:

			 XlsbPivotTableWriter(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , Aspose::Cells::System::Int32 cacheId);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void Write();
			void WriteRowFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteRowItems(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteColItems(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteDataFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePageFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteFormats(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteCondFmts(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteTableStyleClient(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteFilters(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteSxViewExt(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteCondFmts14(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePivotArea14(intrusive_ptr<Aspose::Cells::Pivot::SxRule> rule , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePivotArea(intrusive_ptr<Aspose::Cells::Pivot::SxRule> rule , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteBaseFields(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePivotFieldExt(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WriteAutoSortScope(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void WritePivotFieldItems(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			 XlsbPivotTableWriter();
		public:
			virtual ~XlsbPivotTableWriter();
	};

}

}

}
