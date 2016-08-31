#pragma once
#include "System/IO/Stream.h"
//#include "System/CharHelper.h"
//#include "System/TypeCode.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/String.h"
//#include "System/Char.h"
//#include "System/Double.h"
#include "System/IO/StreamWriter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
//#include "System/Int32.h"
//#include "System/IO/TextWriter.h"
#define STATIC_EXCELTEXTWRITER() 

namespace Aspose {
namespace Cells {
class TxtSaveOptions;
class IStylePool;
class Cells;
class ICellsDataWrapper;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class ExcelTextWriter : public Aspose::Cells::System::Object
	{
	private:


		class CXXFinallyTextWriter;

		 friend class ExcelTextWriter::CXXFinallyTextWriter;

		
	class CXXFinallyTextWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Cells> _cells;
			intrusive_ptr<Aspose::Cells::IStylePool> _sp;
	public:

			 CXXFinallyTextWriter(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::IStylePool> sp);
			 CXXFinallyTextWriter();
		public:
			virtual ~CXXFinallyTextWriter();
	};
	private:

			void Init_Vars();
			static void WriteData(intrusive_ptr<Aspose::Cells::System::IO::StreamWriter> mStream , intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::ICellsDataWrapper> dataWrapper , intrusive_ptr<Aspose::Cells::TxtSaveOptions> saveOptions);
	public:

			static void Write(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::TxtSaveOptions> saveOptions);
			 ExcelTextWriter();
		public:
			virtual ~ExcelTextWriter();
	};

}

}

}
