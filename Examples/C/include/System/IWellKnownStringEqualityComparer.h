#ifndef _SYSTEM_IWELLKNOWNSTRINGEQUALITYCOMPARER_H_
#define _SYSTEM_IWELLKNOWNSTRINGEQUALITYCOMPARER_H_

#include "System/Object.h"
#include "System/Collections/IEqualityComparer.h"

using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API IWellKnownStringEqualityComparer
			{
				virtual IEqualityComparer* GetRandomizedEqualityComparer() = 0;
				virtual IEqualityComparer* GetEqualityComparerForSerialization() = 0;
			};
		}
	}
}

#endif//_SYSTEM_IWELLKNOWNSTRINGEQUALITYCOMPARER_H_