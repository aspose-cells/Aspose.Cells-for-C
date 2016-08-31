#pragma once
//#include "System/IO/SeekOrigin.h"
//#include "System/Int64.h"
//#include "System/Int32Helper.h"
//#include "System/UInt16.h"
//#include "System/IO/FileStream.h"
//#include "System/Boxing.h"
//#include "System/IO/File.h"
//#include "System/Int16.h"
//#include "System/IO/Stream.h"
//#include "System/UInt32.h"
#include "IntArrayList.h"
#include "System/IO/MemoryStream.h"
//#include "System/Double.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_XLSCELLSDATAWRITER() 

namespace Aspose {
namespace Cells {
class PhoneticInfo;
class Worksheet;
class CellsDataWrapperLightCells;
class Cells;
class ICellsDataWrapper;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
class XlsExpData;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class XlsCellsDataWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* _sheet;
			Aspose::Cells::Cells* _cells;
			intrusive_ptr<Aspose::Cells::Converter::Xls::XlsExpData> _xlsExpData;
			bool _hasLight;
			intrusive_ptr<Aspose::Cells::CellsDataWrapperLightCells> _lightCellsDataWrapper;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> _cellsDataStream;
			intrusive_ptr<Aspose::Cells::System::String> _cachedFile;
			void WriteData(intrusive_ptr<Aspose::Cells::RW::DataOutStream> dosFinal , intrusive_ptr<Aspose::Cells::ICellsDataWrapper> dataWrapper);
			void WriteDBCell(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> positionList , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> msCell , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> msRowRecs , intrusive_ptr<Aspose::Cells::RW::DataOutStream> dosFinal , Aspose::Cells::System::Int32 basePos);
			void WriteRKValues(intrusive_ptr<Aspose::Cells::RW::DataOutStream> dosCell , intrusive_ptr<Aspose::Cells::Collections::IntArrayList> listCellValue , intrusive_ptr<Aspose::Cells::Collections::IntArrayList> listXF , Aspose::Cells::System::Int32 rowIdx , Aspose::Cells::System::Int32 colIdx);
			void WriteBLANKValues(intrusive_ptr<Aspose::Cells::RW::DataOutStream> dosCell , intrusive_ptr<Aspose::Cells::Collections::IntArrayList> listXF , Aspose::Cells::System::Int32 rowIdx , Aspose::Cells::System::Int32 colIdx);
	public:

			Aspose::Cells::System::Int32 _firstRow;
			Aspose::Cells::System::Int32 _lastRow;
			Aspose::Cells::System::Int32 _firstCol;
			Aspose::Cells::System::Int32 _lastCol;
			intrusive_ptr<Aspose::Cells::Collections::IntArrayList> _dbcellPosList;
			intrusive_ptr<Aspose::Cells::PhoneticInfo> _PhoneticInfo;
			Aspose::Cells::System::Int32 _dataSize;
			 XlsCellsDataWriter(intrusive_ptr<Aspose::Cells::Converter::Xls::XlsExpData> xlsExpData , Aspose::Cells::System::Int32 sheetIndex);
			void WriteData(intrusive_ptr<Aspose::Cells::RW::DataOutStream> dosFinal);
			 XlsCellsDataWriter();
		public:
			virtual ~XlsCellsDataWriter();
	};

}

}

}

}
