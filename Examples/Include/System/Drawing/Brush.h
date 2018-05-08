#ifndef _SYSTEM_DRAWING_BRUSH_H_
#define _SYSTEM_DRAWING_BRUSH_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Exception.h"
#include "System/IntPtr.h"
#include "System/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
//using namespace Gdiplus;
using namespace Gdiplus::DllExports;
using namespace Aspose::Cells::System ;
namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
	class ASPOSE_CELLS_API Brush : public Object, public ICloneable, public IDisposable
	{	
	public:
		intrusive_ptr<IntPtr> nativeObject;

	public:
		Brush();
		Brush(intrusive_ptr<IntPtr> ptr);
		void InitVars();
		virtual ObjectPtr Clone() = 0;
		
		intrusive_ptr<IntPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<IntPtr> value);
		
		void SetNativeBrush(intrusive_ptr<IntPtr> brush);
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
