#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_SERIESLISTRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class SeriesListRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SeriesListRecord();
			void SetCount(Aspose::Cells::System::Int32 count);
		public:
			virtual ~SeriesListRecord();
	};

}

}

}
