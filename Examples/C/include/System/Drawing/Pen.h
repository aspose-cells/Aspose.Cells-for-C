#ifndef _SYSTEM_DRAWING_PEN_H_
#define _SYSTEM_DRAWING_PEN_H_

#include "System/Object.h"
#include "System/Single.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Drawing/Brush.h"
#include "System/Drawing/Color.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API Pen : public Object, public ICloneable, public IDisposable
	{
	public:
		ObjectPtr Clone()
		{
			throw Exception("Pen.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("Pen.Dispose NotSupport");
		}

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}
		/*
		private:

		public:
			Object* Clone();
			void Dispose();

			Pen(Brush *brush);
			Pen(Color *color);
			Pen(Brush *brush, Single width);
			Pen(Color *color, Single width);
			*/

	};
}
}
}
}
#endif
