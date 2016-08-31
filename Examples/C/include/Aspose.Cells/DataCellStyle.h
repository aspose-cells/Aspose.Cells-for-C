#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_DATACELLSTYLE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataCellStyle : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Cells::System::Int32 XfId;
			Aspose::Cells::System::Int32 BuiltinId;
			bool isHidden;
			 DataCellStyle();
		public:
			virtual ~DataCellStyle();
	};

}

}

}
