#pragma once
#include "FormattedInfo.h"
#include "System/Text/StringBuilder.h"
//#include "System/Boxing.h"
//#include "System/Boolean.h"
#include "System/TypeCode.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
//#include "System/Drawing/Color.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/DateTime.h"
//#include "System/Array.h"
//#include "System/String.h"
#include "NumberPatternType.h"
//#include "System/Type.h"
#include "System/Int32.h"
#include "ICellsFormatter.h"
#define STATIC_ABSTRACTCELLSFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class FormatOptions;
class CellsFormatterParams;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class AbstractCellsFormatter : public Aspose::Cells::Internal::Format::ICellsFormatter
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> m_Params;
			intrusive_ptr<Aspose::Cells::FormattedInfo> m_FormattedInfo;
			void FormatUnknowValue(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			void FormatUnknowValue(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			intrusive_ptr<Aspose::Cells::System::DateTime> ToDateTime(Aspose::Cells::System::Double dv);
			Aspose::Cells::System::Double ToDouble(intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			void AddFormattedPartHolders(intrusive_ptr<Aspose::Cells::FormattedInfo> total , intrusive_ptr<Aspose::Cells::FormattedInfo> part , Aspose::Cells::System::Int32 offset);
			 virtual Aspose::Cells::System::Int32 ProcessPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual Aspose::Cells::System::Int32 KeepPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			 AbstractCellsFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::Object> value);
			 virtual Aspose::Cells::System::Double PrecisionAsDisplayed(Aspose::Cells::System::Double dv);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> GetFormatterParams();
			static Aspose::Cells::System::Int32 KeepCommonPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static Aspose::Cells::System::Int32 ToNextPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static bool ReplacePatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Char cToReplace , Aspose::Cells::System::Char cNew);
			 AbstractCellsFormatter();
		public:
			virtual ~AbstractCellsFormatter();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
