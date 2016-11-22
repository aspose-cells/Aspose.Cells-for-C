#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_ICRYPTOTRANSFORM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_ICRYPTOTRANSFORM_H_

#include "System/IDisposable.h"
#include "System/TypeDefBString.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API ICryptoTransform : public IDisposable
					{
					public:
						virtual Int32 GetInputBlockSize() = 0;
						virtual Int32 GetOutputBlockSize() = 0;
						virtual bool GetCanTransformMultipleBlocks() = 0;
						virtual bool GetCanReuseTransform() = 0;

						virtual Int32 TransformBlock(intrusive_ptr<BString> inputBuffer, Int32 inputOffset, Int32 inputCount, intrusive_ptr<BString> outputBuffer, Int32 outputOffset) = 0;
						virtual intrusive_ptr<BString> TransformFinalBlock(intrusive_ptr<BString> inputBuffer, Int32 inputOffset, Int32 inputCount) = 0;

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_ICRYPTOTRANSFORM_H_