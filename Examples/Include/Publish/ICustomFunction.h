#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#define STATIC_ICUSTOMFUNCTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ICustomFunction : public Aspose::Cells::System::Object
#else
	class ICustomFunction : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual intrusive_ptr<Aspose::Cells::System::Object> CalculateCustomFunction(intrusive_ptr<Aspose::Cells::System::String> functionName , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> paramsList , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> contextObjects) = 0;
		public:
	};

}

}
