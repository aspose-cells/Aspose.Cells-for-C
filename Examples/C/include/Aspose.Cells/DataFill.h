#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_DATAFILL() 

namespace Aspose {
namespace Cells {
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPatternFill;
class DataCellGradientFill;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataFill : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::OpenXML::DataPatternFill> PatternFill;
			intrusive_ptr<Aspose::Cells::OpenXML::DataCellGradientFill> GradFill;
			static intrusive_ptr<Aspose::Cells::OpenXML::DataFill> GetDataExpFill(intrusive_ptr<Aspose::Cells::Style> style);
			static bool IsEquals(intrusive_ptr<Aspose::Cells::OpenXML::DataFill> obj1 , intrusive_ptr<Aspose::Cells::OpenXML::DataFill> obj2);
			 DataFill();
		public:
			virtual ~DataFill();
	};

}

}

}
