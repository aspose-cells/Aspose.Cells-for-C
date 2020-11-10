#ifndef _SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_H_
#define _SYSTEM_COLLECTIONS_SPECIALIZED_COLLECTIONSUTIL_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;

namespace Aspose { 
namespace Cells { 
namespace Systems {
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