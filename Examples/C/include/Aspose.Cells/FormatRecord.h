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
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_FORMATRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class FormatRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> custom;
			Aspose::Cells::System::Int32 index;
	public:

			 FormatRecord();
			void SetCustomFormatString(intrusive_ptr<Aspose::Cells::System::String> customFormatString , Aspose::Cells::System::UInt16 index);
			intrusive_ptr<Aspose::Cells::System::String> GetCustom();
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
			void Copy(intrusive_ptr<Aspose::Cells::Record::FormatRecord> source);
		public:
			virtual ~FormatRecord();
	};

}

}

}
