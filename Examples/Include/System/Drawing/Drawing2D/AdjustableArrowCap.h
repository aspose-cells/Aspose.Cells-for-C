#ifndef _SYSTEM_DRAWING_DRAWING2D_ADJUSTABLEARROWCAP_H_
#define _SYSTEM_DRAWING_DRAWING2D_ADJUSTABLEARROWCAP_H_
#include "System/Drawing/Drawing2D/CustomLineCap.h"
#include "System/Drawing/GdipFuns.h"

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Drawing2D{
					class  AdjustableArrowCap : public CustomLineCap
					{
					public:
						AdjustableArrowCap(float width, float height);
						AdjustableArrowCap(float width, float height, bool isFilled);
						bool GetFilled();
						void SetFilled(bool value);
						float GetMiddleInset();
						void SetMiddleInset(float value);
						float GetWidth();
						float GetHeight();
						virtual void add_ref() {
							++ref_count_;
						}
						virtual int release_ref() {
							return --ref_count_;
						}
						virtual ~AdjustableArrowCap(){}
					};
				}
			}
		}
	}
}
#endif