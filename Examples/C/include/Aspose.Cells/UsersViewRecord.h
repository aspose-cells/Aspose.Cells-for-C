#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_USERSVIEWRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class UsersViewRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 UsersViewRecord();
			void SetSharingOption();
		public:
			virtual ~UsersViewRecord();
	};

}

}

}
