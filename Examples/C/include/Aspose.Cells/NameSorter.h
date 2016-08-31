#pragma once
//#include "System/Collections/SortedList.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/Boxing.h"
//#include "System/Int32.h"
#define STATIC_NAMESORTER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class NameSorter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 NameSorter();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Sort(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
		public:
			virtual ~NameSorter();
	};

}

}
