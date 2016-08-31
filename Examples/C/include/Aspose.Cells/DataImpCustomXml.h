#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATAIMPCUSTOMXML() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataImpCustomXml : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> ProgId;
			intrusive_ptr<Aspose::Cells::System::String> RId;
			intrusive_ptr<Aspose::Cells::System::String> ImpEntryName;
			intrusive_ptr<Aspose::Cells::System::String> ImpRelType;
			intrusive_ptr<Aspose::Cells::System::String> Link;
			 DataImpCustomXml();
		public:
			virtual ~DataImpCustomXml();
	};

}

}

}
