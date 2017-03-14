#ifndef _SYSTEM_DRAWING_TEXTUREBRUSH_H_
#define _SYSTEM_DRAWING_TEXTUREBRUSH_H_

#include "System/Object.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API TextureBrush : public Brush
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("TextureBrush.Clone NotSupport");
		}
		
	};
}
}
}
}
#endif
