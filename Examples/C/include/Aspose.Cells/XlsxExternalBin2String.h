#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_XLSXEXTERNALBIN2STRING() 

namespace Aspose {
namespace Cells {
class ExternName;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxExternalBin2String : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 XlsxExternalBin2String();
			intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::ExternName> nameX , bool is2003);
		public:
			virtual ~XlsxExternalBin2String();
	};

}

}

}

}
