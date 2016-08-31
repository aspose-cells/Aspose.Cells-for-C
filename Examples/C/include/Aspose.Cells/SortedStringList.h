#pragma once
#include "System/Object.h"
//#include "System/Collections/IComparer.h"
#include "System/Collections/SortedList.h"
#define STATIC_SORTEDSTRINGLIST() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class SortedStringList : public Aspose::Cells::System::Collections::SortedList
	{
	private:

			void Init_Vars();
	public:

			 SortedStringList();
			 SortedStringList(bool isCaseSensitive);
		public:
			virtual ~SortedStringList();
	};

}

}

}

}
