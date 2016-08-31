#pragma once
#include "System/String.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_DATAEXPSHEETCUSTPROPERTIES() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpSheetCustProperties : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> Rid;
			intrusive_ptr<Aspose::Cells::System::String> FileName;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Value;
			 DataExpSheetCustProperties();
		public:
			virtual ~DataExpSheetCustProperties();
	};

}

}

}
