#ifndef _SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_H_
#define _SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_H_

#include "System/Object.h"
#include "System/Collections/Hashtable.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Collections;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Collections { 
namespace Specialized { 
	class ASPOSE_CELLS_API CollectionsUtil : public Object {

	public:
		static HashtablePtr CreateCaseInsensitiveHashtable();
	};
}
}
}
}
}
#endif//_SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_H_