#pragma once
#include "System/Object.h"
#define STATIC_XMLNODELISTENEROPTIONS() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlNodeListenerOptions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool Preserve;
			bool VMLHtml;
			 XmlNodeListenerOptions();
		public:
			virtual ~XmlNodeListenerOptions();
	};

}

}

}
