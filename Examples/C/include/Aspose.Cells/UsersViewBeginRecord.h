#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/Guid.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_USERSVIEWBEGINRECORD() 

namespace Aspose {
namespace Cells {
class CustomSheetView;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class UsersViewBeginRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 UsersViewBeginRecord();
			void CreateData(intrusive_ptr<Aspose::Cells::CustomSheetView> view);
		public:
			virtual ~UsersViewBeginRecord();
	};

}

}

}
