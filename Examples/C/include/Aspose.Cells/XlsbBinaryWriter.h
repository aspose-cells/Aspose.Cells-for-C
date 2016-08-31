#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#define STATIC_XLSBBINARYWRITER() 


namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbBinaryWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> m_stream;
	public:

			 XlsbBinaryWriter();
		public:
			virtual ~XlsbBinaryWriter();
	};

}

}

}
