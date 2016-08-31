#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Exception.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_RKRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class RKRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			bool ConvertToRK(Aspose::Cells::System::Double rkValue);
	public:

			 RKRecord();
			bool SetValue(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Int32 intValue);
			bool SetValue(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Double doubleValue);
		public:
			virtual ~RKRecord();
	};

}

}

}
