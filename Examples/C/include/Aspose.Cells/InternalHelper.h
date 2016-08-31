#pragma once
//#include "System/Text/RegularExpressions/RegexOptions.h"
//#include "System/Text/RegularExpressions/Match.h"
#include "System/Int64.h"
//#include "System/Exception.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/Boxing.h"
#include "System/IO/Stream.h"
//#include "System/StringHelperPal.h"
//#include "System/DateTime.h"
#include "PaperSizeType.h"
//#include "System/Math.h"
#include "System/Char.h"
//#include "System/IO/MemoryStream.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/ArgumentException.h"
//#include "System/Int32Helper.h"
//#include "System/IO/Path.h"
#include "System/Object.h"
#include "ErrorType.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "LoadFormat.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#include "System/Single.h"
#include "Constants.h"
#define STATIC_INTERNALHELPER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class PageSetup;
class WorksheetCollection;
class Cell;
}
}
namespace Aspose {
namespace Ss {
class MemoryStorage;
}
}

namespace Aspose {
namespace Cells {
	class InternalHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> CheckAddress(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Char mode);
	public:

			static Aspose::Cells::PaperSizeType ToPaperSize(Aspose::Cells::System::Double width , Aspose::Cells::System::Double height);
			static void GetBasePageSize(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup , Aspose::Cells::System::Double& pageWidthBase , Aspose::Cells::System::Double& pageHeightBase);
			static void ConvertDataTableValueToCellValue(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Object> result , bool isDate , intrusive_ptr<Aspose::Cells::System::String> dateNumberFormate , bool convertStringToNumber);
			static void CopyStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> source , intrusive_ptr<Aspose::Cells::System::IO::Stream> dest);
			static bool IsZip(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::LoadFormat GetLoadFormat(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , bool& isValid , Aspose::Cells::System::Int32& header);
			static Aspose::Cells::System::Int32 GetTextFormat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int64 signature);
			static bool IsCompundFile(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsCompundFile(intrusive_ptr<Aspose::Ss::MemoryStorage> ms);
			static bool IsNativeOleFile(intrusive_ptr<Aspose::Ss::MemoryStorage> ms);
			 static const Aspose::Cells::System::Double CmPerInch;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetStringData(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool NeedQuote(intrusive_ptr<Aspose::Cells::System::String> str);
			static bool NeedQuoteOfName(intrusive_ptr<Aspose::Cells::System::String> str);
			static bool CheckCellRowColumnName(intrusive_ptr<Aspose::Cells::System::String> cellName);
			static void CheckRowIndex(Aspose::Cells::System::Int32 row);
			static void CheckColumnIndex(Aspose::Cells::System::Int32 column);
			static void CheckCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static void CheckRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static void CheckRowRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			static void CheckColumnRange(Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			static Aspose::Cells::System::Int32 StringBytesLength(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsASCII(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitFormulaTerminal(intrusive_ptr<Aspose::Cells::System::String> refString);
			static intrusive_ptr<Aspose::Cells::System::Object> CheckNameOrAddress(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs);
			static intrusive_ptr<Aspose::Cells::System::Object> CheckAddress(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs);
			static intrusive_ptr<Aspose::Cells::System::String> GetEvaluationName(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::String> GetAutoSheetName(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static intrusive_ptr<Aspose::Cells::System::String> GetCopiedName(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertStringToDouble(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			static bool CheckSheet(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> sheetName);
			static Aspose::Cells::System::Int32 GetErrorTypeRank(Aspose::Cells::ErrorType type);
			static Aspose::Cells::System::Int32 CompareErrorType(Aspose::Cells::ErrorType a , Aspose::Cells::ErrorType b);
			static Aspose::Cells::System::Single GetPageScale(intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool isRender);
			 InternalHelper();
		public:
			virtual ~InternalHelper();
	};

}

}
