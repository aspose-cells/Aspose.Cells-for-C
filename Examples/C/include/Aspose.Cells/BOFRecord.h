#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "SheetType.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
//#include "System/Array.h"
#include "System/Int32.h"
#define STATIC_BOFRECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class BOFRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void CreateData();
			void SetSheetType(Aspose::Cells::SheetType type);
	public:

			 BOFRecord(Aspose::Cells::SheetType type);
			 BOFRecord();
			void SetLowestVersion(Aspose::Cells::System::Int32 lowestVersion);
		public:
			virtual ~BOFRecord();
	};

}

}

}
