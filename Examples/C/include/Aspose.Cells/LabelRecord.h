#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_LABELRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class LabelRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 LabelRecord();
			void SetValue(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex , intrusive_ptr<Aspose::Cells::System::String> stringValue);
			void SetColIndex(Aspose::Cells::System::UInt16 column);
		public:
			virtual ~LabelRecord();
	};

}

}

}
