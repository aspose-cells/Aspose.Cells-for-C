#pragma once
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CFRESULT() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
	class CFResult : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Style> ConditionalStyle;
			intrusive_ptr<Aspose::Cells::Style> ResultStyle;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ICFStyle;
			 CFResult(intrusive_ptr<Aspose::Cells::Style> ConditionalStyle , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ICFStyleList , intrusive_ptr<Aspose::Cells::Style> ResultStyle);
			 CFResult();
		public:
			virtual ~CFResult();
	};

}

}
