#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/UInt16.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "RawCellValueType.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_XLSBREVISIONLOGSREADER() 

namespace Aspose {
namespace Cells {
class Workbook;
class Font;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace DataInfo {
class RevisionRRD;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbBinaryReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionStyle;
class RevisionLog;
class Revision;
class RevisionCellData;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbRevisionLogsReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log;
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRTQSIF();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> ReadDxf();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> ReadRTCell(intrusive_ptr<Aspose::Cells::Revisions::Revision> revision , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula);
			Aspose::Cells::System::Int32 ReadEtxp(intrusive_ptr<Aspose::Cells::Font> font , Aspose::Cells::System::Int32 offset);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 XlsbRevisionLogsReader(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData);
			intrusive_ptr<Aspose::Cells::OpenXLSB::DataInfo::RevisionRRD> ReadRRD();
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader , intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtUCR();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRAutoFmt();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBBrtRRNote();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRDefName();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRRenSheet();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRInsertSh();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRUserView();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRInsDel();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRMove();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRChgCell();
			intrusive_ptr<Aspose::Cells::Revisions::Revision> ReadBrtRRFormat();
			static Aspose::Cells::CellsSs::RawCellValueType ToCellType(Aspose::Cells::System::Int32 type);
			 XlsbRevisionLogsReader();
		public:
			virtual ~XlsbRevisionLogsReader();
	};

}

}

}
