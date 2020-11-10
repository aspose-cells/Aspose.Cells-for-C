#ifndef _SYSTEM_DRAWING_SOLIDBRUSH_H_
#define _SYSTEM_DRAWING_SOLIDBRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Drawing/Brush.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
	class ASPOSE_CELLS_API SolidBrush : public Brush
	{
	private:
		intrusive_ptr<Color> color;
		bool isModifiable;
	public:
		SolidBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
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
