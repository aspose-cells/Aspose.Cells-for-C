#pragma once
//#include "System/Double.h"
//#include "System/Boxing.h"
//#include "System/DateTime.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSXFORMULAIFS() 

namespace Aspose {
namespace Cells {
class CellArea3D;
class WorksheetCollection;
class Cell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FormulaCriteria;
class CachedRange;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxTree2Value;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxFormulaIfs : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateOne(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::CachedRange*>> cachedRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::FormulaCriteria*>> criteriaParams , Aspose::Cells::System::Int32 type , bool isIfs , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowColumnCount);
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> GetValue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> range , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOffset);
			static intrusive_ptr<Aspose::Cells::System::Object> IsTrue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOfffset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> cachedValue , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::FormulaCriteria*>> criterias);
			static intrusive_ptr<Aspose::Cells::System::Object> IsTrue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOfffset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> cachedValue , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::FormulaCriteria*>> criterias , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> filterFlags);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetRowColumn(intrusive_ptr<Aspose::Cells::System::Object> range);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> IsSameRowColumn(intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetMinRowColumn(intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges);
			static intrusive_ptr<Aspose::Cells::CellArea3D> ExpandSumRange(intrusive_ptr<Aspose::Cells::CellArea3D> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges);
			static intrusive_ptr<Aspose::Cells::System::Object> Filter(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::FormulaUtility::CachedRange> cachedRange , intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaCriteria> formulaCriteria , Aspose::Cells::System::Int32 rows , Aspose::Cells::System::Int32 columns);
			static intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::Cell> currentCell , intrusive_ptr<Aspose::Cells::System::Object> sumRange , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaRanges , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> criteriaParams , Aspose::Cells::System::Int32 type , bool isIfs , bool isArray);
			 XlsxFormulaIfs();
		public:
			virtual ~XlsxFormulaIfs();
	};

}

}

}

}
