#pragma once
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/TypeCode.h"
#include "System/Double.h"
#include "System/Collections/Hashtable.h"
#include "ICellVisitor.h"
#include "System/Object.h"
//#include "System/DateTime.h"
//#include "System/Math.h"
//#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORMATCHBYFINDOPTIONS() 

namespace Aspose {
namespace Cells {
class IStylePool;
class RowCollection;
class FindOptions;
class Cells;
class Cell;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class IStringMatcher;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellVisitorMatchByFindOptions : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::Cells* m_Cells;
			Aspose::Cells::RowCollection* m_Rows;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			intrusive_ptr<Aspose::Cells::FindOptions> m_Options;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> m_StringMatcher;
			bool m_Numberic;
			bool m_DateTime;
			Aspose::Cells::System::Double m_NumbericValue;
			bool m_CheckStyle;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_MatchedXF;
			intrusive_ptr<Aspose::Cells::IStylePool> m_StylePool;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Cache;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> m_PrevRow;
			Aspose::Cells::System::Int32 m_RowXF;
			intrusive_ptr<Aspose::Cells::Cell> GetCellInstance(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::Cell> GetCellInstance(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , bool needSyncData);
			void BuildCellXF(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			bool CompareCell(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			bool CompareStyle(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			bool CompareStyle(intrusive_ptr<Aspose::Cells::Style> cellStyle , intrusive_ptr<Aspose::Cells::Style> conditionalStyle);
	public:

			 CellVisitorMatchByFindOptions(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::System::Object> what , intrusive_ptr<Aspose::Cells::FindOptions> options);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorMatchByFindOptions();
		public:
			virtual ~CellVisitorMatchByFindOptions();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
