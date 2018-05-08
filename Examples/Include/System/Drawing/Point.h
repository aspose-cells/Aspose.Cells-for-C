#ifndef _SYSTEM_DRAWING_POINT_H_
#define _SYSTEM_DRAWING_POINT_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Drawing
			{
				class Size;
				class SizeF;
				class PointF;

				class ASPOSE_CELLS_API Point : public Object
				{
				public:
					Point();
					Point(Int32 x, Int32 y);
					Point(intrusive_ptr<Size> size);
					Point(Int32 dword);

					static const intrusive_ptr<Point> Empty;

					bool IsEmpty();
					Int32 GetY();
					void SetY(Int32 y);
					Int32 GetX();
					void SetX(Int32 x);
					void Offset(Int32 dx, Int32 dy);
					void Offset(intrusive_ptr<Point> p);

					static intrusive_ptr<Point> Add(intrusive_ptr<Point> pt, intrusive_ptr<Size> sz);
					static intrusive_ptr<Point> Subtract(intrusive_ptr<Point> pt, intrusive_ptr<Size> sz);
					static intrusive_ptr<Point> Ceiling(intrusive_ptr<PointF> value);
					static intrusive_ptr<Point> Round(intrusive_ptr<PointF> value);
					static intrusive_ptr<Point> Truncate(intrusive_ptr<PointF> value);

					virtual bool Equals(ObjectPtr obj);
					virtual int GetHashCode();
					virtual StringPtr ToString();

				public:
					intrusive_ptr<Point> AddPoint(intrusive_ptr<Size> sz);
					intrusive_ptr<Point> SubtractPoint(intrusive_ptr<Size> sz);
					bool EqualsPoint(intrusive_ptr<Point> pt);

					static intrusive_ptr<Size> Size(intrusive_ptr<Point> pt);
					static intrusive_ptr<PointF> PointF(intrusive_ptr<Point> pt);

				private:
					Int32	_x;
					Int32	_y;
				};
				typedef intrusive_ptr<Point> PointPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_POINT_H_