#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_IINDEXEDLIST() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class IIndexedList : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetCount() = 0;
			virtual Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position) = 0;
		public:
	};

}

}

}
