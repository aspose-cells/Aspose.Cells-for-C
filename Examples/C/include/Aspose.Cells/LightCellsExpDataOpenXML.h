#pragma once
#include "System/Object.h"
#include "LightCellsExpData.h"
#include "System/Int32.h"
#define STATIC_LIGHTCELLSEXPDATAOPENXML() 

namespace Aspose {
namespace Cells {
class Style;
class LightCellsDataProvider;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
	class LightCellsExpDataOpenXML : public Aspose::Cells::LightCellsExpData
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _expWhole;
	public:

			 LightCellsExpDataOpenXML(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expWhole , intrusive_ptr<Aspose::Cells::LightCellsDataProvider> provider);
			 virtual void OnAddExtraStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 xf);
			 LightCellsExpDataOpenXML();
		public:
			virtual ~LightCellsExpDataOpenXML();
	};

}

}
