#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/BitConverter.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/IO/MemoryStream.h"
#define STATIC_XLSBREVISIONWRITER() 

namespace Aspose {
namespace Cells {
class CellArea;
class Font;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellMove;
class RevisionStyle;
class RevisionRenameSheet;
class RevisionInsertSheet;
class RevisionFormat;
class RevisionCustomView;
class RevisionQueryTable;
class RevisionCellData;
class RevisionDefinedName;
class RevisionLog;
class RevisionCellChange;
class RevisionLogCollection;
class RevisionInsertDelete;
class RevisionCellComment;
class RevisionAutoFormat;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbRevisionWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Flush(intrusive_ptr<Aspose::Cells::System::String> entryName);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionQueryTable> r);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionAutoFormat> raf);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellComment> rdn);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionDefinedName> rdn);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> rcm);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionCustomView> rcv);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertSheet> rcv);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionRenameSheet> rcv);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertDelete> rid);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionFormat> rf);
			void Write(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellChange> rcc);
			void WriteDxf(intrusive_ptr<Aspose::Cells::Revisions::RevisionStyle> style);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> _dataExpWhole;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> _outputStream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> _xlsbWriter;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _revisionLogs;
			 XlsbRevisionWriter(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> dataExpWhole , intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream , intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> revisionLogs);
			void WriteHeaders();
			void WriteUsers();
			void WriteLog(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			static Aspose::Cells::System::Int32 ToRawCellValueType(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellData> data);
			static Aspose::Cells::System::Int32 WriteSqEtxp(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Font*>> fonts);
			static void WriteSQREFS(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static void WriteUncheckedRfX(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			 XlsbRevisionWriter();
		public:
			virtual ~XlsbRevisionWriter();
	};

}

}

}
