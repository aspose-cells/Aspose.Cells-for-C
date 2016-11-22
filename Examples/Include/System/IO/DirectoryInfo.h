#ifndef _SYSTEM_IO_DIRECTORYINFO_H_
#define _SYSTEM_IO_DIRECTORYINFO_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/IO/FileInfo.h"
#include "System/IO/FileSystemInfo.h"
#include "System/IO/SearchOption.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				class ASPOSE_CELLS_API DirectoryInfo : public FileSystemInfo
				{
				public:
					DirectoryInfo(StringPtr path);
					intrusive_ptr<Array1D<FileInfo*>> GetFiles();
					intrusive_ptr<Array1D<FileInfo*>> GetFiles(StringPtr searchPattern);
					intrusive_ptr<Array1D<FileInfo*>> GetFiles(StringPtr searchPattern, SearchOption searchOption);

				private:
					StringPtr FixupFileDirFullPath(StringPtr fileDirUserPath);

				};
				typedef intrusive_ptr<DirectoryInfo> DirectoryInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_IO_DIRECTORYINFO_H_