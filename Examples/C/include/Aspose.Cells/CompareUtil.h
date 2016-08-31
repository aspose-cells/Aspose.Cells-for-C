#pragma once
//#include "System/Exception.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
//#include "System/Type.h"
//#include "System/Math.h"
//#include "System/Char.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_COMPAREUTIL() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class FormulaCriteria;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CompareUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 Compare(Aspose::Cells::System::Double doubleValue , Aspose::Cells::System::Double compareValue , intrusive_ptr<Aspose::Cells::System::String> opCode);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::String> stringValue , intrusive_ptr<Aspose::Cells::System::String> compareValue , intrusive_ptr<Aspose::Cells::System::String> opCode);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::String> stringValue , intrusive_ptr<Aspose::Cells::System::String> compareValue , intrusive_ptr<Aspose::Cells::System::String> opCode , bool isReg);
			static Aspose::Cells::System::Int32 CompareInDataBase(intrusive_ptr<Aspose::Cells::System::String> stringValue , intrusive_ptr<Aspose::Cells::System::String> compareValue , intrusive_ptr<Aspose::Cells::System::String> opCode);
			static Aspose::Cells::System::Double GetNullCompareDoubleValue(intrusive_ptr<Aspose::Cells::System::Object> object1 , bool date1904);
			static Aspose::Cells::System::Double CompareTo(Aspose::Cells::System::Double doubleValue1 , Aspose::Cells::System::Double doubleValue2);
			static intrusive_ptr<Aspose::Cells::System::Object> CompareTo(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2 , bool date1904 , bool ignoreCase);
			static intrusive_ptr<Aspose::Cells::System::Object> Compare(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2 , intrusive_ptr<Aspose::Cells::System::String> opCode , bool date1904 , bool isReg);
			static intrusive_ptr<Aspose::Cells::System::Object> Compare(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2 , intrusive_ptr<Aspose::Cells::System::String> opCode , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> CompareInDataBase(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2 , intrusive_ptr<Aspose::Cells::System::String> opCode , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> CompareIf(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::FormulaUtility::FormulaCriteria> c , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> CompareIf(intrusive_ptr<Aspose::Cells::System::Object> obj1 , intrusive_ptr<Aspose::Cells::System::Object> obj2 , intrusive_ptr<Aspose::Cells::System::String> opCode , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , intrusive_ptr<Aspose::Cells::System::Object> numbericObj2);
			static bool CompareDouble(Aspose::Cells::System::Double doubleValue1 , Aspose::Cells::System::Double doubleValue2 , intrusive_ptr<Aspose::Cells::System::String> opCode);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> SplitCriteria(intrusive_ptr<Aspose::Cells::System::String> stringValue , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 CompareUtil();
		public:
			virtual ~CompareUtil();
	};

}

}

}
