#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_IPOSITIONENUMERATOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IPositionEnumerator : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 MoveNext() = 0;
			virtual void MoveToId(Aspose::Cells::System::Int32 id) = 0;
			virtual void MoveToPosition(Aspose::Cells::System::Int32 pos) = 0;
			virtual void Reset() = 0;
			virtual void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition) = 0;
		public:
	};

}

}

}
