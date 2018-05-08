#ifndef _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_
#define _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_

#include "System/Object.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API GraphicsPathIterator: public Object, public IDisposable
	{
	private:
		intrusive_ptr<IntPtr> nativeObject;
	public:
		GraphicsPathIterator(intrusive_ptr<IntPtr> native);
		GraphicsPathIterator(intrusive_ptr<GraphicsPath> path);

		intrusive_ptr<IntPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<IntPtr> value);
		int NextPathType(byte& pathType, int& startIndex, int& endIndex);
		int NextSubpath(int &startIndex, int& endIndex, bool& isClosed);
		void Dispose();
		void Dispose(bool disposing);
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
