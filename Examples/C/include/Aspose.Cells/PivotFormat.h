#pragma once
#include "System/Object.h"
#include "PivotTableAutoFormatType.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#define STATIC_PIVOTFORMAT() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotFormat : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::PivotTable> _u_pivotTable;
			Aspose::Cells::Pivot::PivotTableAutoFormatType _autoFormatType;
			Aspose::Cells::System::UInt16 _option;
			 PivotFormat(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotFormat> record);
			bool GetOption(Aspose::Cells::System::Int32 mask);
			void SetOption(bool boolValue , Aspose::Cells::System::Int32 mask);
			Aspose::Cells::Pivot::PivotTableAutoFormatType GetAutoFormatType();
			void SetAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType value);
			bool IsTableFormatType();
			bool IsReportFormatType();
			bool IsClassicFormatType();
			 PivotFormat();
		public:
			virtual ~PivotFormat();
	};

}

}

}
