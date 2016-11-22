#ifndef _SYSTEM_DRAWING_SOLIDBRUSH_H_
#define _SYSTEM_DRAWING_SOLIDBRUSH_H_

#include "System/Object.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Brush.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API SolidBrush : public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("SolidBrush.Clone NotSupport");
		}
	};
}


}
}
}
#endif
