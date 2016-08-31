#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_DATASHEETVIEWSELECTION() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataSheetViewSelection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Pane;
			intrusive_ptr<Aspose::Cells::System::String> ActiveCell;
			Aspose::Cells::System::Int32 ActiveCellId;
			intrusive_ptr<Aspose::Cells::System::String> Sqref;
			 DataSheetViewSelection();
		public:
			virtual ~DataSheetViewSelection();
	};

}

}

}
