#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_RECORD0854() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0854 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0854();
			void SetDisplayUnit(Aspose::Cells::System::Int32 index);
		public:
			virtual ~Record0854();
	};

}

}

}
