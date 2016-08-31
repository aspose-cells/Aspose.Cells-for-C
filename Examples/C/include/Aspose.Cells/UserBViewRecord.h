#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Guid.h"
#include "System/Array1D.h"
#define STATIC_USERBVIEWRECORD() 

namespace Aspose {
namespace Cells {
class CustomWorkbookView;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class UserBViewRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 UserBViewRecord();
			void SetData(intrusive_ptr<Aspose::Cells::CustomWorkbookView> cView);
		public:
			virtual ~UserBViewRecord();
	};

}

}

}
