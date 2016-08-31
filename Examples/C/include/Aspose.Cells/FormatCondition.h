#pragma once
#include "TimePeriodType.h"
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "System/Guid.h"
//#include "System/Drawing/Color.h"
#include "System/Int16.h"
#include "OperatorType.h"
#include "System/UInt32.h"
#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "BorderType.h"
#include "System/Object.h"
#include "System/Byte.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "FormatConditionType.h"
#define STATIC_FORMATCONDITION() 

namespace Aspose {
namespace Cells {
class IconSet;
class DataBar;
class AboveAverage;
class CellArea;
class CopyOptions;
class ColorScale;
class Top10;
class WorksheetCollection;
class FormatConditionCollection;
class Style;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FormatCondition : public Aspose::Cells::System::Object
#else	class FormatCondition : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_BinaryFormula1;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_BinaryFormula2;
			intrusive_ptr<Aspose::Cells::System::Guid> id;
			bool m_stopIfTrue;
			Aspose::Cells::System::Int32 m_priority;
			Aspose::Cells::System::Int32 m_dxfId;
			intrusive_ptr<Aspose::Cells::System::String> GetTextInExpression();
			intrusive_ptr<Aspose::Cells::System::String> EncodeValueInQuote(intrusive_ptr<Aspose::Cells::System::String> text);
			intrusive_ptr<Aspose::Cells::System::String> GetDupUniFormula(Aspose::Cells::System::Char opr , intrusive_ptr<Aspose::Cells::System::String> baseCell);
			intrusive_ptr<Aspose::Cells::System::String> GetRangeParam(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cas);
			void AppendRangeParam(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			intrusive_ptr<Aspose::Cells::IconSet> _iconSet;
			intrusive_ptr<Aspose::Cells::DataBar> _dataBar;
			intrusive_ptr<Aspose::Cells::ColorScale> _colorScale;
			intrusive_ptr<Aspose::Cells::Top10> _top10;
			intrusive_ptr<Aspose::Cells::AboveAverage> _aboveAverage;
			Aspose::Cells::TimePeriodType _timePeriod;
	public:

			Aspose::Cells::FormatConditionCollection* _u_fmtConds;
			Aspose::Cells::OperatorType _operator;
			Aspose::Cells::FormatConditionType _type;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula1();
			void SetBinaryFormula1(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::Guid> GetID();
			void SetID(intrusive_ptr<Aspose::Cells::System::Guid> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula2();
			void SetBinaryFormula2(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::String> m_formula1;
			intrusive_ptr<Aspose::Cells::System::String> m_formula2;
			intrusive_ptr<Aspose::Cells::Style> _style;
			 FormatCondition(intrusive_ptr<Aspose::Cells::FormatConditionCollection> formatConditions);
			void Copy(intrusive_ptr<Aspose::Cells::FormatCondition> formatCondition , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula1();
			void SetFormula1(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula1(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2();
			void SetFormula2(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::OperatorType GetOperator();
			void SetOperator(Aspose::Cells::OperatorType value);
			bool GetStopIfTrue();
			void SetStopIfTrue(bool value);
			Aspose::Cells::System::Int32 GetPriority();
			void SetPriority(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetDxfId();
			void SetDxfId(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetWorksheets();
			intrusive_ptr<Aspose::Cells::Style> GetStyle();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> value);
			Aspose::Cells::FormatConditionType GetType();
			void SetType(Aspose::Cells::FormatConditionType value);
			void SetBorder(Aspose::Cells::BorderType borderType , Aspose::Cells::System::Int16 borderLineStyles , Aspose::Cells::System::UInt32 borderLineColour , Aspose::Cells::System::Int32 offsetCount);
			void SetBorders(Aspose::Cells::System::Int16 borderLineStyles , Aspose::Cells::System::UInt32 borderLineColor , Aspose::Cells::System::Int32 option);
			void Read(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 recordSize);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetCostantToken(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> FormulaToBin(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula(bool formula2 , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::System::String> BinToFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void InitFormula();
			intrusive_ptr<Aspose::Cells::System::String> ToExpression();
			intrusive_ptr<Aspose::Cells::IconSet> GetIconSet();
			void SetInternalIconSet(intrusive_ptr<Aspose::Cells::IconSet> iconset);
			intrusive_ptr<Aspose::Cells::DataBar> GetDataBar();
			void SetInternalDataBar(intrusive_ptr<Aspose::Cells::DataBar> dataBar);
			intrusive_ptr<Aspose::Cells::ColorScale> GetColorScale();
			void SetInternalColorScale(intrusive_ptr<Aspose::Cells::ColorScale> colorScale);
			intrusive_ptr<Aspose::Cells::Top10> GetTop10();
			void SetInternalTop10(intrusive_ptr<Aspose::Cells::Top10> top10);
			intrusive_ptr<Aspose::Cells::Top10> GetInternalTop10();
			intrusive_ptr<Aspose::Cells::AboveAverage> GetAboveAverage();
			intrusive_ptr<Aspose::Cells::System::String> GetText();
			void SetText(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::TimePeriodType GetTimePeriod();
			void SetTimePeriod(Aspose::Cells::TimePeriodType value);
			bool IsX14(bool isX14);
			void ConvertBinary(bool up , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FormatCondition();
		public:
			virtual ~FormatCondition();
	};

}

}
