#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/Buffer.h"
#include "System/Int32.h"
#define STATIC_PKCS1() 

namespace Aspose {
namespace Crypto {
class Rsa;
}
}

namespace Aspose {
namespace Crypto {
	class Pkcs1 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> OS2IP(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> x);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> I2OSP(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> x , Aspose::Cells::System::Int32 size);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RSAVP1(intrusive_ptr<Aspose::Crypto::Rsa> rsa , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> s);
			 Pkcs1();
		public:
			virtual ~Pkcs1();
	};

}

}
