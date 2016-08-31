#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_COLORSCALE() 

namespace Aspose {
namespace Cells {
class InternalColor;
class Workbook;
class ConditionalFormattingValue;
class CopyOptions;
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ColorScale : public Aspose::Cells::System::Object
#else	class ColorScale : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _book;
			Aspose::Cells::FormatCondition* fc;
	public:

			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> _minCfvo;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> _midCfvo;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> _maxCfvo;
			intrusive_ptr<Aspose::Cells::InternalColor> _minColorInfo;
			intrusive_ptr<Aspose::Cells::InternalColor> _midColorInfo;
			intrusive_ptr<Aspose::Cells::InternalColor> _maxColorInfo;
			 ColorScale(intrusive_ptr<Aspose::Cells::Workbook> book , intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void Copy(intrusive_ptr<Aspose::Cells::ColorScale> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::ColorScale> GetDefault3ColorScale(intrusive_ptr<Aspose::Cells::Workbook> book , intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			bool GetIs3ColorScale();
			void SetIs3ColorScale(bool value);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetMinCfvo();
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetMidCfvo();
			bool HasMidCfvo();
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetMaxCfvo();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMinColor();
			void SetMinColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMidColor();
			void SetMidColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMaxColor();
			void SetMaxColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetMinColorInfo();
			void SetMinColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetMidColorInfo();
			void SetMidColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetMaxColorInfo();
			void SetMaxColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			 ColorScale();
		public:
			virtual ~ColorScale();
	};

}

}
