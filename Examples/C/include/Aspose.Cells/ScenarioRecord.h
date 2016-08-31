#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SCENARIORECORD() 

namespace Aspose {
namespace Cells {
class Scenario;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ScenarioRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CList;
			 ScenarioRecord(intrusive_ptr<Aspose::Cells::Scenario> scenario);
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			 ScenarioRecord();
		public:
			virtual ~ScenarioRecord();
	};

}

}

}
