#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Text/Encoding.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_HEADERFOOTERRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class HeaderFooterRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 HeaderFooterRecord();
			void SetPageSetup(intrusive_ptr<Aspose::Cells::PageSetup> setup , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> guid);
			void SetString(Aspose::Cells::System::Int32& offset , intrusive_ptr<Aspose::Cells::System::String> str);
			intrusive_ptr<Aspose::Cells::System::String> AppendScripts(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> scripts);
		public:
			virtual ~HeaderFooterRecord();
	};

}

}

}
