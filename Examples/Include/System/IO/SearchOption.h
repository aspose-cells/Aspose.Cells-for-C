#ifndef _SYSTEM_IO_SEARCHOPTION_H_
#define _SYSTEM_IO_SEARCHOPTION_H_

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace IO {
				enum SearchOption
				{
					// Summary:
					//     Includes only the current directory in a search->
					SearchOption_TopDirectoryOnly = 0,
					//
					// Summary:
					//     Includes the current directory and all the subdirectories in a search operation->
					//     This option includes reparse points like mounted drives and symbolic links
					//     in the search->
					SearchOption_AllDirectories = 1,
				};
			}
		}
	}
}
#endif//_SYSTEM_IO_SEARCHOPTION_H_