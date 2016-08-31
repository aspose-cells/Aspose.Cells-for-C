#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_SXPI() 

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
	class SxPI : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotField* _u_pivotField;
			Aspose::Cells::System::Int16 _selectedItemIndex;
			Aspose::Cells::System::Int32 _index;
			Aspose::Cells::System::Int32 _hier;
			intrusive_ptr<Aspose::Cells::System::String> _name;
			intrusive_ptr<Aspose::Cells::System::String> _cap;
			 SxPI(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxPI> record);
			 SxPI();
		public:
			virtual ~SxPI();
	};

}

}

}
