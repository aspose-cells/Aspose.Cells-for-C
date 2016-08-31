#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/Int16.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
//#include "System/Globalization/NumberStyles.h"
#include "LangCode.h"
#define STATIC_CELLSFORMATTERPARAMS() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsFormatterParams : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Pattern;
			Aspose::Cells::Internal::Format::FormatRelInfo* m_FormatRelInfo;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> m_Color;
			Aspose::Cells::System::Int16 m_LID;
			void AppendQuotedChars(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , bool progPattern);
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetPattern();
			void SetPattern(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> GetFormatRelInfo();
			void SetFormatRelInfo(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value);
			Aspose::Cells::System::Int16 GetLID();
			void SetLID(Aspose::Cells::System::Int16 value);
			Aspose::Cells::System::Int32 InitFromSquareBracket(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , bool progPattern);
			 CellsFormatterParams();
		public:
			virtual ~CellsFormatterParams();
	};

}

}

}

}
