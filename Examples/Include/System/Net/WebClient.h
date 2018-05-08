#ifndef _SYSTEM_NET_WEBCLIENT_H_
#define _SYSTEM_NET_WEBCLIENT_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Net
			{
				class ASPOSE_CELLS_API WebClient : public Object
				{
				private:
					
				public:
					intrusive_ptr<Stream> OpenRead(StringPtr address){ return NULL; }

				};
			}
		}
	}
}
#endif//_SYSTEM_IO_FILE_H_
