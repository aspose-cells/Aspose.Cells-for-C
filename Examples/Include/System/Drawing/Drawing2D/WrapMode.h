#ifndef _SYSTEM_DRAWING_DRAWING2D_WRAPMODE_H_
#define _SYSTEM_DRAWING_DRAWING2D_WRAPMODE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum WrapMode
	{
        // Summary:
        //     Tiles the gradient or texture.
		WrapMode_Tile = 0,
        //
        // Summary:
        //     Reverses the texture or gradient horizontally and then tiles the texture
        //     or gradient.
		WrapMode_TileFlipX = 1,
        //
        // Summary:
        //     Reverses the texture or gradient vertically and then tiles the texture or
        //     gradient.
		WrapMode_TileFlipY = 2,
        //
        // Summary:
        //     Reverses the texture or gradient horizontally and vertically and then tiles
        //     the texture or gradient.
		WrapMode_TileFlipXY = 3,
        //
        // Summary:
        //     The texture or gradient is not tiled.
		WrapMode_Clamp = 4,
	};
}

}
}
}
}
#endif
