#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMATCONDITIONINFO() 

namespace Aspose {
namespace Cells {
class XFExternsionPropertyCollection;
class FormatCondition;
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class DxfnRecord;
}
}
}

namespace Aspose {
namespace Cells {
	class FormatConditionInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void GatherStyle();
	public:

			Aspose::Cells::FormatCondition* fc;
			Aspose::Cells::System::Int32 cfIndex;
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> xfEx;
			intrusive_ptr<Aspose::Cells::Record::DxfnRecord> dxfn;
			Aspose::Cells::System::Int32 nId;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formulaData;
			 FormatConditionInfo(Aspose::Cells::System::Int32 nId , intrusive_ptr<Aspose::Cells::FormatCondition> fc , Aspose::Cells::System::Int32 cfIndex);
			bool GetExportCF();
			bool HasCFEx();
			Aspose::Cells::System::Int32 GetSizeDxfn12();
			 FormatConditionInfo();
		public:
			virtual ~FormatConditionInfo();
	};

}

}
