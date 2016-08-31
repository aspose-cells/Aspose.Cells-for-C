#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/DayOfWeek.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_XLSBRECORD() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbRecord : public Aspose::Cells::System::Object
	{
	protected:

			Aspose::Cells::System::Int32 identifier;
			 XlsbRecord();
			Aspose::Cells::System::Int32 WriteString(intrusive_ptr<Aspose::Cells::System::String> stringValue , Aspose::Cells::System::Int32 offset0);
			void WriteShortDtr(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , Aspose::Cells::System::Int32 offset);
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
			 XlsbRecord(Aspose::Cells::System::Int32 identifier);
			 XlsbRecord(Aspose::Cells::System::Int32 identifier , Aspose::Cells::System::Int32 count);
			void WriteRecord(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static void WriteHeaderRecord(Aspose::Cells::System::Int32 identifier , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static void WriteBeginCountRecord(Aspose::Cells::System::Int32 identifier , Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int32 byteCounts , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::System::Int32 WriteHeaderId(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> header , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 intValue);
			static void WriteColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::InternalColor> internalColor , Aspose::Cells::System::Int32 defaultIndex , intrusive_ptr<Aspose::Cells::Workbook> workbook);
		public:
			virtual ~XlsbRecord();
	};

}

}

}

}
