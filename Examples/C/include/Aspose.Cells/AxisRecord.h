#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_AXISRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class AxisRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 AxisRecord(Aspose::Cells::System::Byte id);
			 AxisRecord();
		public:
			virtual ~AxisRecord();
	};

}

}

}
