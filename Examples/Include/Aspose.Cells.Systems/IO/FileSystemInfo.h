#ifndef _SYSTEM_IO_FILESYSTEMINFO_H_
#define _SYSTEM_IO_FILESYSTEMINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace IO {
				class ASPOSE_CELLS_API FileSystemInfo : public Object
				{
				protected:
					FileSystemInfo() {}

				protected:
					StringPtr _originalPath;
					StringPtr _fullPath;
				};
			}
		}
	}
}
#endif//_SYSTEM_IO_FILESYSTEMINFO_H_