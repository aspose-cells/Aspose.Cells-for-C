#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPFILEVERSION() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepFileVersion : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> AppName;
			intrusive_ptr<Aspose::Cells::System::String> LastEdited;
			intrusive_ptr<Aspose::Cells::System::String> LowestEdited;
			intrusive_ptr<Aspose::Cells::System::String> RupBuild;
			intrusive_ptr<Aspose::Cells::System::String> CodeName;
			 DataKeepFileVersion(bool init);
			 DataKeepFileVersion();
		public:
			virtual ~DataKeepFileVersion();
	};

}

}

}
