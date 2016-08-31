#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/String.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_LIST12RECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class List12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 List12Record();
			Aspose::Cells::System::Int32 GetBlockLevelLength(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			void SetBlockLevel(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			void SetDisplayName(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			void SetTableStyle(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
			void SetFormats(intrusive_ptr<Aspose::Cells::Tables::ListObject> listObject);
		public:
			virtual ~List12Record();
	};

}

}

}
