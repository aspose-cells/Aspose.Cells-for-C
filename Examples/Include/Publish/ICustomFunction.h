#pragma once
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#define STATIC_ICUSTOMFUNCTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ICustomFunction : public Aspose::Cells::Systems::Object
#else
	class ICustomFunction : public Aspose::Cells::Systems::Object
#endif


	{
	public:

			virtual intrusive_ptr<Aspose::Cells::Systems::Object> CalculateCustomFunction(intrusive_ptr<Aspose::Cells::Systems::String> functionName , intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> paramsList , intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> contextObjects) = 0;
		public:
	};

}

}
