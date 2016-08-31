#pragma once
#include "System/Object.h"
//#include "System/UInt16.h"
#include "PivotTableAutoFormatType.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_SXVIEWEX9() 

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
	class SxViewEx9 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Pivot::PivotTableAutoFormatType _autoFormatType;
	public:

			Aspose::Cells::Pivot::PivotTable* _u_pivotTable;
			Aspose::Cells::System::Int32 _option;
			intrusive_ptr<Aspose::Cells::System::String> _grandTotalName;
			 SxViewEx9(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxViewEx9> record);
			bool GetOption(Aspose::Cells::System::Int32 mask);
			void SetOption(bool boolValue , Aspose::Cells::System::Int32 mask);
			void SetInternalAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType type);
			Aspose::Cells::Pivot::PivotTableAutoFormatType GetAutoFormatType();
			void SetAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType value);
			bool IsTableFormatType();
			bool IsReportFormatType();
			bool IsClassicFormatType();
			 SxViewEx9();
		public:
			virtual ~SxViewEx9();
	};

}

}

}
