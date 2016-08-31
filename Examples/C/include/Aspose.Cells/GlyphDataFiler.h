#pragma once
//#include "System/IO/Stream.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "GlyphFlags.h"
//#include "System/Int16.h"
#include "System/IO/MemoryStream.h"
#include "System/Collections/Hashtable.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Single.h"
#define STATIC_GLYPHDATAFILER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class TTGlyphData;
class HorizontalMetrics;
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
	class GlyphDataFiler : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ReadGlyphData(Aspose::Cells::System::Int32 oldGlyphIndex , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldGlyf , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphData> glyphData);
			void ReadCompositeGlyphData(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphData> glyphData , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldGlyf);
			Aspose::Cells::System::Single ReadF2Dot14();
			void ReadSimpleGlyphData(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphData> glyphData);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> SwitchKeyValue(intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> keyToValue);
			void ReadOldLocations(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldLoca);
			void WriteNewLocations();
			void WriteNewGlyphData(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldGlyf , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> oldToNewGlyphIndexes);
			static Aspose::Cells::System::Int32 GetChildGlyphLength(Aspose::Cells::Internal::Rendering::TrueType::GlyphFlags flags);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> mReader;
			bool mIsLocaShort;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> mHorizontalMetrics;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mOldLocations;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mNewLocations;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewLoca;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewGlyf;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewHmtx;
	public:

			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetNewLoca();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetNewGlyf();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetNewHmtx();
			 GlyphDataFiler(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , bool isLocaShort , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> horizontalMetrics);
			Aspose::Cells::System::Int32 SubsetGlyphData(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldLoca , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldGlyf , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetGlyphData(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldLoca , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> oldGlyf , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs , Aspose::Cells::System::Int32 EMHaight);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> newToOldGlyphIndexes;
			 GlyphDataFiler();
		public:
			virtual ~GlyphDataFiler();
	};

}

}

}

}

}
