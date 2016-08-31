#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "Range.h"
#define STATIC_RANGECOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API RangeCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class RangeCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 RangeCollection();
			intrusive_ptr<Aspose::Cells::Range> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Range> range);
		public:
			virtual ~RangeCollection();
	};

}

}
