#pragma once
#include "BIFFRecord.h"
#include "System/Object.h"
//#include "System/Int16.h"
#define STATIC_SETUPRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SetupRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SetupRecord();
		public:
			virtual ~SetupRecord();
	};

}

}

}
