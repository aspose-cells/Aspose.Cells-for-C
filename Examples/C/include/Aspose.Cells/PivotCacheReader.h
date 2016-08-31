#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Text/StringBuilder.h"
//#include "System/IO/Path.h"
#include "System/UInt16.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
#include "System/IO/MemoryStream.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/DateTime.h"
//#include "System/Collections/SortedList.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PIVOTCACHEREADER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFDB;
class PivotCache;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class XlsWorkbookReader;
class DataInStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCacheReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 id;
			Aspose::Cells::System::UInt16 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> tempData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> m_Cache;
			intrusive_ptr<Aspose::Cells::RW::DataInStream> stream;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			intrusive_ptr<Aspose::Cells::RW::XlsWorkbookReader> workbookReader;
			void ReadWholeRecord();
			intrusive_ptr<Aspose::Cells::System::String> ReadRefWorksheet(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> record , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::System::String> ReadString(Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 length);
			void ReadCache(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void ReadFormulas(Aspose::Cells::System::Int32 count);
			void ReadGroupData(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			void ReadPivotRecords();
			void ReadRecordData();
			intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTime(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			bool IsLeapYear(Aspose::Cells::System::Int32 year);
			intrusive_ptr<Aspose::Cells::System::DateTime> CreateDateTime(Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 dom , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 min , Aspose::Cells::System::Int32 second);
	public:

			 PivotCacheReader();
			void KeepCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::RW::XlsWorkbookReader> workbookReader);
			void Read(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::RW::XlsWorkbookReader> workbookReader);
			intrusive_ptr<Aspose::Cells::System::String> GetUncodedFullURL(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::String> encodedURL);
			Aspose::Cells::System::Int32 _numberOfRow;
			Aspose::Cells::System::Int32 _numberOfBaseFields;
			Aspose::Cells::System::Int32 _numberOfFields;
			void ReadSxFDB();
		public:
			virtual ~PivotCacheReader();
	};

}

}

}
