#pragma once
//#include "System/Int64.h"
#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#define STATIC_HORIZONTALDEVICEMETRICS() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class DeviceRecord;
class TableDirEntry;
}
}
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryReader;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class HorizontalDeviceMetrics : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 HorizontalDeviceMetrics();
			 HorizontalDeviceMetrics(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> hdmx , Aspose::Cells::System::Int32 numGlyphs);
			Aspose::Cells::System::UInt16 TableVersion;
			Aspose::Cells::System::Int16 NumberOfDeviceRecords;
			Aspose::Cells::System::Int32 SizeOfDeviceRecord;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Rendering::TrueType::DeviceRecord*>> Records;
		public:
			virtual ~HorizontalDeviceMetrics();
	};

}

}

}

}

}
