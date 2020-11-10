#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHDATA_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHDATA_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Drawing/PointF.h"
using namespace Aspose::Cells::Systems;

namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API PathData: public Object
	{ 
		private:
			intrusive_ptr<Array1D<Aspose::Cells::Systems::Drawing::PointF *>> points;
			intrusive_ptr<Array1D<Byte>> types;
		public:
			PathData();

			intrusive_ptr<Array1D<Aspose::Cells::Systems::Drawing::PointF *>> GetPoints();
			void SetPoints(intrusive_ptr<Array1D<Aspose::Cells::Systems::Drawing::PointF *>> value);
			intrusive_ptr<Array1D<Byte>> GetTypes();
			void SetTypes(intrusive_ptr<Array1D<Byte>> value);

	};
}
}
}
}
}
#endif
