#pragma once
//#include "System/String.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
//#include "System/IO/MemoryStream.h"
//#include "System/Int32.h"
//#include "System/Collections/SortedList.h"
#define STATIC_REVISIONSHELPER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
	class RevisionsHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Workbook* workbook;
			 RevisionsHelper(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			bool HasRevisions();
			bool GetTrackRevisions();
			void SetTrackRevisions(bool value);
			void AcceptAllRevisions();
			 RevisionsHelper();
		public:
			virtual ~RevisionsHelper();
	};

}

}
