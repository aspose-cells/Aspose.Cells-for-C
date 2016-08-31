#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_ENCRYPTERINFO() 


namespace Aspose {
namespace Cells {
namespace Encryption {
	class EncrypterInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> AlgorithmName;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> HashValue;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> SaltValue;
			Aspose::Cells::System::Int32 SpintCount;
			Aspose::Cells::System::Int32 GetHashPassword();
			void SetHashPassword(Aspose::Cells::System::Int32 value);
			void Copy(intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> source);
			bool VerifyPassword(intrusive_ptr<Aspose::Cells::System::String> password);
			 EncrypterInfo();
		public:
			virtual ~EncrypterInfo();
	};

}

}

}
