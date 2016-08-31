#pragma once
#include "BIFFRecord.h"
#include "System/Object.h"
//#include "System/Int16.h"
#define STATIC_EOFRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class EOFRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 EOFRecord();
		public:
			virtual ~EOFRecord();
	};

}

}

}
