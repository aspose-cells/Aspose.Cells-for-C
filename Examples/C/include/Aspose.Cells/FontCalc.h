#pragma once
//#include "System/Int64.h"
#include "System/Int32.h"
//#include "System/UInt32.h"
#include "System/Object.h"
#define STATIC_FONTCALC() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class FontCalc : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 FT_MulFix(Aspose::Cells::System::Int32 a , Aspose::Cells::System::Int32 b);
			static Aspose::Cells::System::Int32 FT_DivFix(Aspose::Cells::System::Int32 a , Aspose::Cells::System::Int32 b);
			static Aspose::Cells::System::Int32 FT_PIX_FLOOR(Aspose::Cells::System::Int32 x);
			static Aspose::Cells::System::Int32 FT_PIX_ROUND(Aspose::Cells::System::Int32 x);
			static Aspose::Cells::System::Int32 FT_PIX_CEIL(Aspose::Cells::System::Int32 x);
			 FontCalc();
		public:
			virtual ~FontCalc();
	};

}

}

}

}

}
