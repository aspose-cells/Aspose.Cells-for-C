#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/Collections/IComparer.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_SORTEDCELLCOMPARE() 

namespace Aspose {
namespace Cells {
class Cells;
class DataSorterKey;
}
}

namespace Aspose {
namespace Cells {
	class SortedCellCompare : public Aspose::Cells::System::Collections::IComparer , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::DataSorterKey> _Key;
			Aspose::Cells::Cells* _cells;
	public:

			 SortedCellCompare(intrusive_ptr<Aspose::Cells::DataSorterKey> key , intrusive_ptr<Aspose::Cells::Cells> cells);
			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::Object> x , intrusive_ptr<Aspose::Cells::System::Object> y);
			 SortedCellCompare();
		public:
			virtual ~SortedCellCompare();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
