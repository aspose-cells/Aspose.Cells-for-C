#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#define STATIC_RECALCIDRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class ReCalcIdRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ReCalcIdRecord(Aspose::Cells::System::Int32 id);
			 ReCalcIdRecord();
		public:
			virtual ~ReCalcIdRecord();
	};

}

}

}
