#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "AbstractEntryWriter.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BINARYENTRYWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class BinaryEntryWriter : public Aspose::Cells::OpenXML::AbstractEntryWriter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Data;
			Aspose::Cells::System::Int32 Offset;
			Aspose::Cells::System::Int32 Length;
			intrusive_ptr<Aspose::Cells::System::IO::Stream> stream;
	public:

			 BinaryEntryWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			 BinaryEntryWriter(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 BinaryEntryWriter(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			 virtual bool IsRel();
			 virtual void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , bool isXml);
			static void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> s , intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			 BinaryEntryWriter();
		public:
			virtual ~BinaryEntryWriter();
	};

}

}

}
