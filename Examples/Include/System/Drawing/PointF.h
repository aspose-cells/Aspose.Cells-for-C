#ifndef _SYSTEM_DRAWING_POINTF_H_
#define _SYSTEM_DRAWING_POINTF_H_

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

				class ASPOSE_CELLS_API PointF : public Object
				{
				public:
					PointF();
					PointF(float x, float y);

					static const intrusive_ptr<PointF> Empty;

					bool IsEmpty();
					float GetY();
					void SetY(float y);
					float GetX();
					void SetX(float x);

					static intrusive_ptr<PointF> Add(intrusive_ptr<PointF> pt, intrusive_ptr<Size> sz);
					static intrusive_ptr<PointF> Add(intrusive_ptr<PointF> pt, intrusive_ptr<SizeF> sz);
					static intrusive_ptr<PointF> Subtract(intrusive_ptr<PointF> pt, intrusive_ptr<Size> sz);
					static intrusive_ptr<PointF> Subtract(intrusive_ptr<PointF> pt, intrusive_ptr<SizeF> sz);
					intrusive_ptr<PointF> AddPointF(intrusive_ptr<Size> sz);
					intrusive_ptr<PointF> AddPointF(intrusive_ptr<SizeF> sz);
					intrusive_ptr<PointF> SubtractPointF(intrusive_ptr<Size> sz);
					intrusive_ptr<PointF> SubtractPointF(intrusive_ptr<SizeF> sz);
					bool EqualsPointF(intrusive_ptr<PointF> pt);

					virtual bool Equals(ObjectPtr obj);
					static bool Equals(intrusive_ptr<PointF> pt1, intrusive_ptr<PointF> pt2);
					virtual int GetHashCode();
					virtual StringPtr ToString();

				private:
					float	_x;
					float	_y;
				};
				typedef intrusive_ptr<PointF> PointFPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_POINTF_H_