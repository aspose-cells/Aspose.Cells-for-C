#pragma once
//#include "System/Math.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_MATHUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MathUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 MathUtil();
	public:

			static Aspose::Cells::System::Double DegreesToRadians(Aspose::Cells::System::Double degrees);
			static Aspose::Cells::System::Double RadiansToDegrees(Aspose::Cells::System::Double radians);
		public:
			virtual ~MathUtil();
	};

}

}

}

}
