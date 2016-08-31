#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
#define STATIC_IINDEXEDCOLORPROVIDER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class IIndexedColorProvider : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor(Aspose::Cells::System::Int32 index) = 0;
		public:
	};

}

}

}

}
