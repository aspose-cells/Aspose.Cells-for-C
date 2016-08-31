#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#define STATIC_DATAFONTSCHEME() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataFontScheme : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> _latin;
			intrusive_ptr<Aspose::Cells::System::String> _ea;
			intrusive_ptr<Aspose::Cells::System::String> _cs;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _fontScriptMap;
			 DataFontScheme();
		public:
			virtual ~DataFontScheme();
	};

}

}

}
