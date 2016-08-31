#pragma once
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_CHARMATRIX() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
#ifdef WIN32

	class ASPOSE_CELLS_API CharMatrix : public Aspose::Cells::System::Object
#else	class CharMatrix : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 x_ppem;
			Aspose::Cells::System::UInt16 y_ppem;
			Aspose::Cells::System::Int32 x_scale;
			Aspose::Cells::System::Int32 y_scale;
			Aspose::Cells::System::Int32 ascender;
			Aspose::Cells::System::Int32 descender;
			Aspose::Cells::System::Int32 height;
			Aspose::Cells::System::Int32 max_advance;
			Aspose::Cells::System::Int32 hori_advance;
			 CharMatrix();
		public:
			virtual ~CharMatrix();
	};

}

}

}

}

}
