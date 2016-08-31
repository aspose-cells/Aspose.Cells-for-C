#pragma once
#include "System/Int32.h"
#include "System/UInt32.h"
//#include "System/Int64.h"
#include "System/UInt64.h"
#include "System/Object.h"
#define STATIC_ENCRYCONSTS() 


namespace Aspose {
namespace Cells {
namespace Encryption {
	class EncryConsts : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::UInt64 STREAM_SEEK_TO_END;
			 static const Aspose::Cells::System::UInt32 RTL_DIGEST_LENGTH_MD5;
			 static const Aspose::Cells::System::UInt32 CIPHER_CBLOCK_ARCFOUR;
			 static const Aspose::Cells::System::Int32 SAL_MAX_ENUM;
			 static const Aspose::Cells::System::UInt32 DIGEST_LBLOCK_MD5;
			 static const Aspose::Cells::System::UInt32 DIGEST_CBLOCK_MD5;
			 EncryConsts();
		public:
			virtual ~EncryConsts();
	};

}

}

}
