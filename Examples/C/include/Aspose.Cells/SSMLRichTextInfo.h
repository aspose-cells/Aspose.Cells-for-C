#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_SSMLRICHTEXTINFO() 

namespace Aspose {
namespace Cells {
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace SSML {
	class SSMLRichTextInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Font> Font;
			intrusive_ptr<Aspose::Cells::System::String> Text;
			 SSMLRichTextInfo();
		public:
			virtual ~SSMLRichTextInfo();
	};

}

}

}
