#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATAKEEPENTRY() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepEntry : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Folder;
			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::System::String> ExpEntryName;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> RelList;
			 DataKeepEntry();
		public:
			virtual ~DataKeepEntry();
	};

}

}

}
