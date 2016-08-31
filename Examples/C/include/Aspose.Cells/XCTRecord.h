#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
#define STATIC_XCTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class XCTRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 XCTRecord();
		public:
			virtual ~XCTRecord();
	};

}

}

}
