#ifndef _SYSTEM_IO_FILESYSTEMINFO_H_
#define _SYSTEM_IO_FILESYSTEMINFO_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
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