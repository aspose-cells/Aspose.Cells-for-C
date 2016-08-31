#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/TypeCode.h"
#include "System/String.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Array.h"
//#include "System/DateTime.h"
#include "NumberPatternType.h"
#include "AbstractCellsFormatter.h"
#include "System/Int32.h"
#define STATIC_CELLSTEXTFORMATTER() 

namespace Aspose {
namespace Cells {
class FormattedInfo;
}
}
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
	class CellsTextFormatter : public Aspose::Cells::Internal::Format::AbstractCellsFormatter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Char>> m_AppendParts;
			Aspose::Cells::System::Int32 m_AppendSize;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolderPartIndex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolderPartPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolderVal;
			Aspose::Cells::System::Int32 m_ResultPos;
			Aspose::Cells::System::Int32 m_PlaceHolderIndex;
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info , bool ofCondition);
			void FormatString(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::String> s , intrusive_ptr<Aspose::Cells::FormattedInfo> info , bool ofCondition);
			void FillStaticText(intrusive_ptr<Aspose::Cells::FormattedInfo> info , intrusive_ptr<Aspose::Cells::System::String> text);
			void FillPatternText(intrusive_ptr<Aspose::Cells::FormattedInfo> info , bool negative);
			void ProcessAppend(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> result , Aspose::Cells::System::Int32 appendPartIndex , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
	public:

			 CellsTextFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetPlaceHolders();
			Aspose::Cells::System::Int32 GetStaticContentSize();
			bool GetStaticContentOnly();
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value , bool ofCondition);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 CellsTextFormatter();
		public:
			virtual ~CellsTextFormatter();
	};

}

}

}

}
