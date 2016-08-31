#pragma once
#include "System/IO/Stream.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_IIMAGEDATACONTAINER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class IImageDataContainer : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData() = 0;
			virtual void SaveData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data) = 0;
			virtual intrusive_ptr<Aspose::Cells::System::IO::Stream> GetStream() = 0;
		public:
	};

}

}

}

}
