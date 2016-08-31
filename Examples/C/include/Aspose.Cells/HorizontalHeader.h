#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/UInt32.h"
#include "System/Int16.h"
#include "System/UInt16.h"
//#include "System/NotSupportedException.h"
#define STATIC_HORIZONTALHEADER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryWriter;
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
	class HorizontalHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt32 Version;
			Aspose::Cells::System::Int16 Ascender;
			Aspose::Cells::System::Int16 Descender;
			Aspose::Cells::System::Int16 LineGap;
			Aspose::Cells::System::UInt16 AdvanceWidthMax;
			Aspose::Cells::System::Int16 MinLeftSideBearing;
			Aspose::Cells::System::Int16 MinRightSideBearing;
			Aspose::Cells::System::Int16 XMaxExtent;
			Aspose::Cells::System::Int16 CaretSlopeRise;
			Aspose::Cells::System::Int16 CaretSlopeRun;
			Aspose::Cells::System::Int16 CaretOffset;
			Aspose::Cells::System::Int16 r1;
			Aspose::Cells::System::Int16 r2;
			Aspose::Cells::System::Int16 r3;
			Aspose::Cells::System::Int16 r4;
			Aspose::Cells::System::Int16 MetricDataFormat;
			Aspose::Cells::System::UInt16 NumberOfHMetrics;
			 HorizontalHeader(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ToMemoryStream();
			 HorizontalHeader();
		public:
			virtual ~HorizontalHeader();
	};

}

}

}

}

}
