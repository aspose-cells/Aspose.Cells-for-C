#pragma once
#include "System/Object.h"
//#include "System/Collections/Hashtable.h"
#include "System/Drawing/Color.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_CONDITIONALFORMATTINGRESULT() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingIcon;
class CFResult;
class ColorScale;
class Style;
class DataBar;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingResult : public Aspose::Cells::System::Object
#else	class ConditionalFormattingResult : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CFResult> m_cStyle;
	public:

			 ConditionalFormattingResult(intrusive_ptr<Aspose::Cells::CFResult> cStyle);
			intrusive_ptr<Aspose::Cells::Style> GetConditionalStyle();
			intrusive_ptr<Aspose::Cells::Style> GetResultStyle();
			intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> GetConditionalFormattingIcon();
			intrusive_ptr<Aspose::Cells::DataBar> GetConditionalFormattingDataBar();
			intrusive_ptr<Aspose::Cells::ColorScale> GetConditionalFormattingColorScale();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorScaleResult();
			 ConditionalFormattingResult();
		public:
			virtual ~ConditionalFormattingResult();
	};

}

}
