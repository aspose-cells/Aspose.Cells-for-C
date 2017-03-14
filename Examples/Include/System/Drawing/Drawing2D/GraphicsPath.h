#ifndef _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATH_H_
#define _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATH_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Pen.h"
#include "System/Drawing/Drawing2D/FillMode.h"
#include "System/Drawing/Drawing2D/Matrix.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API GraphicsPath : public Object, public ICloneable, public IDisposable
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("GraphicsPath.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("GraphicsPath.Dispose NotSupport");
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
