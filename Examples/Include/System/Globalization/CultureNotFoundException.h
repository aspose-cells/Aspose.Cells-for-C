#ifndef _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_
#define _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_

#include "System/ArgumentException.h"
#include "System/String.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {

				class ASPOSE_CELLS_API CultureNotFoundException : public ArgumentException
				{
				private:
					StringPtr m_invalidCultureName;
					int m_invalidCultureId;

					void InitVars();
					static StringPtr GetDefaultMessage();

				public:
					CultureNotFoundException();
					CultureNotFoundException(StringPtr message);
					CultureNotFoundException(StringPtr paramName, StringPtr message);
					CultureNotFoundException(StringPtr paramName, int invalidCultureId, StringPtr message);
					CultureNotFoundException(StringPtr paramName, StringPtr invalidCultureName, StringPtr message);
				};
			}
		}
	}
}	// namespace System

#endif	// _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_


