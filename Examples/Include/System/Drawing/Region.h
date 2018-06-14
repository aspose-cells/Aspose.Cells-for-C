#ifndef _SYSTEM_DRAWING_REGION_H_
#define _SYSTEM_DRAWING_REGION_H_

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/Exception.h"
#include "System/Drawing/Drawing2D/GraphicsPath.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing::Drawing2D;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				class Aspose::Cells::System::IntPtr;
				class Graphics; 
				class ASPOSE_CELLS_API Region : public Object, public IDisposable
				{
				private:
					intrusive_ptr<IntPtr> nativeRegion;
				public:
					Region();
					Region(intrusive_ptr<IntPtr> native);
					Region(intrusive_ptr<Rectangle> rect);
					Region(intrusive_ptr<RectangleF> rect);
					Region(intrusive_ptr<Aspose::Cells::System::Drawing::Drawing2D::GraphicsPath> path);
					void InitVars();
					
					intrusive_ptr<IntPtr> GetNativeObject();
					void SetNativeObject(intrusive_ptr<IntPtr> value);

					intrusive_ptr<RectangleF> GetBounds(intrusive_ptr<Graphics> g);
					bool IsEmpty(intrusive_ptr<Graphics> g);
					intrusive_ptr<Region> Clone();
					void Intersect(intrusive_ptr<Drawing2D::GraphicsPath> path);
					void Intersect(intrusive_ptr<Rectangle> rect);
					void Intersect(intrusive_ptr<RectangleF> rect);
					void Intersect(intrusive_ptr<Region> region);

					void Xor(intrusive_ptr<Drawing2D::GraphicsPath> path);
					void Xor(intrusive_ptr<Rectangle> rect);
					void Xor(intrusive_ptr<RectangleF> rect);
					void Xor(intrusive_ptr<Region> region);



					void Close();
					void Dispose();
					~Region();
					virtual void add_ref() {++ref_count_;}

					virtual int release_ref() {return --ref_count_;}
				};
			}
		}
	}
}
#endif
