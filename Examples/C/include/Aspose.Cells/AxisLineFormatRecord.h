#pragma once
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#include "System/Object.h"
#define STATIC_AXISLINEFORMATRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class AxisLineFormatRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 AxisLineFormatRecord(Aspose::Cells::System::Byte id);
			 AxisLineFormatRecord();
		public:
			virtual ~AxisLineFormatRecord();
	};

}

}

}
