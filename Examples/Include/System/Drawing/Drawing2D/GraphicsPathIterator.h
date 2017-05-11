#ifndef _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_
#define _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_

#include "System/Object.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API GraphicsPathIterator: public Object, public IDisposable
	{
	public:
		void Dispose()
		{
			throw Exception("GraphicsPathIterator.Dispose NotSupport");
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
