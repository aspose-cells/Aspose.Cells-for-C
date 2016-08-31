#pragma once
//#include "System/Char.h"
//#include "System/Boxing.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Int32.h"
//#include "System/String.h"
#include "System/Object.h"
#define STATIC_CLEANFUNCTION() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CleanFunction : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::System::Object> child);
			 CleanFunction();
		public:
			virtual ~CleanFunction();
	};

}

}

}
