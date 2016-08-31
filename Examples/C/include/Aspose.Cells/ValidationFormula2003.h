#pragma once
//#include "System/Globalization/CultureInfo.h"
//#include "System/StringHelperPal.h"
//#include "System/Exception.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Math.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
#include "Constants.h"
//#include "System/Double.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "System/Object.h"
//#include "System/DateTime.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_VALIDATIONFORMULA2003() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Validation;
}
}

namespace Aspose {
namespace Cells {
namespace ValidationObject {
namespace Validation2003 {
	class ValidationFormula2003 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_StartRow;
			Aspose::Cells::System::Int32 m_StartColumn;
			Aspose::Cells::Worksheet* m_Sheet;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormulaData(intrusive_ptr<Aspose::Cells::Validation> dv , Aspose::Cells::System::Int32 formulaIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetListData(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::String> m_ErrMsg;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetDateTimeData(intrusive_ptr<Aspose::Cells::System::String> formula , bool isTime);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetNumericData(intrusive_ptr<Aspose::Cells::System::String> formula);
	public:

			 ValidationFormula2003(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 GetStartRow();
			Aspose::Cells::System::Int32 GetStartColumn();
			void CreateFormula(intrusive_ptr<Aspose::Cells::Validation> dv);
			 ValidationFormula2003();
		public:
			virtual ~ValidationFormula2003();
	};

}

}

}

}
