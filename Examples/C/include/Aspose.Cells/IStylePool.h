#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_ISTYLEPOOL() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
	class IStylePool : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::Style> GetRefStyle(Aspose::Cells::System::Int32 xfIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::Style> CheckRefStyle(Aspose::Cells::System::Int32 xfIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::Style> GetNamedStyle(intrusive_ptr<Aspose::Cells::System::String> name) = 0;
			virtual void SetRefStyle(Aspose::Cells::System::Int32 xfIndex , intrusive_ptr<Aspose::Cells::Style> style) = 0;
			virtual Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style) = 0;
			virtual bool IsBuiltIn() = 0;
			virtual Aspose::Cells::System::Int32 GetCeilingXF() = 0;
		public:
	};

}

}
