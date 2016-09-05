#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Int32Helper.h"
#include "ConsolidationFunction.h"
//#include "System/Char.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_SUBTOTALHELPER2007() 

namespace Aspose {
namespace Cells {
class RowCollection;
class CellArea;
class Row;
class Cells;
}
}

namespace Aspose {
namespace Cells {
	class SubtotalHelper2007 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellArea> ca;
			Aspose::Cells::ConsolidationFunction function;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList;
			bool replace;
			bool pageBreaks;
			bool summaryBelowData;
			bool group;
			Aspose::Cells::System::Int32 row;
			Aspose::Cells::System::Int32 groupBy;
			Aspose::Cells::Cells* cells;
			Aspose::Cells::RowCollection* rows;
			Aspose::Cells::System::Int32 headerColumn;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> totalColumns;
			intrusive_ptr<Aspose::Cells::System::String> totalName;
			intrusive_ptr<Aspose::Cells::System::String> grandTotalName;
			Aspose::Cells::System::Int32 FirstSubtotalColumn(intrusive_ptr<Aspose::Cells::Row> rowInfo);
			Aspose::Cells::System::Int32 EndSubtotalColumn(intrusive_ptr<Aspose::Cells::Row> rowInfo);
			bool IsSubtotalRow(Aspose::Cells::System::Int32 rowIndex);
			bool IsSubtotalRow(intrusive_ptr<Aspose::Cells::Row> rowInfo);
			void SubtotalBelowData();
			void SubtotalOverData();
	public:

			 SubtotalHelper2007(intrusive_ptr<Aspose::Cells::Cells> cells);
			void Subtotal(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 groupBy , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList , bool replace , bool pageBreaks , bool summaryBelowData);
			 SubtotalHelper2007();
		public:
			virtual ~SubtotalHelper2007();
	};

}

}