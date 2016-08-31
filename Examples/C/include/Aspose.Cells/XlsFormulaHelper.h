#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSFORMULAHELPER() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
	class XlsFormulaHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 GetRefRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Byte flag);
			static Aspose::Cells::System::Int32 GetRefColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Byte flag);
			 XlsFormulaHelper();
		public:
			virtual ~XlsFormulaHelper();
	};

}

}

}

}
