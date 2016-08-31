#pragma once
//#include "System/Array.h"
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CONDFMTRECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
class FormatConditionCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class CondFmtRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CondFmtRecord();
			void SetFormatConditions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int32 nID);
			static Aspose::Cells::System::Int32 WriteCellAreaToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::CellArea> ca);
		public:
			virtual ~CondFmtRecord();
	};

}

}

}
