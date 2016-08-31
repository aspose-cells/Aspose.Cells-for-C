#pragma once
#include "PropIdOffset.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_PROPIDOFFSETCOLLECTION() 


namespace Aspose {
namespace Ss {
	class PropIdOffsetCollection : public Aspose::Cells::System::Collections::ArrayList
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 GetOffset(Aspose::Cells::System::Int32 propId);
			intrusive_ptr<Aspose::Ss::PropIdOffset> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Ss::PropIdOffset> value);
			 PropIdOffsetCollection();
		public:
			virtual ~PropIdOffsetCollection();
	};

}

}
