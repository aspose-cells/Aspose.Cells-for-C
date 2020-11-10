#ifndef _SYSTEM_DRAWING_PRINTING_CANCELENENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_CANCELENENTARGS_H_
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Printing/EventArgs.h"
using namespace Aspose::Cells::Systems;
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class ASPOSE_CELLS_API CancelEventArgs : public EventArgs
					{
					private:
						bool cancel;
					public:
						CancelEventArgs() : CancelEventArgs(false) 
						{
						}
                        CancelEventArgs(bool cancel) : EventArgs() 
						{
							cancel = cancel;
						}
                        bool GetCancel()
						{
							return cancel;
						}
						void SetCancel(bool value)
						{
							cancel = value;		
						}
						virtual ~CancelEventArgs(){};
					};
				}
			}
		}
	}
}
#endif