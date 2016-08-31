#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPDRSPSP() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepDrSpSpPr;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepDrSpSp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool _isCxnSp;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepDrSpSpPr> _spPr;
			intrusive_ptr<Aspose::Cells::System::String> _style;
			 DataKeepDrSpSp();
		public:
			virtual ~DataKeepDrSpSp();
	};

}

}

}
