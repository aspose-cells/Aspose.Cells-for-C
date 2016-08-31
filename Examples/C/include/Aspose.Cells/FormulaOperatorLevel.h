#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_FORMULAOPERATORLEVEL() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaOperatorLevel : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::Int32 TCompare;
			 static const Aspose::Cells::System::Int32 TContact;
			 static const Aspose::Cells::System::Int32 TAdd;
			 static const Aspose::Cells::System::Int32 TMul;
			 static const Aspose::Cells::System::Int32 TPower;
			 static const Aspose::Cells::System::Int32 TList;
			 static const Aspose::Cells::System::Int32 TIntersection;
			 static const Aspose::Cells::System::Int32 TRange;
			 FormulaOperatorLevel();
		public:
			virtual ~FormulaOperatorLevel();
	};

}

}

}
