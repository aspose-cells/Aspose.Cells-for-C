#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/Int32.h"
#define STATIC_GCWRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class GCWRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 GCWRecord();
			void SetFlag(Aspose::Cells::System::Byte column);
		public:
			virtual ~GCWRecord();
	};

}

}

}
