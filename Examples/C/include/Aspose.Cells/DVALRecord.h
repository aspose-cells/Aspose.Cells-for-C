#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
#define STATIC_DVALRECORD() 

namespace Aspose {
namespace Cells {
class ValidationCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DVALRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 DVALRecord();
			void CreateData(intrusive_ptr<Aspose::Cells::ValidationCollection> validations , Aspose::Cells::System::Int32 count);
		public:
			virtual ~DVALRecord();
	};

}

}

}
