#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
#include "Constants.h"
//#include "System/StringHelperPal.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBCELLFORMULARECORD() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCellFormulaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCellFormulaRecord();
			void SetCell(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
		public:
			virtual ~XlsbCellFormulaRecord();
	};

}

}

}

}
