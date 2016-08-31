#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#define STATIC_RECORD0852() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0852 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0852();
			void Set(Aspose::Cells::System::Int32 kind , Aspose::Cells::System::Int32 context , Aspose::Cells::System::Int32 instance1 , Aspose::Cells::System::Int32 instance2);
			void SetTextProps();
			void SetDataLabel(Aspose::Cells::System::Int32 index);
			void SetDisplayUnit(Aspose::Cells::System::Int32 index);
		public:
			virtual ~Record0852();
	};

}

}

}
