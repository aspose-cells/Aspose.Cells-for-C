#ifndef _SYSTEM_IO_FILEOPTIONS_H_
#define _SYSTEM_IO_FILEOPTIONS_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace IO
			{
				enum FileOptions
				{
					// Summary:
					//     Indicates that the system should write through any intermediate cache and
					//     go directly to disk->
					FileOptions_WriteThrough = -2147483647 - 1,
					//
					// Summary:
					//     Indicates no additional parameters->
					FileOptions_None = 0,
					//
					// Summary:
					//     Indicates that a file is encrypted and can be decrypted only by using the
					//     same user account used for encryption->
					FileOptions_Encrypted = 16384,
					//
					// Summary:
					//     Indicates that a file is automatically deleted when it is no longer in use->
					FileOptions_DeleteOnClose = 67108864,
					//
					// Summary:
					//     Indicates that the file is to be accessed sequentially from beginning to
					//     end-> The system can use this as a hint to optimize file caching-> If an application
					//     moves the file pointer for random access, optimum caching may not occur;
					//     however, correct operation is still guaranteed->
					FileOptions_SequentialScan = 134217728,
					//
					// Summary:
					//     Indicates that the file is accessed randomly-> The system can use this as
					//     a hint to optimize file caching->
					FileOptions_RandomAccess = 268435456,
					//
					// Summary:
					//     Indicates that a file can be used for asynchronous reading and writing->
					FileOptions_Asynchronous = 1073741824,
				};
			}
		}
	}
}
#endif
