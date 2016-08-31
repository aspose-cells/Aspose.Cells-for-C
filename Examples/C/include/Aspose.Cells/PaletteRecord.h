#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Int16.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
//#include "System/Collections/SortedList.h"
#include "System/Array1D.h"
#define STATIC_PALETTERECORD() 

namespace Aspose {
namespace Cells {
class Palette;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class PaletteRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PaletteRecord();
			void SetData(intrusive_ptr<Aspose::Cells::Palette> palette);
		public:
			virtual ~PaletteRecord();
	};

}

}

}
