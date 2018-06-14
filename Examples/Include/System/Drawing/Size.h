#ifndef _SYSTEM_DRAWING_SIZE_H_
#define _SYSTEM_DRAWING_SIZE_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Drawing
			{
				class Point;
				class SizeF;

				class ASPOSE_CELLS_API Size : public Object
				{
				public:
					Size();
					Size(intrusive_ptr<Point> pt);
					Size(Int32 width, Int32 height);

					bool IsEmpty();
					Int32 GetHeight();
					void SetHeight(Int32 height);
					Int32 GetWidth();
					void SetWidth(Int32 width);

					static const intrusive_ptr<Size> Empty;

					static intrusive_ptr<Size> Add(intrusive_ptr<Size> sz1, intrusive_ptr<Size> sz2);
					static intrusive_ptr<Size> Ceiling(intrusive_ptr<SizeF> value);
					static intrusive_ptr<Size> Round(intrusive_ptr<SizeF> value);
					static intrusive_ptr<Size> Subtract(intrusive_ptr<Size> sz1, intrusive_ptr<Size> sz2);
					static intrusive_ptr<Size> Truncate(intrusive_ptr<SizeF> value);
					static bool Equals(intrusive_ptr<Size> a, intrusive_ptr<Size> b);
					intrusive_ptr<Size> AddSize(intrusive_ptr<Size> sz2);
					intrusive_ptr<Size> SubtractSize(intrusive_ptr<Size> sz2);
					bool EqualsSize(intrusive_ptr<Size> sz2);

					virtual bool Equals(ObjectPtr obj);
					virtual int GetHashCode();
					virtual StringPtr ToString();

				public:
					static intrusive_ptr<Point> Point(intrusive_ptr<Size> size);
					static intrusive_ptr<SizeF> SizeF(intrusive_ptr<Size> p);

				private:
					Int32	_width;
					Int32	_height;
				};
				typedef intrusive_ptr<Size> SizePtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_SIZE_H_
