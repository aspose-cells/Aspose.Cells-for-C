#pragma once
#include "System/Int32.h"
//#include "System/Collections/IDictionaryEnumerator.h"
#include "System/Collections/ArrayList.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#define STATIC_FORMULARANGELIST() 

namespace Aspose {
namespace Cells {
class FormulaRange;
class Cell;
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
	class FormulaRangeList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RangeList;
			void AddRange(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::FormulaRange> frange);
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRangesByFather(intrusive_ptr<Aspose::Cells::Cell> father);
			void RemoveAll();
			void RemoveRange(intrusive_ptr<Aspose::Cells::Cell> father);
			Aspose::Cells::System::Int32 AddRange(intrusive_ptr<Aspose::Cells::Cell> father , intrusive_ptr<Aspose::Cells::Worksheet> ws , Aspose::Cells::System::Int32 left , Aspose::Cells::System::Int32 top , Aspose::Cells::System::Int32 right , Aspose::Cells::System::Int32 bottom);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> BeObservedByCells(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FormulaRangeList();
		public:
			virtual ~FormulaRangeList();
	};

}

}
