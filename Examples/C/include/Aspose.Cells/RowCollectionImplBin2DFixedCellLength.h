#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/String.h"
#include "RowCollectionImplBin2D.h"
//#include "System/Array.h"
#include "System/Int32.h"
#define STATIC_ROWCOLLECTIONIMPLBIN2DFIXEDCELLLENGTH() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class AbstractRowCollection;
class RowProperties;
}
}
}
namespace Aspose {
namespace Cells {
class FormulaPool;
class StringPool;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowCollectionImplBin2DFixedCellLength : public Aspose::Cells::CellsSs::RowCollectionImplBin2D
	{
	protected:

			 virtual void ShiftRow(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void InitRowData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 ExpandCellSize;
	public:

			Aspose::Cells::StringPool* StringPool;
			Aspose::Cells::FormulaPool* FormulaPool;
			 RowCollectionImplBin2DFixedCellLength(Aspose::Cells::System::Int32 initRowCapacity , Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 initCellCapacity , Aspose::Cells::System::Int32 expandCellCount , intrusive_ptr<Aspose::Cells::StringPool> stringPool , intrusive_ptr<Aspose::Cells::FormulaPool> formulaPool);
			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual Aspose::Cells::System::Int32 GetCellExpandSize();
			 virtual Aspose::Cells::System::Int32 GetRowDataCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual Aspose::Cells::System::Int32 GetCellCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual Aspose::Cells::System::Int32 GetRowDataSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByCachedData(intrusive_ptr<Aspose::Cells::System::Object> cacheData);
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex(Aspose::Cells::System::Int32 position);
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xfIndex);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte optValue);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight(Aspose::Cells::System::Int32 position);
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 rawHeight);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> row , bool clone);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rows , Aspose::Cells::System::Int32 srcPosition , Aspose::Cells::System::Int32 count , bool clone);
			 RowCollectionImplBin2DFixedCellLength();
		public:
			virtual ~RowCollectionImplBin2DFixedCellLength();
	};

}

}

}
