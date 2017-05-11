#ifndef _SYSTEM_DRAWING_DRAWING2D_HATCHBRUSH_H_
#define _SYSTEM_DRAWING_DRAWING2D_HATCHBRUSH_H_

#include "System/Object.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Drawing2D/HatchStyle.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API HatchBrush: public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("HatchBrush.Clone NotSupport");
		}

	};
}
}
}
}
}
#endif
