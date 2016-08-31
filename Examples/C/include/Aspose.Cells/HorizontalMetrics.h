#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#define STATIC_HORIZONTALMETRICS() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class HorizontalMetric;
}
}
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryReader;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class HorizontalMetrics : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetric*>> WidthPairs;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int16>> LeftSideBearings;
			 HorizontalMetrics();
			 HorizontalMetrics(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , Aspose::Cells::System::Int32 hMetricCount , Aspose::Cells::System::Int32 glyphCount);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetric> GetHMetric(Aspose::Cells::System::Int32 glyphIndex);
		public:
			virtual ~HorizontalMetrics();
	};

}

}

}

}

}
