#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_CIRCULARDATA() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CircularData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaTree> Tree;
			Aspose::Cells::System::Int32 Count;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			bool End;
			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::Cell> Cell;
			 CircularData();
		public:
			virtual ~CircularData();
	};

}

}

}
