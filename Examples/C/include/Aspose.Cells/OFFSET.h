#pragma once
#include "System/UInt32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_OFFSET() 


namespace Aspose {
namespace Cells {
namespace Record {
#ifdef WIN32

	class ASPOSE_CELLS_API OFFSET : public Aspose::Cells::System::Object
#else	class OFFSET : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt32 Position;
			Aspose::Cells::System::UInt16 Offset;
			 OFFSET();
		public:
			virtual ~OFFSET();
	};

}

}

}
