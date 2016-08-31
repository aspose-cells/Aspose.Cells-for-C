#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/IntPtr.h"
#include "System/String.h"
#define STATIC_PALMISCUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalMiscUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetProductVersion();
			static intrusive_ptr<Aspose::Cells::System::String> GetProductName();
			static bool IsIn64BitMode();
			static intrusive_ptr<Aspose::Cells::System::String> GetProducer();
			 PalMiscUtil();
		public:
			virtual ~PalMiscUtil();
	};

}

}

}

}
