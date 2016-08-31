#pragma once
//#include "System/Collections/ArrayList.h"
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_CF12RECORD() 

namespace Aspose {
namespace Cells {
class InternalColor;
class IconSet;
class ConditionalFormattingValue;
class FormatCondition;
class DataBar;
class FormatConditionInfo;
class XFExternsionPropertyCollection;
class ColorScale;
class Top10;
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class DxfnRecord;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class CF12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormatCondition> fc;
			Aspose::Cells::System::Int32 Size(intrusive_ptr<Aspose::Cells::DataBar> dataBar);
			Aspose::Cells::System::Int32 WriteDataBar(intrusive_ptr<Aspose::Cells::DataBar> dataBar , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			Aspose::Cells::System::Int32 Size(intrusive_ptr<Aspose::Cells::ColorScale> colorScale);
			Aspose::Cells::System::Int32 WriteColorScale(intrusive_ptr<Aspose::Cells::ColorScale> colorScale , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			Aspose::Cells::System::Int32 Size(intrusive_ptr<Aspose::Cells::IconSet> iconSet);
			Aspose::Cells::System::Int32 WriteIconSet(intrusive_ptr<Aspose::Cells::IconSet> iconSet , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static Aspose::Cells::System::Int32 WriteTop10(intrusive_ptr<Aspose::Cells::Top10> top10 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			Aspose::Cells::System::Int32 Size(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo);
			static Aspose::Cells::System::Int32 WriteCFVO(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static Aspose::Cells::System::Int32 WriteCFVOValue(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> GetMsgHeader(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			 CF12Record();
			void Set(intrusive_ptr<Aspose::Cells::FormatConditionInfo> info);
			static Aspose::Cells::System::Int32 WriteDxfn12(intrusive_ptr<Aspose::Cells::Record::DxfnRecord> dxfn , intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> xfEx , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static Aspose::Cells::System::Int32 GetTemplateType(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			static Aspose::Cells::System::Int32 WriteTemplateParams(intrusive_ptr<Aspose::Cells::FormatCondition> fc , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 WriteCFColor(intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
		public:
			virtual ~CF12Record();
	};

}

}

}
