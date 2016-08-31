#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_SERFMTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SerfmtRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SerfmtRecord(bool smooth , bool shadow , bool bubble3D);
			 SerfmtRecord();
		public:
			virtual ~SerfmtRecord();
	};

}

}

}
