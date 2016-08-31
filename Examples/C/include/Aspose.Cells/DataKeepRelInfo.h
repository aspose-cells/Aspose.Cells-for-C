#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAKEEPRELINFO() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepRelInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::System::String> ExpRId;
			 DataKeepRelInfo();
		public:
			virtual ~DataKeepRelInfo();
	};

}

}

}
