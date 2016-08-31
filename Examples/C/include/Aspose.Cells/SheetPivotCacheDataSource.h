#pragma once
//#include "System/Text/StringBuilder.h"
#include "PivotTableSourceType.h"
#include "PivotCacheDataSource.h"
//#include "System/Char.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_SHEETPIVOTCACHEDATASOURCE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
class Range;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class Bin2007To2003;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SheetPivotCacheDataSource : public Aspose::Cells::Pivot::PivotCacheDataSource
	{
	private:

			void Init_Vars();
	public:

			 virtual void Refresh();
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheDataSource> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			 virtual void InsertRowsInSmart(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 virtual void InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void ConvertVersion(bool up , intrusive_ptr<Aspose::Cells::FormulaUtility::Bin2007To2003> bin2007To2003);
			 virtual Aspose::Cells::Pivot::PivotTableSourceType GetType();
			 virtual void DoAfterRead();
			Aspose::Cells::Pivot::PivotCache* _u_pivotCache;
			intrusive_ptr<Aspose::Cells::System::String> KeptSource;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _BinaryFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula();
			void SetBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::Range> GetRange();
			intrusive_ptr<Aspose::Cells::Range> _Range;
			intrusive_ptr<Aspose::Cells::Range> InputRange;
			 SheetPivotCacheDataSource(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSourceData();
			 virtual void SetSourceData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::System::String> GetSource();
			static intrusive_ptr<Aspose::Cells::System::String> ToRefto(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> relMap , intrusive_ptr<Aspose::Cells::System::String> relId , intrusive_ptr<Aspose::Cells::System::String> sheetName , intrusive_ptr<Aspose::Cells::System::String> name);
			void SetSource(intrusive_ptr<Aspose::Cells::System::String> source , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 SheetPivotCacheDataSource();
		public:
			virtual ~SheetPivotCacheDataSource();
	};

}

}

}
