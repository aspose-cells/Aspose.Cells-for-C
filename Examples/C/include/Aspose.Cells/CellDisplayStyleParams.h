#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CELLDISPLAYSTYLEPARAMS() 

namespace Aspose {
namespace Cells {
class Cell;
class Cells;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellDisplayStyleParams : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Style> DisplayStyle;
			Aspose::Cells::System::Int32 CellXF;
			bool Original;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ICFStyle;
			intrusive_ptr<Aspose::Cells::Cell> TopLeftCell;
			 CellDisplayStyleParams();
			 CellDisplayStyleParams(Aspose::Cells::System::Int32 cellXF , intrusive_ptr<Aspose::Cells::Cells> cells);
			void Init(Aspose::Cells::System::Int32 cellXF , intrusive_ptr<Aspose::Cells::Cells> cells);
			void RequireCopy();
		public:
			virtual ~CellDisplayStyleParams();
	};

}

}

}
