#pragma once
//#include "System/IO/Stream.h"
//#include "System/Exception.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Boxing.h"
//#include "System/InvalidOperationException.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/Math.h"
#include "TTTable.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CMAP() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class HorizontalMetrics;
class TTGlyphHashtable;
}
}
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryWriter;
class SortedIntegerList;
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
	class CMap : public Aspose::Cells::Internal::Rendering::TrueType::TTTable
	{
	private:

			void Init_Vars();
			void ReadFormat4(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			void ReadFormat12(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			void WriteFormat12(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			void WriteFormat4(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ReadUInt16Array(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , Aspose::Cells::System::Int32 count);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ReadInt16Array(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , Aspose::Cells::System::Int32 count);
			static void WriteInt16Array(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> data , intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			 static const Aspose::Cells::System::Int32 CMapFormat4;
			 static const Aspose::Cells::System::Int32 CMapFormat12;
	public:

			 CMap(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphHashtable> BuildGlyphs(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> hMetrics , intrusive_ptr<Aspose::Cells::System::String> fontName);
			void Subset(intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> charsToNewGlyphIndexes);
			 virtual void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			Aspose::Cells::System::Int32 PlatformId;
			Aspose::Cells::System::Int32 EncodingId;
			Aspose::Cells::System::Int32 Language;
			Aspose::Cells::System::Int32 SegCountX2;
			Aspose::Cells::System::Int32 SearchRange;
			Aspose::Cells::System::Int32 EntrySelector;
			Aspose::Cells::System::Int32 RangeShift;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> EndCodes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> StartCodes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> IdDeltas;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> IdRangeOffsets;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GlyphIds;
			bool HasFormat12;
			Aspose::Cells::System::Int32 Format12PlatformId;
			Aspose::Cells::System::Int32 Format12EncodingId;
			Aspose::Cells::System::Int32 Format12Language;
			Aspose::Cells::System::Int32 Format12GroupNums;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Format12StartCodes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Format12EndCodes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Format12StartCodeGlyphIndex;
			 static const Aspose::Cells::System::Int32 UnicodePlatformId;
			 static const Aspose::Cells::System::Int32 MacintoshPlatformId;
			 static const Aspose::Cells::System::Int32 MicrosoftPlatformId;
			 static const Aspose::Cells::System::Int32 MicrosoftSymbolEncodingId;
			 static const Aspose::Cells::System::Int32 MicrosoftUnicodeUcs2EncodingId;
			 static const Aspose::Cells::System::Int32 MicrosoftUnicodeUcs4EncodingId;
			 static const Aspose::Cells::System::Int32 MacintoshRomanEncodingId;
			 static const Aspose::Cells::System::Int32 MacintoshJapaneseEncodingId;
			 static const Aspose::Cells::System::Int32 MacintoshTraditionalChineseEncodingId;
			 static const Aspose::Cells::System::Int32 MacintoshKoreanEncodingId;
			 static const Aspose::Cells::System::Int32 MacintoshSimplifiedChineseEncodingId;
			 static const Aspose::Cells::System::Int32 MicrosoftEnglishUSLanguageId;
			 static const Aspose::Cells::System::Int32 MacintoshEnglishLanguageId;
			 CMap();
		public:
			virtual ~CMap();
	};

}

}

}

}

}
