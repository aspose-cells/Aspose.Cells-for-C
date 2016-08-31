#pragma once
#include "System/Object.h"
//#include "System/Console.h"
#include "System/String.h"
//#include "System/Diagnostics/Debug.h"
//#include "System/StringHelperPal.h"
//#include "System/Type.h"
#include "System/Exception.h"
#define STATIC_PALDEBUGUTIL() 

namespace Aspose {
namespace Cells {
class CellsException;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalDebugUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetStackTrace(intrusive_ptr<Aspose::Cells::System::Exception> e);
			static intrusive_ptr<Aspose::Cells::System::String> GetMessage(intrusive_ptr<Aspose::Cells::System::Exception> e);
			static intrusive_ptr<Aspose::Cells::System::String> GetMessage(intrusive_ptr<Aspose::Cells::CellsException> e);
			static bool DebugEnabled();
			static void Debug(intrusive_ptr<Aspose::Cells::System::String> message);
			static void Debug(intrusive_ptr<Aspose::Cells::System::Exception> e);
			static void Pause(intrusive_ptr<Aspose::Cells::System::String> message);
			static bool TraceEnabled();
			static void PauseByHit(intrusive_ptr<Aspose::Cells::System::String> message);
			 PalDebugUtil();
		public:
			virtual ~PalDebugUtil();
	};

}

}

}

}
