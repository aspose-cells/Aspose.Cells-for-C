#ifndef _SYSTEM_DRAWING_PRINTING_PRINTEVENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTEVENTARGS_H_

#include "System/Object.h"
#include "System/Drawing/Printing/CancelEventArgs.h"
#include "System/Drawing/Printing/GraphicsPrinter.h"
#include "System/Drawing/Printing/PrintAction.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class PrintEventArgs : public CancelEventArgs //System.ComponentModel.CancelEventArgs
					{
					private:
						intrusive_ptr<GraphicsPrinter> graphics_context;
						PrintAction action;
					public:
						PrintEventArgs();
						PrintEventArgs(PrintAction action);
						PrintAction GetPrintAction();
						intrusive_ptr<GraphicsPrinter> GetGraphicsContext();
						void SetGraphicsContext(intrusive_ptr<GraphicsPrinter> value);
					};
				}
			}
		}
	}
}

#endif