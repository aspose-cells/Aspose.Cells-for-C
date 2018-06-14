#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHDATA_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHDATA_H_

#include "System/Object.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Drawing/PointF.h"
using namespace Aspose::Cells::System ;

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API PathData: public Object
	{ 
		private:
			intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::PointF *>> points;
			intrusive_ptr<Array1D<Byte>> types;
		public:
			PathData();

			intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::PointF *>> GetPoints();
			void SetPoints(intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::PointF *>> value);
			intrusive_ptr<Array1D<Byte>> GetTypes();
			void SetTypes(intrusive_ptr<Array1D<Byte>> value);

	};
}
}
}
}
}
#endif
