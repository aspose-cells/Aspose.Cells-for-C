#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/Double.h"
//#include "System/Char.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATASHEETVIEW() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Selection;
class CustomSheetView;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataSheetViewSelection;
class DataSheetViewPane;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataSheetView : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void SetSelection(intrusive_ptr<Aspose::Cells::OpenXML::DataSheetViewSelection> dataSelection , intrusive_ptr<Aspose::Cells::Selection> selection);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataSheetViewPane> PaneInfo;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SelectionList;
			static Aspose::Cells::System::Byte ToPaneId(intrusive_ptr<Aspose::Cells::System::String> paneName);
			static intrusive_ptr<Aspose::Cells::System::String> ToPaneName(Aspose::Cells::System::Byte paneId);
			void SetDataToWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void SetDataToView(intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataSheetView> GetDataFromWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataSheetView> GetDataFromWorksheet(intrusive_ptr<Aspose::Cells::CustomSheetView> sheet);
			 DataSheetView();
		public:
			virtual ~DataSheetView();
	};

}

}

}
