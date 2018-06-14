#ifndef _SYSTEM_DRAWING_PRINTING_SYSPRN_H_
#define _SYSTEM_DRAWING_PRINTING_SYSPRN_H_

#include "System/Object.h"
#include "GlobalPrintingServices.h"
#include "PrintingServices.h"
//#include "System/Drawing/GdipFuns.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					//class GlobalPrintingServices;
					class SysPrn : public Object  
					{
						public:
							//static bool is_unix;						
							//static SysPrn() // static constractor
							//{
							//	is_unix = RunningOnUnix();
							//}
							static  intrusive_ptr<GlobalPrintingServices> global_printing_services;
							static  intrusive_ptr<PrintingServices> CreatePrintingService();
							static  intrusive_ptr<GlobalPrintingServices> GetGlobalService();
					};
				}
			}
		}
	}
}
#endif
