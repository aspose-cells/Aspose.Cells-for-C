#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/UInt16.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_FONTRECORD() 

namespace Aspose {
namespace Cells {
class Font;
class XFExternsionPropertyCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class FontRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 FontRecord();
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> SetFont(intrusive_ptr<Aspose::Cells::Font> font);
		public:
			virtual ~FontRecord();
	};

}

}

}
