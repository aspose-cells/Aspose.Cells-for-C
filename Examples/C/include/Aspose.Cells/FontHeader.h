#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/String.h"
#include "System/UInt16.h"
//#include "System/NotSupportedException.h"
#define STATIC_FONTHEADER() 

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
	class FontHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt32 Version;
			Aspose::Cells::System::UInt32 Revision;
			Aspose::Cells::System::UInt32 CheckSumAdjustment;
			Aspose::Cells::System::UInt32 MagicNumber;
			Aspose::Cells::System::UInt16 Flags;
			Aspose::Cells::System::UInt16 UnitsPerEm;
			Aspose::Cells::System::Int16 XMin;
			Aspose::Cells::System::Int16 YMin;
			Aspose::Cells::System::Int16 XMax;
			Aspose::Cells::System::Int16 YMax;
			Aspose::Cells::System::UInt16 MacStyle;
			Aspose::Cells::System::UInt16 LowestRecPpem;
			Aspose::Cells::System::Int16 FontDirectionHint;
			Aspose::Cells::System::Int16 IndexToLocFormat;
			Aspose::Cells::System::Int16 GlyphDataFormat;
			 FontHeader(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			 FontHeader();
		public:
			virtual ~FontHeader();
	};

}

}

}

}

}
