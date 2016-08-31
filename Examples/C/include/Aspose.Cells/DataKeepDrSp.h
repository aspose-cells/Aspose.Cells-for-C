#pragma once
#include "System/Int64.h"
#include "DataKeepDrSpEnum.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPDRSP() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepDrSpSp;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepDrSp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int64 m_ChangedFlag;
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepDrSpSp> _sp;
			 DataKeepDrSp();
			bool IsChanged(Aspose::Cells::OpenXML::DataKeepDrSpEnum flag);
			void SetChanged(Aspose::Cells::OpenXML::DataKeepDrSpEnum flag);
			void SetChanged(Aspose::Cells::OpenXML::DataKeepDrSpEnum flag , bool v);
			void ResetChangeFlag();
			void SetAllFlags();
			intrusive_ptr<Aspose::Cells::System::String> GetKeepString(Aspose::Cells::OpenXML::DataKeepDrSpEnum flag);
		public:
			virtual ~DataKeepDrSp();
	};

}

}

}
