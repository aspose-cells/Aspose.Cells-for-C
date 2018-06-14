#ifndef _SYSTEM_DRAWING_PRINTING_MARGINS_H_
#define _SYSTEM_DRAWING_PRINTING_MARGINS_H_

#include "System/Object.h"
#include "System/ICloneable.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Printing {
					class Margins : public Object, public ICloneable 
					{
					private:
						int left;
						int right;
						int top;
						int bottom;
					public://public all
						Margins();
						Margins(int left, int right, int top, int bottom);
						int GetLeft();
						void SetLeft(int value);
						int GetRight();
						void SetRight(int value);
						int GetTop();
						void SetTop(int value);
						int GetBottom();
						void SetBottom(int value);
						ObjectPtr Clone();
						virtual void add_ref() {
							++ref_count_;
						}
						virtual int release_ref() {
							return --ref_count_;
						}
					};
				}
			}
		}
	}
}
#endif
