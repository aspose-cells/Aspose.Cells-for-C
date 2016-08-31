#pragma once
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_RSA() 

namespace Aspose {
namespace Crypto {
class BigInteger;
}
}

namespace Aspose {
namespace Crypto {
	class Rsa : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 Rsa(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> modulusBytes , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> exponentBytes);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Encrypt(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> inputBytes);
			intrusive_ptr<Aspose::Crypto::BigInteger> GetModulus();
			intrusive_ptr<Aspose::Crypto::BigInteger> GetExponent();
			intrusive_ptr<Aspose::Crypto::BigInteger> mModulus;
			intrusive_ptr<Aspose::Crypto::BigInteger> mExponent;
			 Rsa();
		public:
			virtual ~Rsa();
	};

}

}
