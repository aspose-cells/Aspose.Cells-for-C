#ifndef _SYSTEM_DRAWING_DRAWING2D_COMPOSITINGMODE_H_
#define _SYSTEM_DRAWING_DRAWING2D_COMPOSITINGMODE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum CompositingMode
	{
        // Summary:
        //     Specifies that when a color is rendered, it is blended with the background
        //     color. The blend is determined by the alpha component of the color being
        //     rendered.
		CompositingMode_SourceOver = 0,
        //
        // Summary:
        //     Specifies that when a color is rendered, it overwrites the background color.
		CompositingMode_SourceCopy = 1,
	};
}

}
}
}
}
#endif
