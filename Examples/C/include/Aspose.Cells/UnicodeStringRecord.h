#pragma once
#include "System/Object.h"
#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_UNICODESTRINGRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class UnicodeStringRecord : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int16 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bytesData;
			Aspose::Cells::System::Byte optionFlag;
			void ConvertData(intrusive_ptr<Aspose::Cells::System::String> strData);
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBytesData();
			 UnicodeStringRecord(intrusive_ptr<Aspose::Cells::System::String> strData);
			 UnicodeStringRecord();
		public:
			virtual ~UnicodeStringRecord();
	};

}

}

}
