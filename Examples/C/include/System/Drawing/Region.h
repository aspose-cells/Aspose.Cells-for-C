#ifndef _SYSTEM_DRAWING_REGION_H_
#define _SYSTEM_DRAWING_REGION_H_

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
#include "System/Drawing/Graphics.h"
//#include "System/Drawing/Drawing2D/GraphicsPath.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
using namespace Aspose::Cells::System::Drawing::Drawing2D ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API Region : public IDisposable
	{
		/*
		private:

		public:
			Region();
			Region(GraphicsPath *path);
			Region(Rectangle *rect);
			Region(RectangleF *rect);
			////Region(RegionData *rgnData);
		public:
			Region* Clone();
			void Dispose();
			RectangleF* GetBounds(Graphics* g);
	        void Intersect(GraphicsPath *path);
	        void Intersect(Rectangle *rect);
	        void Intersect(RectangleF *rect);
	        void Xor(GraphicsPath *path);

	        bool Equals(Region *region, Graphics *g);
			*/
	};
}
}
}
}
#endif
