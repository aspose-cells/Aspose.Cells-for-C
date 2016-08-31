#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_GUTSRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class GutsRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 GutsRecord();
			void SetAbovePixel(Aspose::Cells::System::UInt16 pixels);
			void SetColumnoutlineLevel(Aspose::Cells::System::Byte level);
			void SetLeftPixel(Aspose::Cells::System::UInt16 pixels);
			void SetRowoutlineLevel(Aspose::Cells::System::Byte level);
		public:
			virtual ~GutsRecord();
	};

}

}

}
