#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_INT32CHAR() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class Int32Char : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 CharCode;
			Aspose::Cells::System::Int32 IndexInSrc;
			 Int32Char(Aspose::Cells::System::Int32 charCode);
			 Int32Char(Aspose::Cells::System::Int32 charCode , Aspose::Cells::System::Int32 indexInSrc);
			 Int32Char();
		public:
			virtual ~Int32Char();
	};

}

}

}

}

}
