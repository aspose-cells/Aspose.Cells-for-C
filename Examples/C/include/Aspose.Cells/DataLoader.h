#pragma once
//#include "System/IO/Stream.h"
#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/Text/Encoding.h"
//#include "System/Collections/SortedList.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Exception.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "FileFormatType.h"
#include "System/IO/MemoryStream.h"
//#include "System/StringHelperPal.h"
#define STATIC_DATALOADER() 

namespace Aspose {
namespace Cells {
class SupbookData;
class Workbook;
class LoadDataOption;
class Cell;
class WorksheetCollection;
class FormulaCell;
class Cells;
class Worksheet;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataInStream;
}
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
}
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class DataLoader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* excel;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ArrayFormulaTable;
			Aspose::Cells::FileFormatType biffVersion;
			Aspose::Cells::System::UInt16 id;
			Aspose::Cells::System::UInt16 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> tempData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::LoadDataOption> loadOption;
			void GetFileFormatType(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReachBIFFRecord(Aspose::Cells::System::UInt16 recordID , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			bool ReachBIFFRecord(Aspose::Cells::System::UInt16 recordID , Aspose::Cells::System::UInt16 nextRecordID , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadFormatRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			Aspose::Cells::System::Int32 ReadRecordData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			Aspose::Cells::System::Int32 ReadRecordData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , bool isEncrypted);
			void ReadXFRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> xfList;
			void CreateStyle(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			void GetSheetInfo(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadStringData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CheckEOF(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadGlobal(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBIFF8ExternSheetRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSupbookRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadExternalSheetDataSet(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> styleRecordsList;
			void ReadStyleRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBoundsheetRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CreateNamedStyles(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			void DecryptData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadFontRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CreateFont(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fontList;
			void ReadWindow1Record(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNameRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void AddNameData();
			void ReadFormulaRecordValue(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadFormulaRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadArrayFormulaRecord(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSharedFormulaRecord(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBoolErrRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBlankRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadMulBlankRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNumberRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadRKRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadMulRKRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadLabelSSTRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadMSODrawingRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadToEnd(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCellsData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadRowRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadDefaultRowHeight(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadDefaultColumnWidth(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadColinfoRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWindow2Record(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWholeRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWholeRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , Aspose::Cells::System::Int32 id);
			void ReadCellsValues(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadEncryptedStream(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ReadEncryptedStreamData(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> ms);
			void ReadInternal(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void ReadPaletteRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadLabelRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
	public:

			Aspose::Cells::FileFormatType GetBIFFVersion();
			 DataLoader(intrusive_ptr<Aspose::Cells::Workbook> excelApp , intrusive_ptr<Aspose::Cells::LoadDataOption> loadOption);
			intrusive_ptr<Aspose::Cells::FormulaCell> SetFormula(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void ReadWorkbookData(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			 DataLoader();
		public:
			virtual ~DataLoader();
	};

}

}

}
