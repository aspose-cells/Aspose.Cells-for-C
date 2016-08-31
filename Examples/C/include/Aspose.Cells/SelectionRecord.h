#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SELECTIONRECORD() 

namespace Aspose {
namespace Cells {
class Selection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class SelectionRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SelectionRecord();
			void SetSelection(intrusive_ptr<Aspose::Cells::Selection> selection);
			void SetActiveCell(Aspose::Cells::System::Byte paneIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
		public:
			virtual ~SelectionRecord();
	};

}

}

}
