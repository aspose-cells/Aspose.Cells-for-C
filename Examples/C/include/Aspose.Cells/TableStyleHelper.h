#pragma once
#include "System/String.h"
#include "TableStyleType.h"
#include "System/Object.h"
#define STATIC_TABLESTYLEHELPER() 


namespace Aspose {
namespace Cells {
namespace Tables {
	class TableStyleHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> ConvertToStringValue(Aspose::Cells::Tables::TableStyleType type);
			static Aspose::Cells::Tables::TableStyleType ConvertToType(intrusive_ptr<Aspose::Cells::System::String> name);
			 TableStyleHelper();
		public:
			virtual ~TableStyleHelper();
	};

}

}

}
