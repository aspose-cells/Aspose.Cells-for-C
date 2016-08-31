#pragma once
//#include "System/Boxing.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Byte.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_VALIDATIONHELPER() 

namespace Aspose {
namespace Cells {
class Validation;
class Cell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
	class ValidationHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool CalculateListValue(intrusive_ptr<Aspose::Cells::Validation> dv , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Object> value);
	public:

			static bool GetValue(intrusive_ptr<Aspose::Cells::Validation> dv , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> CalculateListValue(intrusive_ptr<Aspose::Cells::Validation> dv , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool GetListValue(intrusive_ptr<Aspose::Cells::System::String> cellValue , intrusive_ptr<Aspose::Cells::System::String> str);
			 ValidationHelper();
		public:
			virtual ~ValidationHelper();
	};

}

}
