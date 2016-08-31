#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_WINDOW1RECORD() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class Window1Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Window1Record(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void SetSelect(Aspose::Cells::System::UInt16 i);
			void SetHScrollBar(bool showHScrollBar);
			void SetVScrollBar(bool showVScrollBar);
			void SetSheetTab(bool isTabShown , Aspose::Cells::System::Int32 firstVisibleTab);
			 Window1Record();
		public:
			virtual ~Window1Record();
	};

}

}

}
