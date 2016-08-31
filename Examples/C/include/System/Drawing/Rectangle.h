#ifndef _SYSTEM_DRAWING_RECTANGLE_H_
#define _SYSTEM_DRAWING_RECTANGLE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Drawing/Point.h"
#include "System/Drawing/Size.h"
//#include "System/Drawing/RectangleF.h"

using namespace Aspose::Cells::System;
namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Drawing { 
				class ASPOSE_CELLS_API Rectangle: public Object 
				{
					private:
						int x;
						int y;
						int width;
						int height;
					public:
						static intrusive_ptr<Rectangle>  Empty;
						Rectangle(intrusive_ptr<Point> location, intrusive_ptr<Size> size);
						Rectangle(Int32 x1, Int32 y1, Int32 width1, Int32 height1);
					public:
						static intrusive_ptr<Rectangle>  FromLTRB(Int32 left, Int32 top, Int32 right, Int32 bottom);
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
					public:
						bool Equals(ObjectPtr obj);
						int GetHashCode();
						StringPtr ToString();
						//int Compare(Object* obj);
						//friend bool operator ==(Rectangle &left, Rectangle &right);
						//friend bool operator !=(Rectangle &left, Rectangle &right);
				};
				typedef intrusive_ptr<Rectangle> RectanglePtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_RECTANGLE_H_