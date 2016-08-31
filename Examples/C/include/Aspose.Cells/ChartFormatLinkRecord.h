#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/UInt16.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_CHARTFORMATLINKRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ChartFormatLinkRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ChartFormatLinkRecord();
			void SetDisplayUnit();
			void SetIndex(Aspose::Cells::System::Int32 index);
		public:
			virtual ~ChartFormatLinkRecord();
	};

}

}

}
