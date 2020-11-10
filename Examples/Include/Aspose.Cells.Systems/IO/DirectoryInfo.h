#ifndef _SYSTEM_IO_DIRECTORYINFO_H_
#define _SYSTEM_IO_DIRECTORYINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/IO/FileInfo.h"
#include "Aspose.Cells.Systems/IO/FileSystemInfo.h"
#include "Aspose.Cells.Systems/IO/SearchOption.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
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