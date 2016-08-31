#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_CHARTFORMATRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ChartFormatRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ChartFormatRecord();
			void SetOption();
			void SetIndex(Aspose::Cells::System::Int32 index);
		public:
			virtual ~ChartFormatRecord();
	};

}

}

}
