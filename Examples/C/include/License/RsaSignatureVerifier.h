#pragma once
#include "System/Byte.h"
//#include "System/IO/Stream.h"
#include "System/Object.h"
//#include "System/Array.h"
//#include "System/String.h"
//#include "System/Int64.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RSASIGNATUREVERIFIER() 


namespace Aspose {
namespace License {
namespace Hackers {
	class RsaSignatureVerifier : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void VerifyV15(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> keyModulus , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> keyExponent , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> message , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> signature);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mModulus;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mExponent;
	public:

			 RsaSignatureVerifier(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> modulus , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> exponent);
			void VerifySignature(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> message , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> signature);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> EncodeV15(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> message , Aspose::Cells::System::Int32 emLength);
			 RsaSignatureVerifier();
		public:
			virtual ~RsaSignatureVerifier();
	};

}

}

}
