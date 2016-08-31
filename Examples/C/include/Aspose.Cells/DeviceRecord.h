#pragma once
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_DEVICERECORD() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
#ifdef WIN32

	class ASPOSE_CELLS_API DeviceRecord : public Aspose::Cells::System::Object
#else	class DeviceRecord : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Byte PixelSize;
			Aspose::Cells::System::Byte MaximumWidth;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Widths;
			 DeviceRecord();
		public:
			virtual ~DeviceRecord();
	};

}

}

}

}

}
