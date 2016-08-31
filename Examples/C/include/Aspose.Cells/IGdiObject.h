#pragma once
#include "System/UInt32.h"
#include "System/Object.h"
#include "GdiObjectType.h"
#define STATIC_IGDIOBJECT() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class IGdiObject : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::Internal::Rendering::GdiObjectType GetType() = 0;
			virtual Aspose::Cells::System::UInt32 GetHandle() = 0;
			virtual void SetHandle(Aspose::Cells::System::UInt32 value) = 0;
		public:
	};

}

}

}

}
