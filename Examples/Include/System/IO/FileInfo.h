#ifndef _SYSTEM_IO_FILEINFO_H_
#define _SYSTEM_IO_FILEINFO_H_

#include "System/IO/FileSystemInfo.h"
#include "System/IO/SearchOption.h"
#include "System/IO/StreamReader.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API FileInfo : public FileSystemInfo
				{
				public:
					FileInfo(StringPtr fileName);
					FileInfo(StringPtr fullPath, bool ignoreThis);

					StringPtr GetName();
					StringPtr GetFullName();
					intrusive_ptr<StreamReader> OpenText();
					StringPtr GetDirectoryName();

				private:
					StringPtr _name;
				};
				typedef intrusive_ptr<FileInfo> FileInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_IO_FILEINFO_H_