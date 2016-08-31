#ifndef _SYSTEM_DRAWING_BRUSH_H_
#define _SYSTEM_DRAWING_BRUSH_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Exception.h"

using namespace Aspose::Cells::System ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API Brush : public Object, public ICloneable, public IDisposable
	{
	public:
		ObjectPtr Clone() = 0;
		void Dispose()
		{
			throw Exception("Brush.Dispose NotSupport");
		}

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}
		//private:

		//protected:
		//	Brush();
		//	virtual void Dispose(bool disposing);
		//public:
		//	Object *Clone();
		//	void Dispose();
		

	};
}

}
}
}
#endif
