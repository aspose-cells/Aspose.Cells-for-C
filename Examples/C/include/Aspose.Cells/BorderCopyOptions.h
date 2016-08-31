#pragma once
#include "System/Object.h"
#define STATIC_BORDERCOPYOPTIONS() 


namespace Aspose {
namespace Cells {
namespace Tables {
	class BorderCopyOptions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool IsTop;
			bool IsBottom;
			bool IsLeft;
			bool IsRight;
			bool IsHTop;
			bool IsHBottom;
			bool IsVLeft;
			bool IsVRight;
			 BorderCopyOptions();
		public:
			virtual ~BorderCopyOptions();
	};

}

}

}
