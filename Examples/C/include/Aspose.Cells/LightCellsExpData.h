#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_LIGHTCELLSEXPDATA() 

namespace Aspose {
namespace Cells {
class Worksheet;
class LightCellsDataProvider;
class Style;
class WorksheetCollection;
class ICellsDataWrapper;
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}

namespace Aspose {
namespace Cells {
	class LightCellsExpData : public Aspose::Cells::System::Object
	{
	protected:

			Aspose::Cells::System::Int32 _maxSheetIndex;
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> _globalExpData;
			Aspose::Cells::WorksheetCollection* _worksheets;
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> _provider;
			 LightCellsExpData(intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> globalExpData , intrusive_ptr<Aspose::Cells::LightCellsDataProvider> provider);
			 virtual void OnAddExtraStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 xf);
			intrusive_ptr<Aspose::Cells::ICellsDataWrapper> GetDataWrapper(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 LightCellsExpData();
		public:
			virtual ~LightCellsExpData();
	};

}

}
