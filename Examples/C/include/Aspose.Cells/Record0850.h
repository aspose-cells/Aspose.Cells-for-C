#pragma once
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#include "System/Object.h"
#define STATIC_RECORD0850() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0850 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0850();
			void SetDataLabel(Aspose::Cells::System::Byte version);
			void SetDisplayUnit();
		public:
			virtual ~Record0850();
	};

}

}

}
