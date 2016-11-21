#ifndef _SYSTEM_IO_FILEMODE_H_
#define _SYSTEM_IO_FILEMODE_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				enum FileMode
				{
					// Summary:
					//     Specifies that the operating system should create a NEW file-> This requires
					//     System->Security->Permissions->FileIOPermissionAccess->Write-> If the file already
					//     exists, an System->IO->IOException is thrown->
					FileMode_CreateNew = 1,
					//
					// Summary:
					//     Specifies that the operating system should create a NEW file-> If the file
					//     already exists, it will be overwritten-> This requires System->Security->Permissions->FileIOPermissionAccess->Write->
					//     System->IO->FileMode->Create is equivalent to requesting that if the file does
					//     not exist, use System->IO->FileMode->CreateNew; otherwise, use System->IO->FileMode->Truncate->
					FileMode_Create = 2,
					//
					// Summary:
					//     Specifies that the operating system should open an existing file-> The ability
					//     to open the file is dependent on the value specified by System->IO->FileAccess->
					//     A System->IO->FileNotFoundException is thrown if the file does not exist->
					FileMode_Open = 3,
					//
					// Summary:
					//     Specifies that the operating system should open a file if it exists; otherwise,
					//     a NEW file should be created-> If the file is opened with FileAccess->Read,
					//     System->Security->Permissions->FileIOPermissionAccess->Read is required-> If the
					//     file access is FileAccess->Write then System->Security->Permissions->FileIOPermissionAccess->Write
					//     is required-> If the file is opened with FileAccess->ReadWrite, both System->Security->Permissions->FileIOPermissionAccess->Read
					//     and System->Security->Permissions->FileIOPermissionAccess->Write are required->
					//     If the file access is FileAccess->Append, then System->Security->Permissions->FileIOPermissionAccess->Append
					//     is required->
					FileMode_OpenOrCreate = 4,
					//
					// Summary:
					//     Specifies that the operating system should open an existing file-> Once opened,
					//     the file should be truncated so that its size is zero bytes-> This requires
					//     System->Security->Permissions->FileIOPermissionAccess->Write-> Attempts to read
					//     from a file opened with Truncate cause an exception->
					FileMode_Truncate = 5,
					//
					// Summary:
					//     Opens the file if it exists and seeks to the end of the file, or creates
					//     a NEW file-> FileMode->Append can only be used in conjunction with FileAccess->Write->
					//     Attempting to seek to a position before the end of the file will throw an
					//     System->IO->IOException and any attempt to read fails and throws an System->NotSupportedException->
					FileMode_Append = 6,
				};
			}
		}
	}
}
#endif
