#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Byte.h"
#include "System/UInt32.h"
#include "System/Drawing/FontStyle.h"
#include "System/Array1D.h"
//#include "System/Exception.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_FONTMETRICS() 

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
	class FontMetrics : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 version;
			Aspose::Cells::System::Int16 xAvgCharWidth;
			Aspose::Cells::System::UInt16 usWeightClass;
			Aspose::Cells::System::UInt16 usWidthClass;
			Aspose::Cells::System::UInt16 fsType;
			Aspose::Cells::System::Int16 ySubscriptXSize;
			Aspose::Cells::System::Int16 ySubscriptYSize;
			Aspose::Cells::System::Int16 ySubscriptXOffset;
			Aspose::Cells::System::Int16 ySubscriptYOffset;
			Aspose::Cells::System::Int16 ySuperscriptXSize;
			Aspose::Cells::System::Int16 ySuperscriptYSize;
			Aspose::Cells::System::Int16 ySuperscriptXOffset;
			Aspose::Cells::System::Int16 ySuperscriptYOffset;
			Aspose::Cells::System::Int16 yStrikeoutSize;
			Aspose::Cells::System::Int16 yStrikeoutPosition;
			Aspose::Cells::System::Int16 sFamilyClass;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> panose;
			Aspose::Cells::System::UInt32 ulUnicodeRange1;
			Aspose::Cells::System::UInt32 ulUnicodeRange2;
			Aspose::Cells::System::UInt32 ulUnicodeRange3;
			Aspose::Cells::System::UInt32 ulUnicodeRange4;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> achVendID;
			Aspose::Cells::System::UInt16 fsSelection;
			Aspose::Cells::System::UInt16 usFirstCharIndex;
			Aspose::Cells::System::UInt16 usLastCharIndex;
			Aspose::Cells::System::Int16 sTypoAscender;
			Aspose::Cells::System::Int16 sTypoDescender;
			Aspose::Cells::System::Int16 sTypoLineGap;
			Aspose::Cells::System::UInt16 usWinAscent;
			Aspose::Cells::System::UInt16 usWinDescent;
			Aspose::Cells::System::UInt32 ulCodePageRange1;
			Aspose::Cells::System::UInt32 ulCodePageRange2;
			Aspose::Cells::System::Int16 sxHeight;
			Aspose::Cells::System::Int16 sCapHeight;
			Aspose::Cells::System::UInt16 usDefaultChar;
			Aspose::Cells::System::UInt16 usBreakChar;
			Aspose::Cells::System::UInt16 usMaxContext;
			Aspose::Cells::System::Drawing::FontStyle GetStyle();
			 FontMetrics();
			 FontMetrics(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
		public:
			virtual ~FontMetrics();
	};

}

}

}

}

}
