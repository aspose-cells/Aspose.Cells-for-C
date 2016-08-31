#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_TEXTRUNS() 


namespace Aspose {
namespace Cells {
namespace Record {
#ifdef WIN32

	class ASPOSE_CELLS_API TextRuns : public Aspose::Cells::System::Object
#else	class TextRuns : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 StartIndex;
			Aspose::Cells::System::Int32 FontIndex;
			 TextRuns();
		public:
			virtual ~TextRuns();
	};

}

}

}
