#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/String.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Object.h"
#include "CountryCode.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Exception.h"
#include "System/Globalization/RegionInfo.h"
#include "System/Array1D.h"
#define STATIC_COUNTRYRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class CountryRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 GetCode(intrusive_ptr<Aspose::Cells::System::Globalization::RegionInfo> region , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture);
			Aspose::Cells::System::UInt16 GetCode(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture);
	public:

			 CountryRecord(Aspose::Cells::CountryCode language , Aspose::Cells::CountryCode region);
			 CountryRecord();
		public:
			virtual ~CountryRecord();
	};

}

}

}
