#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_IFORMULACALLBACK() 


namespace Aspose {
namespace Cells {
	class IFormulaCallBack : public Aspose::Cells::System::Object
	{
	public:

			virtual void CellValueChanged(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 colIndex) = 0;
		public:
	};

}

}
