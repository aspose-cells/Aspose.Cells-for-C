#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "BIFFRecord.h"
#include "System/String.h"
#define STATIC_RECORD0858() 


namespace Aspose {
namespace Cells {
namespace Record {
	class Record0858 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0858();
			void SetDataSource(intrusive_ptr<Aspose::Cells::System::String> source);
		public:
			virtual ~Record0858();
	};

}

}

}
