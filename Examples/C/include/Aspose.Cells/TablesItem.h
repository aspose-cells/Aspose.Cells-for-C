#pragma once
#include "System/Object.h"
#define STATIC_TABLESITEM() 


namespace Aspose {
namespace Cells {
namespace ExternalConnections {
	class TablesItem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> value;
			bool isMissing;
			void Copy(intrusive_ptr<Aspose::Cells::ExternalConnections::TablesItem> source);
			 TablesItem();
		public:
			virtual ~TablesItem();
	};

}

}

}
