#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/IO/BinaryReader.h"
//#include "System/Int32Helper.h"
#include "System/UInt16.h"
//#include "System/IO/FileStream.h"
//#include "System/Boxing.h"
#include "GlyphFlags.h"
//#include "System/IO/File.h"
//#include "System/IO/Stream.h"
#include "System/Drawing/FontStyle.h"
//#include "System/Drawing/Point.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Char.h"
//#include "System/Double.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
#include "System/Byte.h"
#include "System/Drawing/Size.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#include "System/Single.h"
#define STATIC_TTFONT() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
class FontMetrics;
class CMap;
class BBox;
class HorizontalMetrics;
class PP;
class TableDirEntry;
class CharMatrix;
class TTGlyphHashtable;
class HorizontalDeviceMetrics;
class HorizontalMetric;
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
	class TTFont : public Aspose::Cells::System::Object
	{
	protected:

			intrusive_ptr<Aspose::Cells::System::String> mFamilyName;
			intrusive_ptr<Aspose::Cells::System::String> mSubFamilyName;
			intrusive_ptr<Aspose::Cells::System::String> mFullFontName;
			intrusive_ptr<Aspose::Cells::System::String> mPostscriptName;
			intrusive_ptr<Aspose::Cells::System::String> mFileName;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphHashtable> mGlyphs;
			Aspose::Cells::System::Drawing::FontStyle mStyle;
			Aspose::Cells::System::Int32 mEmHeight;
			Aspose::Cells::System::Int32 mAscent;
			Aspose::Cells::System::Int32 mDescent;
			Aspose::Cells::System::Int32 mLineSpacing;
			Aspose::Cells::System::Int32 mStrikeoutSize;
			Aspose::Cells::System::Int32 mStrikeoutPosition;
			Aspose::Cells::System::Int32 mSuperscriptSize;
			Aspose::Cells::System::Int32 mSuperscriptOffset;
			Aspose::Cells::System::Int32 mSubscriptSize;
			Aspose::Cells::System::Int32 mSubscriptOffset;
			Aspose::Cells::System::Int32 mXMin;
			Aspose::Cells::System::Int32 mYMin;
			Aspose::Cells::System::Int32 mXMax;
			Aspose::Cells::System::Int32 mYMax;
			Aspose::Cells::System::Int32 mCapHeight;
			Aspose::Cells::System::Single mItalicAngle;
			Aspose::Cells::System::Int32 mMaxAdvanceWidth;
			Aspose::Cells::System::UInt16 mFlag;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> mLoca;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> mGlyf;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalDeviceMetrics> mHdmx;
			bool mIsLocaShort;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> mHorizontalMetrics;
	private:

			void Init_Vars();
			static Aspose::Cells::System::Single standardDpi;
			static Aspose::Cells::System::Single gDpi;
			static intrusive_ptr<Aspose::Cells::System::Object> sync;
			static intrusive_ptr<Aspose::Cells::System::Object> fontResourceReadLock;
			static Aspose::Cells::System::Single GetDPIInternal();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::FontMetrics> mMetrics;
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::PP> SetLoaderPP(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::BBox> bbox , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetric> hm);
			static Aspose::Cells::System::Int32 GetSizeFromHdmx(Aspose::Cells::System::Int32 glyphIdx , Aspose::Cells::System::Int32 ppem , intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalDeviceMetrics> hdmx);
			static Aspose::Cells::System::Int32 GetChildGlyphLength(Aspose::Cells::Internal::Rendering::TrueType::GlyphFlags flags);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::BBox> GetBBox(Aspose::Cells::System::Char c , Aspose::Cells::System::Int32 xScale , Aspose::Cells::System::Int32 yScale);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::BBox> ReadOutLineFromSimpleGlyph(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> mReader , Aspose::Cells::System::Int32 xScale , Aspose::Cells::System::Int32 yScale);
			bool mIsInternalFont;
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CMap> mCmap;
			bool mIsCff;
			bool mIsCffTopDict;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mOldLocations;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CharHeightCache;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> DiffCache;
	public:

			 TTFont();
			static Aspose::Cells::System::Single GetDPI();
			static bool SetDPI(Aspose::Cells::System::Single dpi);
			intrusive_ptr<Aspose::Cells::System::String> GetFamilyName();
			void SetFamilyName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetSubFamilyName();
			void SetSubFamilyName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFullFontName();
			void SetFullFontName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPostscriptName();
			void SetPostscriptName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFileName();
			void SetFileName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphHashtable> GetGlyphs();
			void SetGlyphs(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphHashtable> value);
			Aspose::Cells::System::Drawing::FontStyle GetStyle();
			void SetStyle(Aspose::Cells::System::Drawing::FontStyle value);
			Aspose::Cells::System::Int32 GetUnitsPerEm();
			void SetUnitsPerEm(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetAscent();
			void SetAscent(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetDescent();
			void SetDescent(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetHeight();
			Aspose::Cells::System::Int32 GetLineSpacing();
			void SetLineSpacing(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Single LineSpacingPoint(Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Int32 GetStrikeoutSize();
			void SetStrikeoutSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Single DescentPt(Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Int32 GetSuperscriptSize();
			void SetSuperscriptSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSuperscriptOffset();
			void SetSuperscriptOffset(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSubscriptSize();
			void SetSubscriptSize(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSubscriptOffset();
			void SetSubscriptOffset(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetStrikeoutPosition();
			void SetStrikeoutPosition(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetXMin();
			void SetXMin(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CMap> GetCmap();
			void SetCmap(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CMap> value);
			Aspose::Cells::System::Int32 GetYMin();
			void SetYMin(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetXMax();
			void SetXMax(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetYMax();
			void SetYMax(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCapHeight();
			void SetCapHeight(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Single GetItalicAngle();
			void SetItalicAngle(Aspose::Cells::System::Single value);
			Aspose::Cells::System::Int32 CharCodeToGlyphIndex(Aspose::Cells::System::Int32 charCode);
			Aspose::Cells::System::Int32 GetTextWidth(intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Single GetTextWidth2(Aspose::Cells::System::Int32 c , Aspose::Cells::System::Single fontSizePt);
			Aspose::Cells::System::Single GetTextWidth(Aspose::Cells::System::Int32 c , Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Single GetTextWidthPointInternal(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Int32 GetTextWidthPixelInternal(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Single GetTextWidthPoint(intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Single fontSize);
			Aspose::Cells::System::Single DesignUnitsToPoints(Aspose::Cells::System::Single designUnits , Aspose::Cells::System::Single fontSize);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::FontMetrics> GetMetrics();
			void SetMetrics(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::FontMetrics> value);
			Aspose::Cells::System::Int32 GetMaxAdvanceWidth();
			void SetMaxAdvanceWidth(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::UInt16 GetFlags();
			void SetFlags(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> GetHorizontalMetrics();
			void SetHorizontalMetrics(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalMetrics> value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalDeviceMetrics> GetHdmx();
			void SetHdmx(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::HorizontalDeviceMetrics> value);
			bool IsLocaShort();
			void SetIsLocaShort(bool value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> GetLocaTable();
			void SetLocaTable(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> value);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> GetGlyfTable();
			void SetGlyfTable(intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TableDirEntry> value);
			bool IsPrintPreview();
			void SetIsPrintPreview(bool value);
			bool mIsPrintPreview;
			void SubsetFont(intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::CharMatrix> RequestFontMatrix(Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Int32 c , Aspose::Cells::System::Int32 orignalSize);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Size> GetTextExtentPoint(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Single fontSize , intrusive_ptr<Aspose::Cells::System::String> value , Aspose::Cells::System::Drawing::FontStyle fs);
			bool FetchCharHeight(intrusive_ptr<Aspose::Cells::System::String> fontname , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle , Aspose::Cells::System::Int32& height);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> FetchDiff(intrusive_ptr<Aspose::Cells::System::String> fontName , Aspose::Cells::System::Int32 fontSize , Aspose::Cells::System::Drawing::FontStyle fontStyle);
			bool IsCff();
			void SetIsCff(bool value);
			bool IsCffTopDict();
			void SetIsCffTopDict(bool value);
			Aspose::Cells::System::Int32 GetEmHeight();
			void SetEmHeight(Aspose::Cells::System::Int32 value);
			bool IsInternalFont();
			void SetIsInternalFont(bool value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> pointShows;
		public:
			virtual ~TTFont();
	};

}

}

}

}

}
