#ifndef _SYSTEM_DRAWING_DRAWING2D_LINEJOIN_H_
#define _SYSTEM_DRAWING_DRAWING2D_LINEJOIN_H_


namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum LineJoin
	{
        // Summary:
        //     Specifies a mitered join. This produces a sharp corner or a clipped corner,
        //     depending on whether the length of the miter exceeds the miter limit.
		LineJoin_Miter = 0,
        //
        // Summary:
        //     Specifies a beveled join. This produces a diagonal corner.
		LineJoin_Bevel = 1,
        //
        // Summary:
        //     Specifies a circular join. This produces a smooth, circular arc between the
        //     lines.
		LineJoin_Round = 2,
        //
        // Summary:
        //     Specifies a mitered join. This produces a sharp corner or a beveled corner,
        //     depending on whether the length of the miter exceeds the miter limit.
		LineJoin_MiterClipped = 3,
	};
}

}
}
}
}
#endif
