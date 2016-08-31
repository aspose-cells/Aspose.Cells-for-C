#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#define STATIC_DATAATTRIBUTE() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataAttribute : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 DataAttribute(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> Value;
			 DataAttribute();
		public:
			virtual ~DataAttribute();
	};

}

}

}
