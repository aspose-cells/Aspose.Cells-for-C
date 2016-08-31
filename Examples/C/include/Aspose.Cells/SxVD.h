#pragma once
#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/String.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_SXVD() 

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
	class SxVD : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 _subtotalType;
			intrusive_ptr<Aspose::Cells::System::String> _name;
			Aspose::Cells::Pivot::PivotField* _u_pivotField;
			 SxVD(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxVD> record);
			Aspose::Cells::System::Int16 GetCSub();
			 SxVD();
		public:
			virtual ~SxVD();
	};

}

}

}
