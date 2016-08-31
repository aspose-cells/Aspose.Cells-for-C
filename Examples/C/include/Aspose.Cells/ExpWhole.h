#pragma once
#include "FileFormatType.h"
#include "System/IO/Stream.h"
#include "System/Object.h"
#define STATIC_EXPWHOLE() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpWhole : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void WriteToZip(intrusive_ptr<Aspose::Cells::Workbook> wbook , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::FileFormatType fType , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			 ExpWhole();
		public:
			virtual ~ExpWhole();
	};

}

}

}
