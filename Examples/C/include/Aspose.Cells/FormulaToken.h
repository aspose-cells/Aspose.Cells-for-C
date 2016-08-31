#pragma once
#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_FORMULATOKEN() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaToken : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::Byte OPR_ADD;
			 static const Aspose::Cells::System::Byte OPR_MINUS;
			 static const Aspose::Cells::System::Byte OPR_MULTIPLE;
			 static const Aspose::Cells::System::Byte OPR_DIV;
			 static const Aspose::Cells::System::Byte OPR_POWER;
			 static const Aspose::Cells::System::Byte OPR_CONCAT;
			 static const Aspose::Cells::System::Byte OPR_LT;
			 static const Aspose::Cells::System::Byte OPR_LE;
			 static const Aspose::Cells::System::Byte OPR_EQ;
			 static const Aspose::Cells::System::Byte OPR_GE;
			 static const Aspose::Cells::System::Byte OPR_GT;
			 static const Aspose::Cells::System::Byte OPR_NE;
			 static const Aspose::Cells::System::Byte OPR_INTERSECT;
			 static const Aspose::Cells::System::Byte OPR_LIST;
			 static const Aspose::Cells::System::Byte OPR_RANGE;
			 static const Aspose::Cells::System::Byte OPR_UPLUS;
			 static const Aspose::Cells::System::Byte OPR_UMINUS;
			 static const Aspose::Cells::System::Byte OPR_PERCENT;
			 static const Aspose::Cells::System::Byte OPR_PAREN;
			 static const Aspose::Cells::System::Byte MISS;
			 FormulaToken();
		public:
			virtual ~FormulaToken();
	};

}

}

}
