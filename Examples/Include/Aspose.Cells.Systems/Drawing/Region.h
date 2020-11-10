#ifndef _SYSTEM_DRAWING_REGION_H_
#define _SYSTEM_DRAWING_REGION_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsPath.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				class Aspose::Cells::Systems::IntegerPtr;
				class Graphics; 
				class ASPOSE_CELLS_API Region : public Object, public IDisposable
				{
				private:
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeRegion;
				public:
					Region();
					Region(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> native);
					Region(intrusive_ptr<Rectangle> rect);
					Region(intrusive_ptr<RectangleF> rect);
					Region(intrusive_ptr<Aspose::Cells::Systems::Drawing::Drawing2D::GraphicsPath> path);
					void InitVars();
					
					intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
					void SetNativeObject(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> value);

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
