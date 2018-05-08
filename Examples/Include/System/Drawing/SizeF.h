#ifndef _SYSTEM_DRAWING_SIZEF_H_
#define _SYSTEM_DRAWING_SIZEF_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Drawing
			{
				class PointF;
				class Size;

				class ASPOSE_CELLS_API SizeF : public Object
				{
				public:
					SizeF();
					SizeF(const SizeF& sz);
					SizeF(intrusive_ptr<PointF> pt);
					SizeF(float width, float height);

					bool IsEmpty();
					float GetHeight();
					void SetHeight(float height);
					float GetWidth();
					void SetWidth(float width);
					intrusive_ptr<PointF> ToPointF();
					intrusive_ptr<Size> ToSize();

					static const intrusive_ptr<SizeF> Empty;

					static intrusive_ptr<SizeF> Add(intrusive_ptr<SizeF> sz1, intrusive_ptr<SizeF> sz2);
					static intrusive_ptr<SizeF> Subtract(intrusive_ptr<SizeF> sz1, intrusive_ptr<SizeF> sz2);
					intrusive_ptr<SizeF> AddSizeF(intrusive_ptr<SizeF> sz2);
					intrusive_ptr<SizeF> SubtractSizeF(intrusive_ptr<SizeF> sz2);
					bool EqualsSizeF(intrusive_ptr<SizeF> sz2);

					virtual bool Equals(ObjectPtr obj);
					virtual int GetHashCode();
					virtual StringPtr ToString();

				public:
					static intrusive_ptr<PointF> PointF(intrusive_ptr<SizeF> size);

				private:
					float	_width;
					float	_height;
				};
				typedef intrusive_ptr<SizeF> SizeFPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_SIZEF_H_
