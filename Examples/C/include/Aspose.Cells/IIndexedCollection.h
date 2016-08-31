#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_IINDEXEDCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class IIndexedCollection : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetCount() = 0;
			virtual Aspose::Cells::System::Int32 GetLowPosition() = 0;
			virtual Aspose::Cells::System::Int32 GetHighPostion() = 0;
			virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 fromPos , Aspose::Cells::System::Int32 sequenceDistance) = 0;
			virtual Aspose::Cells::System::Int32 GetMiddlePosition(Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high) = 0;
			virtual Aspose::Cells::System::Int32 GetMaxDistancePosition(Aspose::Cells::System::Int32 fromPos , Aspose::Cells::System::Int32 indexDistance) = 0;
			virtual Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position) = 0;
		public:
	};

}

}

}
