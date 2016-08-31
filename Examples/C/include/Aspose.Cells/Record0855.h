#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_RECORD0855() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0855 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0855();
			void SetDisplayUnit(Aspose::Cells::System::Int32 index);
		public:
			virtual ~Record0855();
	};

}

}

}
