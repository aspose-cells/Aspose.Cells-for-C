#pragma once
#include "SxFormat.h"
#include "System/Object.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SXFORMATCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxFormatCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotTable* PivotTable;
			 SxFormatCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> PivotTable);
			intrusive_ptr<Aspose::Cells::Pivot::SxFormat> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Pivot::SxFormat> sxFormat);
			void Remove(intrusive_ptr<Aspose::Cells::Pivot::SxFormat> format);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxFormatCollection> source);
			 SxFormatCollection();
		public:
			virtual ~SxFormatCollection();
	};

}

}

}
