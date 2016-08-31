#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Text/StringBuilder.h"
#include "System/Object.h"
#include "ParameterType.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "LoadFormat.h"
#include "System/DateTime.h"
#include "FileFormatType.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_CELLSHELPER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellsHelper : public Aspose::Cells::System::Object
#else	class CellsHelper : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::String> m_StartupPath;
			static intrusive_ptr<Aspose::Cells::System::String> m_AltStartPath;
			static intrusive_ptr<Aspose::Cells::System::String> m_LibPath;
			static intrusive_ptr<Aspose::Cells::System::String> mCacheDir;
	public:

			static Aspose::Cells::System::Double GetDPI();
			static void SetDPI(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::String> GetVersion();
			static bool IsProtectedByRMS(intrusive_ptr<Aspose::Cells::System::String> fileName);
			static bool IsProtectedByRMS(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static void CellNameToIndex(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> InnerCellNameToIndex(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 endIndex , bool isAreaPart , Aspose::Cells::System::Int32 limitRowIndex , Aspose::Cells::System::Int32 limitColumnIndex);
			static intrusive_ptr<Aspose::Cells::System::String> CellIndexToName(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::String> RangeToName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static intrusive_ptr<Aspose::Cells::System::String> RangeToName(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static intrusive_ptr<Aspose::Cells::System::String> CellIndexToName(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool isRowAbsolute , bool isColumnAbsolute);
			static intrusive_ptr<Aspose::Cells::System::String> CellIndexToName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool isRowAbsolute , bool isColumnAbsolute);
			static void CellIndexToName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::String> ColumnIndexToName(Aspose::Cells::System::Int32 column);
			static void ColumnIndexToName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 column);
			static Aspose::Cells::System::Int32 ColumnNameToIndex(intrusive_ptr<Aspose::Cells::System::String> columnName);
			static Aspose::Cells::System::Int32 ColumnNameToIndex(intrusive_ptr<Aspose::Cells::System::String> columnName , bool skipError);
			static intrusive_ptr<Aspose::Cells::System::String> RowIndexToName(Aspose::Cells::System::Int32 row);
			static Aspose::Cells::System::Int32 RowNameToIndex(intrusive_ptr<Aspose::Cells::System::String> rowName);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertR1C1FormulaToA1(intrusive_ptr<Aspose::Cells::System::String> r1c1Formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertA1FormulaToR1C1(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeFromDouble(Aspose::Cells::System::Double doubleValue , bool date1904);
			static Aspose::Cells::System::Double GetDoubleFromDateTime(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , bool date1904);
			static Aspose::Cells::LoadFormat DetectLoadFormat(intrusive_ptr<Aspose::Cells::System::String> fileName);
			static Aspose::Cells::LoadFormat DetectLoadFormat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::FileFormatType DetectFileFormat(intrusive_ptr<Aspose::Cells::System::String> fileName);
			static Aspose::Cells::FileFormatType DetectFileFormat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static bool HasFontSetting();
			static intrusive_ptr<Aspose::Cells::System::String> GetFontDir();
			static void SetFontDir(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFontDirs();
			static void SetFontDirs(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFontFiles();
			static void SetFontFiles(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			static intrusive_ptr<Aspose::Cells::System::String> GetStartupPath();
			static void SetStartupPath(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::String> GetAltStartPath();
			static void SetAltStartPath(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::String> GetLibraryPath();
			static void SetLibraryPath(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GetUsedColors(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static void AddAddInFunction(intrusive_ptr<Aspose::Cells::System::String> function , Aspose::Cells::System::Int32 minCountOfParameters , Aspose::Cells::System::Int32 maxCountOfParameters , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ParameterType>> paramersType , Aspose::Cells::ParameterType fuctionValueType);
			static void MergeFiles(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files , intrusive_ptr<Aspose::Cells::System::String> cachedFile , intrusive_ptr<Aspose::Cells::System::String> destFile);
			static intrusive_ptr<Aspose::Cells::System::String> GetCacheDir();
			static void SetCacheDir(intrusive_ptr<Aspose::Cells::System::String> cache);
			 CellsHelper();
		public:
			virtual ~CellsHelper();
	};

}

}
