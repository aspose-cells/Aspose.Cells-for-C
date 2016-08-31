#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
//#include "System/Int32.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_DEFROWHEIGHTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class DefRowHeightRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 DefRowHeightRecord();
			void SetDefHeight(Aspose::Cells::System::Byte flag , Aspose::Cells::System::UInt16 height);
		public:
			virtual ~DefRowHeightRecord();
	};

}

}

}
