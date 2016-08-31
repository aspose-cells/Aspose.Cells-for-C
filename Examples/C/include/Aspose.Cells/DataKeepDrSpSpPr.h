#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPDRSPSPPR() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepDrSpLn;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepDrSpSpPr : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> _scene3d;
			intrusive_ptr<Aspose::Cells::System::String> _effectDag;
			intrusive_ptr<Aspose::Cells::System::String> _effectLst;
			intrusive_ptr<Aspose::Cells::System::String> _sp3d;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepDrSpLn> _ln;
			intrusive_ptr<Aspose::Cells::System::String> _extLst;
			 DataKeepDrSpSpPr();
		public:
			virtual ~DataKeepDrSpSpPr();
	};

}

}

}
