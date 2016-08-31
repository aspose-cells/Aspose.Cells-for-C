#pragma once
#include "System/Object.h"
#define STATIC_DATAPROTECTION() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataProtection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool IsLocked;
			bool IsHidden;
			 DataProtection();
			bool IsEqual(intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> dp);
			void SetDataToStyle(intrusive_ptr<Aspose::Cells::Style> style);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataProtection> GetDataProtection(intrusive_ptr<Aspose::Cells::Style> style);
		public:
			virtual ~DataProtection();
	};

}

}

}
