#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_ICUSTOMPARSER() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ICustomParser : public Aspose::Cells::System::Object
#else	class ICustomParser : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual intrusive_ptr<Aspose::Cells::System::Object> ParseObject(intrusive_ptr<Aspose::Cells::System::String> value) = 0;
			virtual intrusive_ptr<Aspose::Cells::System::String> GetFormat() = 0;
		public:
	};

}

}
