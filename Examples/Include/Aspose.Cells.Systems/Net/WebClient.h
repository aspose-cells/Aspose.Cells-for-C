#ifndef _SYSTEM_NET_WEBCLIENT_H_
#define _SYSTEM_NET_WEBCLIENT_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/IO/Stream.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;

namespace Aspose {
	namespace Cells {
		namespace Systems
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
