#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Security/Cryptography/MD5.h"
#include "System/Byte.h"
//#include "System/Security/Cryptography/HashAlgorithm.h"
#include "System/Int32.h"
//#include "System/Security/Cryptography/MD5CryptoServiceProvider.h"
#define STATIC_PALMD5() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalMD5 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Security::Cryptography::MD5> mMd5;
	public:

			 PalMD5();
			void Initialize();
			void TransformBlock(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> encryptionKey , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 length , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bytes , Aspose::Cells::System::Int32 i1);
			void TransformFinalBlock(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> objectId , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 length);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetHash();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ComputeHash(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ownerPad);
		public:
			virtual ~PalMD5();
	};

}

}

}

}
