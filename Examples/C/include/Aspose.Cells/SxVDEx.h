#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#define STATIC_SXVDEX() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxVDEx : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 _option;
			Aspose::Cells::System::Byte _option2;
			Aspose::Cells::System::Byte _showItemSize;
			Aspose::Cells::System::Int16 _number;
			intrusive_ptr<Aspose::Cells::System::String> m_numberFormat;
			Aspose::Cells::Pivot::PivotField* _u_pivotField;
			intrusive_ptr<Aspose::Cells::System::String> _SubName;
			Aspose::Cells::System::Int16 _sortFieldIndex;
			Aspose::Cells::System::Int16 _showFieldIndex;
			 SxVDEx(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			intrusive_ptr<Aspose::Cells::System::String> GetNumberFormat();
			void SetNumberFormat(intrusive_ptr<Aspose::Cells::System::String> value);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxVDEx> record);
			bool GetOption(Aspose::Cells::System::Int32 mask);
			void SetOption(bool boolValue , Aspose::Cells::System::Int32 mask);
			Aspose::Cells::System::Int16 GetSxdiShow();
			Aspose::Cells::System::Int16 GetSxdiSort();
			 SxVDEx();
		public:
			virtual ~SxVDEx();
	};

}

}

}
