#ifndef _SYSTEM_IO_FILEACCESS_H_
#define _SYSTEM_IO_FILEACCESS_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				enum FileAccess
				{
					// Summary:
					//     Read access to the file-> Data can be read from the file-> Combine with Write
					//     for read/write access->
					FileAccess_Read = 1,
					//
					// Summary:
					//     Write access to the file-> Data can be written to the file-> Combine with Read
					//     for read/write access->
					FileAccess_Write = 2,
					//
					// Summary:
					//     Read and write access to the file-> Data can be written to and read from the
					//     file->
					FileAccess_ReadWrite = 3,
				};
			}
		}
	}
}
#endif