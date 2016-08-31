#pragma once
#include "System/Object.h"
#include "System/IO/MemoryStream.h"
#include "System/UInt32.h"
//#include "System/String.h"
#include "System/UInt16.h"
//#include "System/NotSupportedException.h"
#define STATIC_MAXIMUMPROFILE() 

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
	class MaximumProfile : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt32 Version;
			Aspose::Cells::System::UInt16 NumGlyphs;
			Aspose::Cells::System::UInt16 MaxPoints;
			Aspose::Cells::System::UInt16 MaxContours;
			Aspose::Cells::System::UInt16 MaxCompositePoints;
			Aspose::Cells::System::UInt16 MaxCompositeContours;
			Aspose::Cells::System::UInt16 MaxZones;
			Aspose::Cells::System::UInt16 MaxTwilightPoints;
			Aspose::Cells::System::UInt16 MaxStorage;
			Aspose::Cells::System::UInt16 MaxFunctionDefs;
			Aspose::Cells::System::UInt16 MaxInstructionDefs;
			Aspose::Cells::System::UInt16 MaxStackElements;
			Aspose::Cells::System::UInt16 MaxSizeOfInstructions;
			Aspose::Cells::System::UInt16 MaxComponentElements;
			Aspose::Cells::System::UInt16 MaxComponentDepth;
			 MaximumProfile(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ToMemoryStream();
			 MaximumProfile();
		public:
			virtual ~MaximumProfile();
	};

}

}

}

}

}
