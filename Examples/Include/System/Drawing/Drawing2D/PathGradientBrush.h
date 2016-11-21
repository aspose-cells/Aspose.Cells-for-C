#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHGRADIENTBRUSH_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Drawing/Drawing2D/WrapMode.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API PathGradientBrush : public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("PathGradientBrush.Clone NotSupport");
		}
		
	};
}
}
}
}
}
#endif
