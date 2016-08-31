#pragma once
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#include "System/Int32.h"
#define STATIC_ROWRECORD() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class RowRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 RowRecord();
			void SetRow(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
		public:
			virtual ~RowRecord();
	};

}

}

}
