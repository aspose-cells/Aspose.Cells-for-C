#pragma once
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Byte.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "FormulaToken.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
#define STATIC_FORMULACRITERIA() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaCriteria : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Init(intrusive_ptr<Aspose::Cells::System::Object> criteria , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
	public:

			Aspose::Cells::System::Byte Oper;
			intrusive_ptr<Aspose::Cells::System::String> GetOpCode();
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			intrusive_ptr<Aspose::Cells::System::Object> NumberValue;
			static intrusive_ptr<Aspose::Cells::System::Object> CreateCriteria(intrusive_ptr<Aspose::Cells::System::Object> criteria , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , bool isArray);
			 FormulaCriteria(intrusive_ptr<Aspose::Cells::System::Object> criteria , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 FormulaCriteria();
		public:
			virtual ~FormulaCriteria();
	};

}

}

}
