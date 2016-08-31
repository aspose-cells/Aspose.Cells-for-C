#ifndef _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_
#define _SYSTEM_DRAWING_DRAWING2D_CUSTOMLINECAP_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Single.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"
#include "System/Drawing/Drawing2D/LineCap.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API CustomLineCap: public Object, public ICloneable, public IDisposable
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("CustomLineCap.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("CustomLineCap.Dispose NotSupport");
		}

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}
		/*
		private:

		protected:
			virtual void Dispose(bool disposing);

		public:
			CustomLineCap();
			CustomLineCap(GraphicsPath* fillPath, GraphicsPath* strokePath);
			CustomLineCap(GraphicsPath* fillPath, GraphicsPath* strokePath, LineCap baseCap);
			CustomLineCap(GraphicsPath* fillPath, GraphicsPath* strokePath, LineCap baseCap, Single baseInset);

			Object* Clone();
			void Dispose();
			*/
	};
}
}
}
}
}
#endif
