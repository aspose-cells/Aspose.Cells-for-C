#pragma once
#include "System/Object.h"
#include "System/Collections/CollectionBase.h"
#include "SxNamePair.h"
//#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_SXNAMEPAIRS() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxNamePairs : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxNamePair> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Pivot::SxNamePair> pair);
			 SxNamePairs();
		public:
			virtual ~SxNamePairs();
	};

}

}

}
