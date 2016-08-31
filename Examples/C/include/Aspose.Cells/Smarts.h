#pragma once
#include "SmartMarker.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_SMARTS() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
	class Smarts : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
	public:

			 Smarts(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			void Add(intrusive_ptr<Aspose::Cells::SmartMarker> smartMarker);
			void Insert(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::SmartMarker> smartMarker);
			intrusive_ptr<Aspose::Cells::SmartMarker> GetIndexObject(Aspose::Cells::System::Int32 index);
			 Smarts();
		public:
			virtual ~Smarts();
	};

}

}
