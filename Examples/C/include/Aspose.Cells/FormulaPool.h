#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "FormulaCell.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMULAPOOL() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace Collections {
class IntArrayList;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class FormulaLeafPool;
}
}
}

namespace Aspose {
namespace Cells {
	class FormulaPool : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Worksheet* Sheet;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaCell*>> Table;
			Aspose::Cells::System::Int32 Count;
			Aspose::Cells::System::Int32 CeilingIndex;
			intrusive_ptr<Aspose::Cells::Collections::IntArrayList> FreeList;
			intrusive_ptr<Aspose::Cells::CellsSs::FormulaLeafPool> LeafPool;
			 FormulaPool(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::FormulaCell> GetIndexObject(Aspose::Cells::System::Int32 index);
			void InitLeafPool();
			void SetCalculationFlag(Aspose::Cells::System::Byte flag);
			void ChangeCellFormula(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaCell> fcNew);
			void Clear();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::FormulaCell> f);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void EnsureCapacity(Aspose::Cells::System::Int32 length);
			 FormulaPool();
		public:
			virtual ~FormulaPool();
	};

}

}
