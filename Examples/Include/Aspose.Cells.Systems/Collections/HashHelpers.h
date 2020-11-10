#ifndef _SYSTEM_COLLECTIONS_HASHHELPERS_H_
#define _SYSTEM_COLLECTIONS_HASHHELPERS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEqualityComparer.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {
				class ASPOSE_CELLS_API HashHelpers
				{
				private:
					static const int currentIndex = 1024;
				public:
					static int GetPrime(int min);
					static bool IsPrime(int candidate);
					static int ExpandPrime(int oldSize);
					static int64_t GetEntropy();

					static const int primesLen = 72;
					static const int primes[primesLen];

				};

			}//namespace Collections
		}//namespace Systems
	}
}

#endif //_SYSTEM_COLLECTIONS_HASHHELPERS_H_