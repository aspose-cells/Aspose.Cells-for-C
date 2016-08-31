#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/UInt16.h"
#define STATIC_HORIZONTALMETRIC() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryWriter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
#ifdef WIN32

	class ASPOSE_CELLS_API HorizontalMetric : public Aspose::Cells::System::Object
#else	class HorizontalMetric : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 AdvanceWidth;
			Aspose::Cells::System::Int16 LeftSideBearing;
			 HorizontalMetric(Aspose::Cells::System::UInt16 advanceWidth , Aspose::Cells::System::Int16 leftSideBearing);
			void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			 HorizontalMetric();
		public:
			virtual ~HorizontalMetric();
	};

}

}

}

}

}
