#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SCENARIOMANAGERRECORD() 

namespace Aspose {
namespace Cells {
class ScenarioCollection;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ScenarioManagerRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ScenarioManagerRecord(intrusive_ptr<Aspose::Cells::ScenarioCollection> scenarios);
			 ScenarioManagerRecord();
		public:
			virtual ~ScenarioManagerRecord();
	};

}

}

}
