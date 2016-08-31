#pragma once
//#include "System/Array2D.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
//#include "System/Math.h"
#include "System/Double.h"
//#include "System/Type.h"
#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/DateTime.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XLSXHLOOKUP() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
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
	class XlsxHLookUp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Object> GetHLookupIndex(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , bool flag);
			static intrusive_ptr<Aspose::Cells::System::Object> GetHLookupIndex(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , Aspose::Cells::System::Double child1 , intrusive_ptr<Aspose::Cells::System::Array> child2 , bool flag);
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> CalculateHLOOKUP(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			 XlsxHLookUp();
		public:
			virtual ~XlsxHLookUp();
	};

}

}

}

}
