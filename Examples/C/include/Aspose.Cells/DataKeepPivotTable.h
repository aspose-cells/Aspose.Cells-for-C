#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPPIVOTTABLE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepPivotTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Target;
			intrusive_ptr<Aspose::Cells::System::String> Location;
			intrusive_ptr<Aspose::Cells::System::String> RowPageCount;
			 DataKeepPivotTable();
		public:
			virtual ~DataKeepPivotTable();
	};

}

}

}
