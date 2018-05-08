#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IDisposable.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API AsymmetricAlgorithm : public Object, public IDisposable  //to do
					{
					public:
						virtual StringPtr ToXmlString(bool includePrivateParameters) = 0;
					protected:
						virtual void Dispose(bool disposing) = 0;

					public:
						virtual void add_ref() {
							++ref_count_;
						}
						virtual int release_ref() {
							return --ref_count_;
						}

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif