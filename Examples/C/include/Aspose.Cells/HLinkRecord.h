#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Object.h"
//#include "System/Char.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Array1D.h"
#define STATIC_HLINKRECORD() 

namespace Aspose {
namespace Cells {
class Hyperlink;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class HLinkRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellArea> area;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> unknownBytes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> urlUnknown;
			void SetAbsoluteFile(intrusive_ptr<Aspose::Cells::Hyperlink> hlink);
			void SetUNCFile(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::System::String> stringShow , intrusive_ptr<Aspose::Cells::System::String> address);
			void SetLocalFile(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::System::String> stringShow , intrusive_ptr<Aspose::Cells::System::String> stringLink);
			void SetURLORFile(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::System::String> stringShow , intrusive_ptr<Aspose::Cells::System::String> stringLink , intrusive_ptr<Aspose::Cells::Hyperlink> hlink);
	public:

			 HLinkRecord(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::System::String> stringShow , intrusive_ptr<Aspose::Cells::System::String> stringLink , intrusive_ptr<Aspose::Cells::Hyperlink> hlink);
			 HLinkRecord();
		public:
			virtual ~HLinkRecord();
	};

}

}

}
