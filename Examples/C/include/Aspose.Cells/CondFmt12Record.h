#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_CONDFMT12RECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
class FormatConditionCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class CondFmt12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 CondFmt12Record();
			void SetFormatConditions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int32 nID);
			static Aspose::Cells::System::Int32 WriteCellAreaToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::CellArea> ca);
		public:
			virtual ~CondFmt12Record();
	};

}

}

}
