#ifndef _SYSTEM_DRAWING_RECTANGLE_H_
#define _SYSTEM_DRAWING_RECTANGLE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Point.h"
#include "Aspose.Cells.Systems/Drawing/Size.h"

//#define NEW Aspose::Cells::Systems::Drawing::Rectangle(0, 0, 0, 0)   NEW Rectangle(0, 0, 0, 0);

using namespace Aspose::Cells::Systems;
namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Drawing { 
				class RectangleF;
				class ASPOSE_CELLS_API Rectangle: public Object 
				{
					private:
						int x;
						int y;
						int width;
						int height;
					public:
						static intrusive_ptr<Rectangle>  Empty;
						Rectangle();
						Rectangle(intrusive_ptr<Point> location, intrusive_ptr<Size> size);
						Rectangle(Int32 x1, Int32 y1, Int32 width1, Int32 height1);
					public:
						static intrusive_ptr<Rectangle>  FromLTRB(Int32 left, Int32 top, Int32 right, Int32 bottom);
						static intrusive_ptr<Rectangle> Round(intrusive_ptr<RectangleF>  value);
						static intrusive_ptr<Rectangle> Inflate(intrusive_ptr<Rectangle> rect, int x, int y);
						static intrusive_ptr<Rectangle> Union(intrusive_ptr<Rectangle> a, intrusive_ptr<Rectangle> b);
						Int32 GetHeight();
						void SetHeight(Int32 val);
						intrusive_ptr<Point> GetLocation();
						void SetLocation(intrusive_ptr<Point> point);
						intrusive_ptr<Size> GetSize();
						void SetSize(intrusive_ptr<Size> size);
						Int32 GetWidth();
						void SetWidth(Int32 val);
						Int32 GetX();
						void SetX(Int32 val);
						Int32 GetY();
						void SetY(Int32 val);
						Int32 GetLeft();
						Int32 GetRight();
						Int32 GetTop();
						Int32 GetBottom();
						bool IsEmpty();
						void Inflate(int width, int height);
						void Inflate(intrusive_ptr<Size> size);
						bool IntersectsWith(intrusive_ptr<Rectangle> rect);
					public:
						bool Equals(ObjectPtr obj);
						int GetHashCode();
						StringPtr ToString();

				};
				typedef intrusive_ptr<Rectangle> RectanglePtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_RECTANGLE_H_