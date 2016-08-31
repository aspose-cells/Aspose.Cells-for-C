#pragma once
#include "System/Object.h"
#include "DataBarFillType.h"
#include "System/Drawing/Color.h"
#include "TextDirectionType.h"
#include "DataBarAxisPosition.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_DATABAR() 

namespace Aspose {
namespace Cells {
class InternalColor;
class DataBarBorder;
class NegativeBarFormat;
class ConditionalFormattingValue;
class Workbook;
class CopyOptions;
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DataBar : public Aspose::Cells::System::Object
#else	class DataBar : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::InternalColor> _colorInfo;
			intrusive_ptr<Aspose::Cells::InternalColor> _axisColor;
			intrusive_ptr<Aspose::Cells::DataBarBorder> _dataBarBorder;
			intrusive_ptr<Aspose::Cells::NegativeBarFormat> _negativeBarFormat;
			Aspose::Cells::System::Int32 _minLength;
			Aspose::Cells::System::Int32 _maxLength;
			bool _showValue;
			Aspose::Cells::FormatCondition* fc;
			Aspose::Cells::DataBarAxisPosition _axisPosition;
			Aspose::Cells::DataBarFillType _barFillType;
			Aspose::Cells::TextDirectionType _direction;
	public:

			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> _minCfvo;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> _maxCfvo;
			Aspose::Cells::Workbook* _book;
			intrusive_ptr<Aspose::Cells::InternalColor> GetAxisColorInfo();
			void SetAxisColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetAxisColor();
			void SetAxisColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::DataBarAxisPosition GetAxisPosition();
			void SetAxisPosition(Aspose::Cells::DataBarAxisPosition value);
			Aspose::Cells::DataBarFillType GetBarFillType();
			void SetBarFillType(Aspose::Cells::DataBarFillType value);
			Aspose::Cells::TextDirectionType GetDirection();
			void SetDirection(Aspose::Cells::TextDirectionType value);
			intrusive_ptr<Aspose::Cells::DataBarBorder> GetBarBorder();
			intrusive_ptr<Aspose::Cells::NegativeBarFormat> GetNegativeBarFormat();
			 DataBar(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond);
			void Copy(intrusive_ptr<Aspose::Cells::DataBar> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::DataBar> GetDefaultDataBar(intrusive_ptr<Aspose::Cells::Workbook> book , intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetMinCfvo();
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> GetMaxCfvo();
			void SetMaxCFVO(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> maxCFVO);
			void SetMinCFVO(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> minCFVO);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetColorInfo();
			void SetColorInfo(intrusive_ptr<Aspose::Cells::InternalColor> value);
			Aspose::Cells::System::Int32 GetMinLength();
			void SetMinLength(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetMaxLength();
			void SetMaxLength(Aspose::Cells::System::Int32 value);
			bool GetShowValue();
			void SetShowValue(bool value);
			 DataBar();
		public:
			virtual ~DataBar();
	};

}

}
