#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int64.h"
#define STATIC_MAXSIZEFONT() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
#ifdef WIN32

	class ASPOSE_CELLS_API MaxSizeFont : public Aspose::Cells::System::Object
#else	class MaxSizeFont : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> Name;
			static intrusive_ptr<Aspose::Cells::System::String> Style;
			static Aspose::Cells::System::Int64 Size;
			static intrusive_ptr<Aspose::Cells::System::String> BoldName;
			static intrusive_ptr<Aspose::Cells::System::String> BoldStyle;
			static Aspose::Cells::System::Int64 BoldSize;
			 MaxSizeFont();
		public:
			virtual ~MaxSizeFont();
	};

}

}

}

}

}
