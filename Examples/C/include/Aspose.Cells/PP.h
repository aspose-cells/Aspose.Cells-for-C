#pragma once
#include "System/Object.h"
#include "System/Drawing/Point.h"
#define STATIC_PP() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class PP : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Drawing::Point> pp1;
			intrusive_ptr<Aspose::Cells::System::Drawing::Point> pp2;
			 PP();
		public:
			virtual ~PP();
	};

}

}

}

}

}
