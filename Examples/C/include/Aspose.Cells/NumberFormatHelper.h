#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/RegularExpressions/GroupCollection.h"
#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/Text/RegularExpressions/Group.h"
//#include "System/Char.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Array1D.h"
#define STATIC_NUMBERFORMATHELPER() 


namespace Aspose {
namespace Cells {
namespace Helper {
	class NumberFormatHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> FReg;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> FGroupReg;
			static intrusive_ptr<Aspose::Cells::System::String> GetFormat(Aspose::Cells::System::Double& doubleValue , intrusive_ptr<Aspose::Cells::System::String> format);
			 NumberFormatHelper();
		public:
			virtual ~NumberFormatHelper();
	};

}

}

}
