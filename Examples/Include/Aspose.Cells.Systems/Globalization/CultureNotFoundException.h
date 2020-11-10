#ifndef _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_
#define _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_

#include "Aspose.Cells.Systems/ArgumentException.h"
#include "Aspose.Cells.Systems/String.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
}	// namespace Systems

#endif	// _SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_H_


