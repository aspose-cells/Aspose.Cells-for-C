#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_DATASHEETVIEWPANE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataSheetViewPane : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> State;
			Aspose::Cells::System::Double xSplit;
			Aspose::Cells::System::Double ySplit;
			intrusive_ptr<Aspose::Cells::System::String> TopLeftCell;
			intrusive_ptr<Aspose::Cells::System::String> ActivePane;
			 DataSheetViewPane();
		public:
			virtual ~DataSheetViewPane();
	};

}

}

}
