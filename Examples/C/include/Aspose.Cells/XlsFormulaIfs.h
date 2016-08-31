#pragma once
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSFORMULAIFS() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Cell;
class FormulaTree;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class CachedRange;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsTree2Value;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
	class XlsFormulaIfs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> GetValue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> range , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOffset);
			static intrusive_ptr<Aspose::Cells::System::Object> IsTrue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOfffset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> opCode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criterias);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetRowColumn(intrusive_ptr<Aspose::Cells::System::Object> range);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetMinRowColumn(intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateArray(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> opCode , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> criterias , Aspose::Cells::System::Int32 type);
			static intrusive_ptr<Aspose::Cells::System::Object> IsTrue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOfffset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> opCode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criterias , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> filterFlags , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> numbericCriterias);
			static intrusive_ptr<Aspose::Cells::System::Object> Filter(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::FormulaUtility::CachedRange> cachedRange , intrusive_ptr<Aspose::Cells::System::String> opCode , intrusive_ptr<Aspose::Cells::System::Object> criteria , Aspose::Cells::System::Int32 rows , Aspose::Cells::System::Int32 columns , intrusive_ptr<Aspose::Cells::System::Object> numbericCriteria);
			static intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> opCode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criterias , Aspose::Cells::System::Int32 type);
			 XlsFormulaIfs();
		public:
			virtual ~XlsFormulaIfs();
	};

}

}

}

}
