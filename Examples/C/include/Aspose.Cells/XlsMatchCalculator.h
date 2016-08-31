#pragma once
//#include "System/Math.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
#include "System/Double.h"
//#include "System/Array.h"
//#include "System/DateTime.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
#define STATIC_XLSMATCHCALCULATOR() 

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
	class XlsMatchCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator;
			Aspose::Cells::Workbook* m_Workbook;
			bool IsEmpty(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> lookArray , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			intrusive_ptr<Aspose::Cells::System::Object> MatchValueInRange(intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 destColumn , Aspose::Cells::System::Int32 flag);
			intrusive_ptr<Aspose::Cells::System::Object> MatchStringValueInRange(intrusive_ptr<Aspose::Cells::System::String> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , Aspose::Cells::System::Int32 matchType);
			intrusive_ptr<Aspose::Cells::System::Object> MatchDoubleValueInRange(Aspose::Cells::System::Double child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Int32 searchedIndex , bool isVertical , Aspose::Cells::System::Int32 flag);
	public:

			 XlsMatchCalculator(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateMATCH(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			 XlsMatchCalculator();
		public:
			virtual ~XlsMatchCalculator();
	};

}

}

}

}
