#ifndef _SYSTEM_DRAWING_SOLIDBRUSH_H_
#define _SYSTEM_DRAWING_SOLIDBRUSH_H_

#include "System/Object.h"
#include "System/IntPtr.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Brush.h"

using namespace Aspose::Cells::System ;

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
	class ASPOSE_CELLS_API SolidBrush : public Brush
	{
	private:
		intrusive_ptr<Color> color;
		bool isModifiable;
	public:
		SolidBrush(intrusive_ptr<IntPtr> ptr);
		SolidBrush(intrusive_ptr<Color> color);
		intrusive_ptr<Color> GetColor();
		void SetColor(intrusive_ptr<Color> value);

		ObjectPtr Clone();
		void Dispose(bool disposing);
		void Dispose();
	};
}


}
}
}
#endif
