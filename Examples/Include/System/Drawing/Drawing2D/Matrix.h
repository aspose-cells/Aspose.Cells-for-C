#ifndef _SYSTEM_DRAWING_DRAWING2D_MATRIX_H_
#define _SYSTEM_DRAWING_DRAWING2D_MATRIX_H_

#include "System/Object.h"
#include "System/Single.h"
#include "System/IDisposable.h"
#include "System/Array1D.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API Matrix: public Object, public IDisposable
	{
		public:
			ObjectPtr Clone()
			{
				throw Exception("Matrix.Clone NotSupport");
			}
			void Dispose()
			{
				throw Exception("Matrix.Dispose NotSupport");
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
