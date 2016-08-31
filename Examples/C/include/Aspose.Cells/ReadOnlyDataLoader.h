#pragma once
#include "System/Object.h"
//#include "System/IO/MemoryStream.h"
//#include "System/String.h"
#define STATIC_READONLYDATALOADER() 

namespace Aspose {
namespace Ss {
class FileSystem;
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class ReadOnlyDataLoader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 ReadOnlyDataLoader();
			void ReadWorkbookData(intrusive_ptr<Aspose::Ss::FileSystem> fs);
		public:
			virtual ~ReadOnlyDataLoader();
	};

}

}

}
