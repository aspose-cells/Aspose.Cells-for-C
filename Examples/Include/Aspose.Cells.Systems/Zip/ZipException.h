#ifndef _SYSTEM_ZIP_ZIPEXCEPTION_H_
#define _SYSTEM_ZIP_ZIPEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace OpenXML {

			class ASPOSE_CELLS_API ZipException : public Exception
			{
			public:
				ZipException(const char* message) : Exception(message) {}
				ZipException(StringPtr message)
				{
					_message = message;
				}
				virtual ~ZipException() {}
			};

		}	
	}
}
#endif	// _SYSTEM_ZIP_ZIPEXCEPTION_H_


