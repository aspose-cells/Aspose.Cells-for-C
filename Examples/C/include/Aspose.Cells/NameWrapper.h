#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_NAMEWRAPPER() 

namespace Aspose {
namespace Cells {
class Name;
}
}

namespace Aspose {
namespace Cells {
	class NameWrapper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 NameWrapper(intrusive_ptr<Aspose::Cells::Name> name);
			intrusive_ptr<Aspose::Cells::Name> Name;
			Aspose::Cells::System::Int32 Index;
			 NameWrapper();
		public:
			virtual ~NameWrapper();
	};

}

}
