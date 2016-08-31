#ifndef _SYSTEM_IO_FILESHARE_H_
#define _SYSTEM_IO_FILESHARE_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				enum FileShare
				{
					// Summary:
					//     Declines sharing of the current file-> Any request to open the file (by this
					//     process or another process) will fail until the file is closed->
					FileShare_None = 0,
					//
					// Summary:
					//     Allows subsequent opening of the file for reading-> If this flag is not specified,
					//     any request to open the file for reading (by this process or another process)
					//     will fail until the file is closed-> However, even if this flag is specified,
					//     additional permissions might still be needed to access the file->
					FileShare_Read = 1,
					//
					// Summary:
					//     Allows subsequent opening of the file for writing-> If this flag is not specified,
					//     any request to open the file for writing (by this process or another process)
					//     will fail until the file is closed-> However, even if this flag is specified,
					//     additional permissions might still be needed to access the file->
					FileShare_Write = 2,
					//
					// Summary:
					//     Allows subsequent opening of the file for reading or writing-> If this flag
					//     is not specified, any request to open the file for reading or writing (by
					//     this process or another process) will fail until the file is closed-> However,
					//     even if this flag is specified, additional permissions might still be needed
					//     to access the file->
					FileShare_ReadWrite = 3,
					//
					// Summary:
					//     Allows subsequent deleting of a file->
					FileShare_Delete = 4,
					//
					// Summary:
					//     Makes the file handle inheritable by child processes-> This is not directly
					//     supported by Win32->
					FileShare_Inheritable = 16,
				};
			}
		}
	}
}
#endif
