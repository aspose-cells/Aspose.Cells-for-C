#pragma once
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
//#include "System/Boxing.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAEXPFONTS() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpFonts : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FontList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> FontIdxMap;
			 DataExpFonts();
			static intrusive_ptr<Aspose::Cells::OpenXML::DataExpFonts> GetDataExpFonts(intrusive_ptr<Aspose::Cells::Workbook> wbook);
		public:
			virtual ~DataExpFonts();
	};

}

}

}
