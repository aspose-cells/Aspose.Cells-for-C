#ifndef _SYSTEM_DRAWING_GRAPHICS_H_
#define _SYSTEM_DRAWING_GRAPHICS_H_

#include "System/Single.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/IDisposable.h"
#include "System/Drawing/Image.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/Pen.h"
#include "System/Drawing/PointF.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Graphics.h"
#include "System/Drawing/SizeF.h"
#include "System/Drawing/FontPal.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {

	class ASPOSE_CELLS_API Graphics : public Object, public IDisposable
	{
	public:
		void Dispose()
		{
			throw Exception("Graphics.Dispose NotSupport");
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
#endif
