#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_USERSVIEWENDRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class UsersViewEndRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 UsersViewEndRecord();
		public:
			virtual ~UsersViewEndRecord();
	};

}

}

}
