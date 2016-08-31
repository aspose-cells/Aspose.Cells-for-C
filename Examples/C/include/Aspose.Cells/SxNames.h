#pragma once
#include "System/Object.h"
#include "SxName.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#define STATIC_SXNAMES() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxNames : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxName> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(intrusive_ptr<Aspose::Cells::Pivot::SxName> sxName);
			 SxNames();
		public:
			virtual ~SxNames();
	};

}

}

}
