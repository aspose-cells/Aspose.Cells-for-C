#pragma once
#include "System/Single.h"
#include "System/Object.h"
//#include "System/Text/RegularExpressions/GroupCollection.h"
#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/Text/RegularExpressions/Group.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Collections/ArrayList.h"
#define STATIC_CELLTEXTPARAGRAPH() 

namespace Aspose {
namespace Cells {
namespace Collections {
class IntArrayList;
}
}
}

namespace Aspose {
namespace Cells {
namespace PdfFD {
	class CellTextParagraph : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> RTLRegex;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> OneWordRegex;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> OneWordRegexForRTL;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> SymbolRegex;
	public:

			static Aspose::Cells::System::Single CalculatePrintViewFontSize(Aspose::Cells::System::Double size , Aspose::Cells::System::Single fontScale);
			static Aspose::Cells::System::Single CalculateNormalViewFontSize(Aspose::Cells::System::Double size , Aspose::Cells::System::Single fontScale);
			static void SplitWords(intrusive_ptr<Aspose::Cells::System::String> text , bool isLineRTL , Aspose::Cells::System::Int32 limit , intrusive_ptr<Aspose::Cells::Collections::IntArrayList> posList);
			static void SeperateFormatRunsForRTL(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataFormatRuns , bool IsLineRTL);
			static void SeperateFormatRunsByChar(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataFormatRuns);
			static void SeperateFormatRunsBySpace(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataFormatRuns , bool isLineRTL);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> SeperateStringBySymbol(intrusive_ptr<Aspose::Cells::System::String> text);
			 CellTextParagraph();
		public:
			virtual ~CellTextParagraph();
	};

}

}

}
