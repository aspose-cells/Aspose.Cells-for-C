#pragma once
#include "System/UInt32.h"
#include "System/Object.h"
#define STATIC_FATENTRYTYPE() 


namespace Aspose {
namespace Ss {
	class FatEntryType : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::UInt32 DifSect;
			 static const Aspose::Cells::System::UInt32 FatSect;
			 static const Aspose::Cells::System::UInt32 EndOfChain;
			 static const Aspose::Cells::System::UInt32 FreeSect;
			 FatEntryType();
		public:
			virtual ~FatEntryType();
	};

}

}
