#pragma once
#include "System/Object.h"
#include "LookAtType.h"
#include "LookInType.h"
#define STATIC_FINDOPTIONS() 

namespace Aspose {
namespace Cells {
class CellArea;
class Style;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FindOptions : public Aspose::Cells::System::Object
#else	class FindOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_isCaseSensitive;
			Aspose::Cells::LookAtType m_LookAtType;
			intrusive_ptr<Aspose::Cells::CellArea> m_Range;
			bool m_hasRange;
			bool m_SearchNext;
			bool m_SeachByRows;
			Aspose::Cells::LookInType m_LookInType;
			bool m_Regex;
			bool m_MatchType;
			intrusive_ptr<Aspose::Cells::Style> m_style;
			bool m_convertNumericData;
	public:

			bool IsCaseSensitive();
			void SetIsCaseSensitive(bool value);
			bool GetCaseSensitive();
			void SetCaseSensitive(bool value);
			Aspose::Cells::LookAtType GetLookAtType();
			void SetLookAtType(Aspose::Cells::LookAtType value);
			intrusive_ptr<Aspose::Cells::CellArea> GetRange();
			void SetRange(intrusive_ptr<Aspose::Cells::CellArea> ca);
			bool IsRangeSet();
			bool GetSearchNext();
			void SetSearchNext(bool value);
			bool GetSeachOrderByRows();
			void SetSeachOrderByRows(bool value);
			Aspose::Cells::LookInType GetLookInType();
			void SetLookInType(Aspose::Cells::LookInType value);
			bool GetRegexKey();
			void SetRegexKey(bool value);
			bool GetMatchType();
			void SetMatchType(bool value);
			intrusive_ptr<Aspose::Cells::Style> GetStyle();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> value);
			bool GetConvertNumericData();
			void SetConvertNumericData(bool value);
			 FindOptions();
		public:
			virtual ~FindOptions();
	};

}

}
