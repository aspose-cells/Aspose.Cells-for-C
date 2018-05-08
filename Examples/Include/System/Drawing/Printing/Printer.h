#ifndef _SYSTEM_DRAWING_PRINTING_PRINTER_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTER_H_
#include "System/String.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					    class Printer 
						{
						private:
							StringPtr Comment;
							StringPtr Port;
							StringPtr Type;
							StringPtr Status;
							StringPtr Settings;
						public:
							Printer(StringPtr port, StringPtr type, StringPtr status, StringPtr comment) 
							{
								Port = port;
								Type = type;
								Status = status;
								Comment = comment;
						    }
					     };
				}
			}
		}
	}
}
#endif