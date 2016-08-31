#pragma once
#include "System/IO/Stream.h"
#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/IO/Directory.h"
//#include "System/UInt16.h"
//#include "System/Single.h"
//#include "System/Text/Encoding.h"
//#include "System/ArgumentNullException.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "NameString.h"
//#include "System/IO/FileStream.h"
//#include "System/NotSupportedException.h"
//#include "System/IO/Path.h"
//#include "System/IO/FileInfo.h"
//#include "System/Math.h"
//#include "System/IO/DirectoryInfo.h"
#include "System/Object.h"
#include "System/UInt32.h"
#include "System/Byte.h"
#include "System/Drawing/FontStyle.h"
#include "System/Collections/SortedList.h"
#include "System/Int32.h"
#include "SortedIntegerList.h"
//#include "System/Int16.h"
//#include "System/Int32Helper.h"
//#include "System/Boxing.h"
//#include "System/Int64.h"
//#include "System/Win32/RegistryKey.h"
//#include "System/Environment.h"
//#include "System/CharHelper.h"
#include "System/IO/MemoryStream.h"
//#include "System/StringHelperPal.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/IO/File.h"
//#include "System/Win32/Registry.h"
//#include "System/InvalidOperationException.h"
//#include "System/Exception.h"
#define STATIC_TTFONTFILER() 

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
namespace OpenXML {
class ZipFile;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class TTFont;
class HorizontalMetrics;
class PostScript;
class HorizontalHeader;
class TTFontFamily;
class FontHeader;
class CMap;
class TableDirEntry;
class MaximumProfile;
class FontMetrics;
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
	class TTFontFiler : public Aspose::Cells::System::Object
	{
	protected:

			static intrusive_ptr<Aspose::Cells::System::String> FontFileName;
	private:

			void Init_Vars();
			void WriteSubsettedFont(bool isMakeValidTtf , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			Aspose::Cells::System::Int32 WriteTableDirectory(bool isWriteAdditionalTables);
			void AddTables(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> tableNames , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dirEntries);
			void WriteTables(bool isWriteAdditionalTables);
			void ReadPostScript();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> ReadInternalFont();
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetInternalFont();
			void ReadFontResource();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::FontHeader> mFontHeader;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalHeader> mHorizontalHeader;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::MaximumProfile> mMaximumProfile;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mNames;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::FontMetrics> mMetrics;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> mHorizontalMetrics;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CMap> mCmap;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::PostScript> mPostScript;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> mWriter;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewLoca;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewGlyf;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> mNewHmtx;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gEnglishNameMap;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gEnglishFamilyName;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gTTFontCache;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gInstalledFonts;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gFontsCache;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gFamiliesCache;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SubsetTableNames;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> Static_Array_Init_SubsetTableNames();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SubsetTableNamesAdditional;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> Static_Array_Init_SubsetTableNamesAdditional();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> EntrySelectors;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Static_Array_Init_EntrySelectors();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> mCharsToNewGlyphIndexes;
			 static const Aspose::Cells::System::Int32 MicrosoftPlatformId;
			 static const Aspose::Cells::System::Int32 SymbolEncodingId;
			 static const Aspose::Cells::System::Int32 UnicodeEncodingId;
			 static const Aspose::Cells::System::Int32 EnglishUSLanguageId;
			 static const intrusive_ptr<Aspose::Cells::System::String> INTERNAL_FONT_FILE;
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> InteralTTFont;
			static intrusive_ptr<Aspose::Cells::System::Object> InternalTTFontLock;
	public:

			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FontDirs;
			static intrusive_ptr<Aspose::Cells::System::String> getFontDir();
			static void setFontDir(intrusive_ptr<Aspose::Cells::System::String> dir);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> FontFiles;
			static bool HasFontSetting();
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> GetFont(intrusive_ptr<Aspose::Cells::System::String> familyName , Aspose::Cells::System::Drawing::FontStyle style , bool isExactStyle);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> FetchFont(intrusive_ptr<Aspose::Cells::System::String> familyName , Aspose::Cells::System::Drawing::FontStyle style , bool isExactStyle);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> Read(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::String> fontFamily);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> ReadFontFamily(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::String> fontFamily);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> CreateFullMapping(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> mTrueTypeFont);
			void SubsetFont(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> font , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> charsToNewGlyphIndexes , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> oldToNewGlyphIndexes , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream , bool isMakeValidTtf , bool isFullEmbedding);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetGlyphDataSubset(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> font , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> oldToNewGlyphIndexes , Aspose::Cells::System::Int32 emHeight);
			void SubsetFont(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> font , intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream , bool isMakeValidTtf , bool isFullEmbedding);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFontFamily> ReadFamily(intrusive_ptr<Aspose::Cells::System::String> familyName);
			void ReadTableDirectory();
			void ReadFontHeader();
			void ReadHorizontalHeader();
			void ReadMaximumProfile();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ReadAllNames();
			void ReadNames();
			void ReadFontMetrics();
			void ReadHorizontalMetrics();
			void ReadCMapFormat4();
			Aspose::Cells::System::Int32 FindCMapFormat4();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> BuildFont();
			void SeekToTable(intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> FetchTableDirEntry(intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadTable(intrusive_ptr<Aspose::Cells::System::String> tableName);
			intrusive_ptr<Aspose::Cells::System::String> GetName(Aspose::Cells::Internal::Rendering::TrueType::NameString nameId);
			intrusive_ptr<Aspose::Cells::System::String> FetchName(Aspose::Cells::Internal::Rendering::TrueType::NameString nameId);
			Aspose::Cells::System::Int32 WriteTableDirectory();
			void WriteTables();
			void WriteTable(intrusive_ptr<Aspose::Cells::System::String> tableName , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> data);
			void CopyTable(intrusive_ptr<Aspose::Cells::System::String> tableName);
			void PadTable();
			Aspose::Cells::System::UInt32 ReadTTCCount(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> stream);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadFontNames(intrusive_ptr<Aspose::Cells::System::String> filename);
			void Win32ReadFonts();
			static intrusive_ptr<Aspose::Cells::System::String> GetEnglishFamilyName(intrusive_ptr<Aspose::Cells::System::String> originalFamilyName);
			void NotWin32ReadFonts();
			 TTFontFiler(bool isNeedInit);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> FindFont(Aspose::Cells::System::Drawing::FontStyle fontstyle , Aspose::Cells::System::Int32 c);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTFont> FindFont(Aspose::Cells::System::Drawing::FontStyle fontstyle , intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsFontCanShowText(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Drawing::FontStyle fontStyle , intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsFontCanShowText(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Drawing::FontStyle fontStyle , intrusive_ptr<Aspose::Cells::System::String> text , bool isCheckBold);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> mReader;
			intrusive_ptr<Aspose::Cells::System::Collections::SortedList> mTableDirectory;
			static intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFontResource;
			 TTFontFiler();
		public:
			virtual ~TTFontFiler();
	};

}

}

}

}

}
