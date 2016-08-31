#pragma once
#include "System/Object.h"
//#include "System/Array.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_SERIESTEXTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SeriesTextRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SeriesTextRecord(intrusive_ptr<Aspose::Cells::System::String> text);
			 SeriesTextRecord();
		public:
			virtual ~SeriesTextRecord();
	};

}

}

}
