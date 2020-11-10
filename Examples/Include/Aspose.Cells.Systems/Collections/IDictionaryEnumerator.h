#ifndef _SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H_
#define _SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Collections/DictionaryEntry.h"

namespace Aspose {
	namespace Cells {
		namespace Systems
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API IDictionaryEnumerator : public IEnumerator
				{
				public:
					virtual ObjectPtr GetKey() = 0;
					virtual ObjectPtr GetValue() = 0;
					virtual DictionaryEntryPtr GetEntry() = 0;
				};
				typedef intrusive_ptr<IDictionaryEnumerator> IDictionaryEnumeratorPtr;
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H_