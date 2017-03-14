#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_H_

#include "System/Security/Cryptography/ICryptoTransform.h"
#include "System/IO/Stream.h"

using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API HashAlgorithm : public ICryptoTransform
					{
					public:
						virtual ~HashAlgorithm();

						intrusive_ptr<BString> ComputeHash(StreamPtr inputStream);
						intrusive_ptr<BString> ComputeHash(intrusive_ptr<BString> buffer);
						intrusive_ptr<BString> ComputeHash(intrusive_ptr<BString> buffer, Int32 offset, Int32 count);

						virtual void Initialize() = 0;

						virtual Int32 GetInputBlockSize() { return 1; }
						virtual Int32 GetOutputBlockSize() { return 1; }
						virtual bool GetCanTransformMultipleBlocks() { return true; }
						virtual bool GetCanReuseTransform() { return true; }

						virtual Int32 TransformBlock(intrusive_ptr<BString> inputBuffer, Int32 inputOffset, Int32 inputCount, intrusive_ptr<BString> outputBuffer, Int32 outputOffset);
						virtual intrusive_ptr<BString> TransformFinalBlock(intrusive_ptr<BString> inputBuffer, Int32 inputOffset, Int32 inputCount);

						virtual Int32 GetHashSize();
						virtual intrusive_ptr<BString> GetHash();

						void Dispose();
						void Clear();

					protected:
						HashAlgorithm();
						virtual void Dispose(bool disposing);

						virtual void HashCore(intrusive_ptr<BString> array, Int32 ibStart, Int32 cbSize) = 0;
						virtual intrusive_ptr<BString> HashFinal() = 0;

						Int32		_hashSizeValue;
						intrusive_ptr<BString>	_hashValue;
						Int32		_state;

					private:
						bool		m_bDisposed;

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_H_