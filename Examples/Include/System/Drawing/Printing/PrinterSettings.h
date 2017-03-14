#ifndef _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTERSETTINGS_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/Exception.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing {
namespace Printing {
	class ASPOSE_CELLS_API PrinterSettings : public Object, public ICloneable
	{
		ObjectPtr Clone()
		{
			throw Exception("PrinterSettings.Clone NotSupport");
		}
		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}
		
	};
}
}
}
}
}
#endif
