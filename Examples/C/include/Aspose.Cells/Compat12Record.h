#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_COMPAT12RECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Compat12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Compat12Record(Aspose::Cells::System::UInt16 option , bool checkComptiliblity);
			 Compat12Record();
		public:
			virtual ~Compat12Record();
	};

}

}

}
