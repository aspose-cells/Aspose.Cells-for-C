#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ISPACEALLOCATOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ISpaceAllocator : public Aspose::Cells::System::Object
	{
	public:

			virtual bool Allocate(Aspose::Cells::System::Int32 freeSpace) = 0;
			virtual Aspose::Cells::System::Int32 GetAllocatedValue() = 0;
		public:
	};

}

}

}
