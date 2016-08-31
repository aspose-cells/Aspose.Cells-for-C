#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_DCONNAMERECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class DconNameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 DconNameRecord();
			void SetDataLabel(Aspose::Cells::System::Int32 index);
			void SetDisplayUnit(Aspose::Cells::System::Int32 index);
		public:
			virtual ~DconNameRecord();
	};

}

}

}
