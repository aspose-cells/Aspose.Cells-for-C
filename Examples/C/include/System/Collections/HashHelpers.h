#ifndef _SYSTEM_COLLECTIONS_HASHHELPERS_H_
#define _SYSTEM_COLLECTIONS_HASHHELPERS_H_

#include "System/Object.h"
#include "System/Collections/IEqualityComparer.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class ASPOSE_CELLS_API HashHelpers
				{
				private:
					static const int currentIndex = 1024;
					//static RandomNumberGenerator* rng;
				public:
					static int GetPrime(int min);
					static bool IsPrime(int candidate);
					static int ExpandPrime(int oldSize);
					//static bool IsWellKnownEqualityComparer(ObjectPtr comparer);
					//static IEqualityComparerPtr GetRandomizedEqualityComparer(ObjectPtr comparer);
					static int64_t GetEntropy();



				public:
					static const int primesLen = 72;
					static const int primes[primesLen];


				};

			}//namespace Collections
		}//namespace System
	}
}

#endif //_SYSTEM_COLLECTIONS_HASHHELPERS_H_