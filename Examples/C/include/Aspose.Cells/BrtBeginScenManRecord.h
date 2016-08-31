#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_BRTBEGINSCENMANRECORD() 

namespace Aspose {
namespace Cells {
class ScenarioCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginScenManRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginScenManRecord(intrusive_ptr<Aspose::Cells::ScenarioCollection> s);
			 BrtBeginScenManRecord();
		public:
			virtual ~BrtBeginScenManRecord();
	};

}

}

}

}
