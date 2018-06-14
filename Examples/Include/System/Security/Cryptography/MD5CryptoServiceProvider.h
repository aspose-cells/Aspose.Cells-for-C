#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_H_

#include "System/Security/Cryptography/MD5.h"

/*
* This is the header file for the MD5 message-digest algorithm->
* The algorithm is due to Ron Rivest->  This code was
* written by Colin Plumb in 1993, no copyright is claimed->
* This code is in the public domain; do with it what you wish->
*
* Equivalent code is available from RSA Data Security, Inc->
* This code has been tested against that, and is equivalent,
* except that you don't need to include two pages of legalese
* with every copy->
* To compute the message digest of a chunk of bytes, declare an
* MD5Context structure, pass it to MD5Init, call MD5Update as
* needed on buffers full of bytes, and then call MD5Final, which
* will fill a supplied 16-byte array with the digest->
*
*/

using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					// Canonical name for a MD5 context structure, used in many crypto libs.
					typedef struct MD5Context MD5_CTX;

					struct MD5Context {
						uint32_t buf[4];
						uint32_t bits[2];
						uint32_t in[16];
					};

					void MD5Init(MD5Context* context);
					void MD5Update(MD5Context* context, const uint8_t* data, size_t len);
					void MD5Final(MD5Context* context, uint8_t digest[16]);
					void MD5Transform(uint32_t buf[4], const uint32_t in[16]);

					class ASPOSE_CELLS_API MD5CryptoServiceProvider : public MD5//, public Object
					{
					public:
						MD5CryptoServiceProvider();
						virtual ~MD5CryptoServiceProvider();
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

						virtual void Initialize();
						virtual void HashCore(intrusive_ptr<BString> array, Int32 ibStart, Int32 cbSize);
						virtual intrusive_ptr<BString> HashFinal();

					protected:
						virtual void Dispose(bool disposing);

					private:
						MD5Context	_context;
						uint8_t		_digest[16];

					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_H_
