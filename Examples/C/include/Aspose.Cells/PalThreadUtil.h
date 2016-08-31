#pragma once
#include "System/Globalization/CultureInfo.h"
#include "System/Object.h"
//#include "System/Threading/Thread.h"
#include "System/Int32.h"
//#include "System/Globalization/TextInfo.h"
#define STATIC_PALTHREADUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalThreadUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCurrentThreadCultureInfo();
			static Aspose::Cells::System::Int32 GetOEMCodePage();
			 PalThreadUtil();
		public:
			virtual ~PalThreadUtil();
	};

}

}

}

}
