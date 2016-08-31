#pragma once
#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Diagnostics/Debug.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_CFFREADER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class CffIndex;
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
	class CffReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> mReader;
	public:

			 CffReader(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			Aspose::Cells::System::Int16 ReadCard8();
			Aspose::Cells::System::UInt16 ReadCard16();
			Aspose::Cells::System::Int16 ReadOffSize();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ReadOffsets(Aspose::Cells::System::Int16 offSize , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> GetBaseReader();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffIndex> ReadIndex();
			 CffReader();
		public:
			virtual ~CffReader();
	};

}

}

}

}

}
