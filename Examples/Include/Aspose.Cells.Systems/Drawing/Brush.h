#ifndef _SYSTEM_DRAWING_BRUSH_H_
#define _SYSTEM_DRAWING_BRUSH_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
//using namespace Gdiplus;
using namespace Gdiplus::DllExports;
using namespace Aspose::Cells::Systems;
namespace Aspose { 
namespace Cells { 
namespace Systems{
namespace Drawing {
	class ASPOSE_CELLS_API Brush : public Object, public ICloneable, public IDisposable
	{	
	public:
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeObject;

	public:
		Brush();
		Brush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
		void InitVars();
		virtual ObjectPtr Clone() = 0;
		
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> value);
		
		void SetNativeBrush(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> brush);
		void Dispose();
		void Dispose(bool disposing);
		virtual ~Brush();
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
