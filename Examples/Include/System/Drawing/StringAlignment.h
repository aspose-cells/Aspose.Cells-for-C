#ifndef _SYSTEM_DRAWING_STRINGALIGNMENT_H_
#define _SYSTEM_DRAWING_STRINGALIGNMENT_H_

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	enum StringAlignment
	{
        // Summary:
        //     Specifies the text be aligned near the layout. In a left-to-right layout,
        //     the near position is left. In a right-to-left layout, the near position is
        //     right.
		StringAlignment_Near = 0,
        //
        // Summary:
        //     Specifies that text is aligned in the center of the layout rectangle.
		StringAlignment_Center = 1,
        //
        // Summary:
        //     Specifies that text is aligned far from the origin position of the layout
        //     rectangle. In a left-to-right layout, the far position is right. In a right-to-left
        //     layout, the far position is left.
		StringAlignment_Far = 2,
	};
}
}
}
}
#endif
