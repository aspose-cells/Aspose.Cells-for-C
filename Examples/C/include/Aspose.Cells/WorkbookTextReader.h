#pragma once
//#include "System/IO/Stream.h"
//#include "System/Collections/IEnumerator.h"
#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
//#include "System/IO/TextReader.h"
#include "System/Array1D.h"
//#include "System/IO/FileMode.h"
//#include "System/Char.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/IO/FileStream.h"
//#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
//#include "System/IO/FileShare.h"
#include "CellData.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
//#include "System/IO/FileAccess.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/IO/File.h"
#include "System/IO/StreamReader.h"
#define STATIC_WORKBOOKTEXTREADER() 

namespace Aspose {
namespace Cells {
class RowCollection;
class StringPool;
class ICustomParser;
class TxtLoadOptions;
class Workbook;
class WorksheetCollection;
class XfCollection;
class Cells;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class CellsDateParser;
class ParsedInfo;
class ParsedCommonInfo;
class CellsNumberParser;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class WorkbookTextReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			Aspose::Cells::WorksheetCollection* _wss;
			Aspose::Cells::StringPool* _stringPool;
			intrusive_ptr<Aspose::Cells::XfCollection> _stylePool;
			bool _emptyCells;
			Aspose::Cells::Cells* _cells;
			Aspose::Cells::RowCollection* _rows;
			intrusive_ptr<Aspose::Cells::TxtLoadOptions> _opt;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _stringList;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsNumberParser> _parserNumber;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsDateParser> _parserDate;
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedCommonInfo> _parsedInfo;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _parsableToCell;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICustomParser*>> _preferredParsers;
			bool _date1904;
			bool _checkRestriction;
			 WorkbookTextReader(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::TxtLoadOptions> opt);
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedInfo> ConvertStringToNumber(intrusive_ptr<Aspose::Cells::System::String> stringValue , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 TrimExtraCharacters(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 rowXf , Aspose::Cells::System::Int32 cellPos , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 baseColumn , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> builder);
			Aspose::Cells::System::Int32 SetStringValue(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 cellPos , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> result);
			void CheckEmptyCells(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			void Read(intrusive_ptr<Aspose::Cells::System::String> fileName , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			void Read(intrusive_ptr<Aspose::Cells::System::IO::StreamReader> reader , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			intrusive_ptr<Aspose::Cells::System::String> ReadLine(intrusive_ptr<Aspose::Cells::System::IO::StreamReader> reader);
			void ReadCharSep(intrusive_ptr<Aspose::Cells::System::IO::StreamReader> reader , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			void ReadStrSep(intrusive_ptr<Aspose::Cells::System::IO::StreamReader> reader , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
	public:

			static void Read(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::TxtLoadOptions> opt);
			static void Read(intrusive_ptr<Aspose::Cells::System::IO::StreamReader> reader , intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::TxtLoadOptions> opt);
			 WorkbookTextReader();
		public:
			virtual ~WorkbookTextReader();
	};

}

}

}
