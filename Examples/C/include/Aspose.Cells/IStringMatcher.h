#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_ISTRINGMATCHER() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class IStringMatcher : public Aspose::Cells::System::Object
	{
	public:

			virtual bool Match(intrusive_ptr<Aspose::Cells::System::String> strValue) = 0;
		public:
	};

}

}

}
