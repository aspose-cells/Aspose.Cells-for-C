#ifndef _SYSTEM_IFORMATPROVIDER_H_
#define _SYSTEM_IFORMATPROVIDER_H_
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Type.h"
#include <boost/intrusive_ptr.hpp>
#include "Aspose.Cells.Systems/reference_counter.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API IFormatProvider : public IRef
			{
			public:
				virtual ObjectPtr GetFormat(TypePtr formatType) = 0;

			};
		}
	}
}
#endif//_SYSTEM_IFORMATPROVIDER_H_