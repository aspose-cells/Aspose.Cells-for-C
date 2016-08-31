#pragma once
#include "System/Object.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Int32.h"
#define STATIC_MODE() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class Mode : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> Calculate(intrusive_ptr<Aspose::Cells::System::Object> child);
			 Mode();
		public:
			virtual ~Mode();
	};

}

}

}
