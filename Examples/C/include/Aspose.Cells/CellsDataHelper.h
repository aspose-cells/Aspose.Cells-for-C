#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "RawCellValueType.h"
//#include "System/StringHelperPal.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CELLSDATAHELPER() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRowCollection;
class IStringPool;
class CellData;
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
class Cell;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsDataHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::Cell> GetStandaloneCell(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static void SetCellReadValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			static void SetStringValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> pool);
			static void ThrowInvalidStringValueException(intrusive_ptr<Aspose::Cells::System::String> cellName);
			static void SetCellReadStyle(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Style> style);
			static void Derefer(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			static Aspose::Cells::System::Int32 RemoveRange(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			static Aspose::Cells::System::Int32 RemoveRange(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			static Aspose::Cells::System::Int32 RemoveBetweenPosition(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			static void Remove(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 pos);
			 CellsDataHelper();
		public:
			virtual ~CellsDataHelper();
	};

}

}

}
