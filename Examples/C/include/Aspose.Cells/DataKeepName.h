#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPNAME() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepName : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> WorkbookParameterString;
			intrusive_ptr<Aspose::Cells::System::String> PublishToServerString;
			 DataKeepName();
		public:
			virtual ~DataKeepName();
	};

}

}

}
