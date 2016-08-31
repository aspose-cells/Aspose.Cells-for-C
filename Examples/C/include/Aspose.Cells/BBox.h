#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_BBOX() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
#ifdef WIN32

	class ASPOSE_CELLS_API BBox : public Aspose::Cells::System::Object
#else	class BBox : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 xMin;
			Aspose::Cells::System::Int32 yMin;
			Aspose::Cells::System::Int32 xMax;
			Aspose::Cells::System::Int32 yMax;
			 BBox();
		public:
			virtual ~BBox();
	};

}

}

}

}

}
