#pragma once
#include "CellData.h"
//#include "System/Int16.h"
//#include "System/Char.h"
#include "SaveFormat.h"
#include "ICellVisitor.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CELLVISITORPREPARESAVE() 

namespace Aspose {
namespace Cells {
class Column;
class SaveOptions;
class StringPool;
class XfCollection;
class Cells;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
	class CellVisitorPrepareSave : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 MaxRowIndex;
			Aspose::Cells::System::Int32 MaxColCount;
			Aspose::Cells::Workbook* wb;
			intrusive_ptr<Aspose::Cells::XfCollection> xfPool;
			Aspose::Cells::SaveFormat saveFormat;
			intrusive_ptr<Aspose::Cells::StringPool> strPool;
			bool updateRowBorder;
			bool diffBorder;
			Aspose::Cells::System::Int32 defaultBorderFlag;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> borderFlags;
			bool condenseStylePool;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> xfMap;
			Aspose::Cells::System::Int32 xfLimit;
			bool gatherString;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> strUsed;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> strIndexes;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> dataBuffer;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			bool preserveString;
			bool noTopCol;
			bool noBottomCol;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> prevRowData;
			Aspose::Cells::System::Int32 position;
			Aspose::Cells::System::Int32 rowXF;
			bool initRowXF;
			Aspose::Cells::System::Int32 rowBorderFlag;
			Aspose::Cells::System::Int32 rowIdx;
			Aspose::Cells::System::Int32 cellXF;
			void ProcessColumn(intrusive_ptr<Aspose::Cells::Column> c);
			void StartRow();
			void EndRow();
			void Visit();
			void InheritedCellXF(Aspose::Cells::System::Int32 column);
			void ProcessXF();
			void BuildBorderFlag(Aspose::Cells::System::Int32 xf);
	public:

			 CellVisitorPrepareSave(intrusive_ptr<Aspose::Cells::Workbook> wb , intrusive_ptr<Aspose::Cells::SaveOptions> opts);
			bool GetNeedVisit();
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> VisitCells();
			 CellVisitorPrepareSave();
		public:
			virtual ~CellVisitorPrepareSave();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
