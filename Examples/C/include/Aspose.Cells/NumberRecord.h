#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Double.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_NUMBERRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class NumberRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 NumberRecord();
			void SetValue(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::System::Double doubleValue);
		public:
			virtual ~NumberRecord();
	};

}

}

}
