#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
//#include "System/Type.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
#define STATIC_XLSXMATCHCALCULATOR() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
class Workbook;
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
	class XlsxMatchCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator;
			Aspose::Cells::Workbook* m_Workbook;
			intrusive_ptr<Aspose::Cells::System::Object> MatchInRange(intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 destColumn , Aspose::Cells::System::Int32 flag);
			intrusive_ptr<Aspose::Cells::System::Object> MatchStringValueInRange(intrusive_ptr<Aspose::Cells::System::String> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , Aspose::Cells::System::Int32 matchType);
			intrusive_ptr<Aspose::Cells::System::Object> GetItem(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , bool isDouble);
			Aspose::Cells::System::Int32 FindItem(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 searchedIndex , Aspose::Cells::System::Int32 boundIndex , bool next , bool isVertical , bool isDouble);
			intrusive_ptr<Aspose::Cells::System::Object> BinarySearch(Aspose::Cells::System::Double child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , Aspose::Cells::System::Int32 flag);
			intrusive_ptr<Aspose::Cells::System::Object> MatchDoubleValueInRange(Aspose::Cells::System::Double child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , Aspose::Cells::System::Int32 flag);
	public:

			 XlsxMatchCalculator(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateMATCH(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			static Aspose::Cells::System::Int32 GetLastValueIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> lookArray , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			static Aspose::Cells::System::Int32 GetStartValueIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> lookArray , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			 XlsxMatchCalculator();
		public:
			virtual ~XlsxMatchCalculator();
	};

}

}

}

}
