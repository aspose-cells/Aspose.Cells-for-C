#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_BOOLERRRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class BoolErrRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 BoolErrRecord();
			void SetValue(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::Byte column , Aspose::Cells::System::UInt16 xfIndex , bool boolValue);
			void SetError(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::Byte column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Byte errorValue);
			void SetError(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::Byte column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Byte errorValue , bool isError);
		public:
			virtual ~BoolErrRecord();
	};

}

}

}
