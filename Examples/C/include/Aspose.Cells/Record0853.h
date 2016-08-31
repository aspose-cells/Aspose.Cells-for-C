#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#define STATIC_RECORD0853() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0853 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0853();
			void Set(Aspose::Cells::System::Int32 kind , Aspose::Cells::System::Int32 context , Aspose::Cells::System::Int32 instance1 , Aspose::Cells::System::Int32 instance2);
			void SetLabel(Aspose::Cells::System::Int32 index);
			void SetDisplayUnit(Aspose::Cells::System::Int32 index);
		public:
			virtual ~Record0853();
	};

}

}

}
