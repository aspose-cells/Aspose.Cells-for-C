#pragma once
#include "System/Object.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
//#include "System/Int32.h"
#define STATIC_LOOKUPFUNCTION() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class LookUpFunction : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> CalculateArrayForm(intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , bool date1904);
			 LookUpFunction();
		public:
			virtual ~LookUpFunction();
	};

}

}

}
