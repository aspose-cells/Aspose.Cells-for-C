#pragma once
//#include "System/Int32Helper.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/IO/FileStream.h"
//#include "System/IO/File.h"
#include "System/IO/Stream.h"
#include "System/IO/StreamWriter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/IO/TextWriter.h"
#define STATIC_DIFWRITER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace Dif {
	class DifWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* m_workboook;
			intrusive_ptr<Aspose::Cells::System::IO::StreamWriter> writer;
	public:

			 DifWriter(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void Write(intrusive_ptr<Aspose::Cells::System::String> file);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			 static const intrusive_ptr<Aspose::Cells::System::String> Empty;
			 static const intrusive_ptr<Aspose::Cells::System::String> StartRow;
			void Write();
			void WriteEmptyRows(Aspose::Cells::System::Int32 preRow , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 maxColumn);
			void WriteEmptyCells(Aspose::Cells::System::Int32 preColumn , Aspose::Cells::System::Int32 column);
			 DifWriter();
		public:
			virtual ~DifWriter();
	};

}

}

}
