#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/UInt16.h"
#define STATIC_CFFINDEX() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class CffReader;
}
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class CffIndex : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mOffsetArray;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mDataArray;
			Aspose::Cells::System::Int32 mCount;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffReader> mReader;
			Aspose::Cells::System::Int16 mOffSize;
	public:

			 CffIndex(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CffReader> reader);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetDataArray();
			 CffIndex();
		public:
			virtual ~CffIndex();
	};

}

}

}

}

}
