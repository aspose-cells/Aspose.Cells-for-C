#pragma once
#include "System/Object.h"
//#include "System/Environment.h"
//#include "System/Exception.h"
#include "System/String.h"
#define STATIC_PALENVIRONMENTUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalEnvironmentUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetUserName();
			static intrusive_ptr<Aspose::Cells::System::String> GetCurrentDirectory();
			static intrusive_ptr<Aspose::Cells::System::String> GetGlobalOption(intrusive_ptr<Aspose::Cells::System::String> optName);
			 PalEnvironmentUtil();
		public:
			virtual ~PalEnvironmentUtil();
	};

}

}

}

}
