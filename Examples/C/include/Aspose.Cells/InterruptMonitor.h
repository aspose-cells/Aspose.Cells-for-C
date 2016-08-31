#pragma once
#include "System/Object.h"
#define STATIC_INTERRUPTMONITOR() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API InterruptMonitor : public Aspose::Cells::System::Object
#else	class InterruptMonitor : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool _ProcedureInterrupted;
			void Interrupt();
			 InterruptMonitor();
		public:
			virtual ~InterruptMonitor();
	};

}

}
