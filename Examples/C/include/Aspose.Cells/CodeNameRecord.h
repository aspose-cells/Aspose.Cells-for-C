#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CODENAMERECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class CodeNameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CodeNameRecord();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> name);
		public:
			virtual ~CodeNameRecord();
	};

}

}

}
