#pragma once
#include "System/Object.h"
//#include "System/Single.h"
#include "IConditionFormatStyle.h"
#include "System/Drawing/Color.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_COLORSCALEDSTYLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class ColorScale;
}
}

namespace Aspose {
namespace Cells {
namespace StyleObject {
	class ColorScaledStyle : public Aspose::Cells::StyleObject::IConditionFormatStyle
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::ColorScale> ColorScale;
			 ColorScaledStyle(intrusive_ptr<Aspose::Cells::ColorScale> colorScale , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areas);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> Get2ColorScaled();
			static Aspose::Cells::System::Int32 CheckR(Aspose::Cells::System::Int32 r);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> Get3ColorScaled();
			 virtual bool IsShowValue();
			 ColorScaledStyle();
		public:
			virtual ~ColorScaledStyle();
	};

}

}

}
