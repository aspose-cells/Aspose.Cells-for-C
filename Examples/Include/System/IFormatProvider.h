#ifndef _SYSTEM_IFORMATPROVIDER_H_
#define _SYSTEM_IFORMATPROVIDER_H_
#include "System/Object.h"
#include "System/Type.h"
#include <boost/intrusive_ptr.hpp>
#include "System/reference_counter.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API IFormatProvider : public IRef
			{
			public:
				virtual ObjectPtr GetFormat(TypePtr formatType) = 0;

			};
		}
	}
}
#endif//_SYSTEM_IFORMATPROVIDER_H_