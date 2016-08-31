#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/Text/RegularExpressions/MatchCollection.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
//#include "System/Text/RegularExpressions/Match.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_INT32CHARUTIL() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class Int32Char;
}
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class Int32CharUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 Int32CharUtil();
			intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> fourBytesCharRegex;
			bool isNormal;
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::Int32CharUtil> gInstance;
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Rendering::TrueType::Int32Char*>> StringToInt32CharArray(intrusive_ptr<Aspose::Cells::System::String> text);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Int32CharToInt16CharArray(Aspose::Cells::System::Int32 charCode);
			intrusive_ptr<Aspose::Cells::System::String> Int32CharToInt16CharString(Aspose::Cells::System::Int32 charCode);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::Int32CharUtil> GetInstance();
		public:
			virtual ~Int32CharUtil();
	};

}

}

}

}

}
