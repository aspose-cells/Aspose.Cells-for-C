#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_TABLEDIRENTRY() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryReader;
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
	class TableDirEntry : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Tag;
			Aspose::Cells::System::Int32 Checksum;
			Aspose::Cells::System::Int32 Offset;
			Aspose::Cells::System::Int32 Length;
			 static const Aspose::Cells::System::Int32 StructureSize;
			 TableDirEntry(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			static Aspose::Cells::System::Int32 CalculateChecksum(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			 TableDirEntry();
		public:
			virtual ~TableDirEntry();
	};

}

}

}

}

}
