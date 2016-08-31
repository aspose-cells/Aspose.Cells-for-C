#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
#include "System/String.h"
//#include "System/Math.h"
//#include "System/Char.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array2D.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
//#include "System/Type.h"
#define STATIC_XLSXVLOOKUP() 

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
	class XlsxVLookUp : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Object> GetVLookupValueInRange(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , bool flag);
			static intrusive_ptr<Aspose::Cells::System::Object> GetVLookupStringValueInRangeFalse(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::System::String> child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values);
			static intrusive_ptr<Aspose::Cells::System::Object> GetVLookupStringValueInRangeTrue(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::System::String> child1 , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values);
			static intrusive_ptr<Aspose::Cells::System::Object> GetVLookupDoubleValueInRange(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , Aspose::Cells::System::Double child1 , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values , bool flag);
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> cal , intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			static Aspose::Cells::System::Int32 GetLastValueIndex(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> lookArray , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			static Aspose::Cells::System::Int32 GetStartValueIndex(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> lookArray , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			 XlsxVLookUp();
		public:
			virtual ~XlsxVLookUp();
	};

}

}

}

}
