#pragma once
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_FORMULARANGE() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
	class FormulaRange : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> RangeArea;
			Aspose::Cells::Worksheet* worksheet;
			 FormulaRange(intrusive_ptr<Aspose::Cells::Worksheet> ws , Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 right , Aspose::Cells::System::Int32 bottom);
			bool IsIn(intrusive_ptr<Aspose::Cells::Worksheet> ws , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FormulaRange();
		public:
			virtual ~FormulaRange();
	};

}

}
