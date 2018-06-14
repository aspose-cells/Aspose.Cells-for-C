#ifndef _SYSTEM_DRAWING_PRINTING_CANCELENENTARGS_H_
#define _SYSTEM_DRAWING_PRINTING_CANCELENENTARGS_H_
#include "System/Object.h"
#include "System/Drawing/Printing/EventArgs.h"
using namespace Aspose::Cells::System;
namespace Aspose {
	namespace Cells {
		namespace System {
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