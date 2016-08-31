#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#define STATIC_TTTABLE() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryWriter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class TTTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 virtual void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ToMemoryStream();
			 TTTable();
		public:
			virtual ~TTTable();
	};

}

}

}

}

}
