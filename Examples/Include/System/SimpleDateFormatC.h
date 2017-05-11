#ifndef _SYSTEM_SIMPLEDATEFORMATC_H_
#define _SYSTEM_SIMPLEDATEFORMATC_H_

#include "System/Object.h"
#include "unicode/smpdtfmt.h"

using namespace icu;
using namespace icu_56;

namespace Aspose {
	namespace Cells {
		namespace System {
			class SimpleDateFormatC : public Object
			{
			public:
				SimpleDateFormatC(SimpleDateFormat* val);
				virtual ~SimpleDateFormatC();

				SimpleDateFormat* _sdf;
			};

			typedef intrusive_ptr<SimpleDateFormatC>	SimpleDateFormatCPtr;
		}
	}
}
#endif//_SYSTEM_SIMPLEDATEFORMATC_H_







