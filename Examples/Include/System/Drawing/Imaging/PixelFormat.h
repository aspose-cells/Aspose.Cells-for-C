#ifndef _SYSTEM_DRAWING_IMAGING_PIXELFORMAT_H_
#define _SYSTEM_DRAWING_IMAGING_PIXELFORMAT_H_

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Imaging {
	enum PixelFormat
	{
        // Summary:
        //     No pixel format is specified.
		PixelFormat_DontCare = 0,
        //
        // Summary:
        //     The pixel format is undefined.
		PixelFormat_Undefined = 0,
        //
        // Summary:
        //     The maximum value for this enumeration.
		PixelFormat_Max = 15,
        //
        // Summary:
        //     The pixel data contains color-indexed values, which means the values are
        //     an index to colors in the system color table, as opposed to individual color
        //     values.
		PixelFormat_Indexed = 65536,
        //
        // Summary:
        //     The pixel data contains GDI colors.
		PixelFormat_Gdi = 131072,
        //
        // Summary:
        //     Specifies that the format is 16 bits per pixel; 5 bits each are used for
        //     the red, green, and blue components. The remaining bit is not used.
		PixelFormat_Format16bppRgb555 = 135173,
        //
        // Summary:
        //     Specifies that the format is 16 bits per pixel; 5 bits are used for the red
        //     component, 6 bits are used for the green component, and 5 bits are used for
        //     the blue component.
		PixelFormat_Format16bppRgb565 = 135174,
        //
        // Summary:
        //     Specifies that the format is 24 bits per pixel; 8 bits each are used for
        //     the red, green, and blue components.
		PixelFormat_Format24bppRgb = 137224,
        //
        // Summary:
        //     Specifies that the format is 32 bits per pixel; 8 bits each are used for
        //     the red, green, and blue components. The remaining 8 bits are not used.
		PixelFormat_Format32bppRgb = 139273,
        //
        // Summary:
        //     Specifies that the pixel format is 1 bit per pixel and that it uses indexed
        //     color. The color table therefore has two colors in it.
		PixelFormat_Format1bppIndexed = 196865,
        //
        // Summary:
        //     Specifies that the format is 4 bits per pixel, indexed.
		PixelFormat_Format4bppIndexed = 197634,
        //
        // Summary:
        //     Specifies that the format is 8 bits per pixel, indexed. The color table therefore
        //     has 256 colors in it.
		PixelFormat_Format8bppIndexed = 198659,
        //
        // Summary:
        //     The pixel data contains alpha values that are not premultiplied.
		PixelFormat_Alpha = 262144,
        //
        // Summary:
        //     The pixel format is 16 bits per pixel. The color information specifies 32,768
        //     shades of color, of which 5 bits are red, 5 bits are green, 5 bits are blue,
        //     and 1 bit is alpha.
		PixelFormat_Format16bppArgb1555 = 397319,
        //
        // Summary:
        //     The pixel format contains premultiplied alpha values.
		PixelFormat_PAlpha = 524288,
        //
        // Summary:
        //     Specifies that the format is 32 bits per pixel; 8 bits each are used for
        //     the alpha, red, green, and blue components. The red, green, and blue components
        //     are premultiplied, according to the alpha component.
		PixelFormat_Format32bppPArgb = 925707,
        //
        // Summary:
        //     Reserved.
		PixelFormat_Extended = 1048576,
        //
        // Summary:
        //     The pixel format is 16 bits per pixel. The color information specifies 65536
        //     shades of gray.
		PixelFormat_Format16bppGrayScale = 1052676,
        //
        // Summary:
        //     Specifies that the format is 48 bits per pixel; 16 bits each are used for
        //     the red, green, and blue components.
		PixelFormat_Format48bppRgb = 1060876,
        //
        // Summary:
        //     Specifies that the format is 64 bits per pixel; 16 bits each are used for
        //     the alpha, red, green, and blue components. The red, green, and blue components
        //     are premultiplied according to the alpha component.
		PixelFormat_Format64bppPArgb = 1851406,
        //
        // Summary:
        //     The default pixel format of 32 bits per pixel. The format specifies 24-bit
        //     color depth and an 8-bit alpha channel.
		PixelFormat_Canonical = 2097152,
        //
        // Summary:
        //     Specifies that the format is 32 bits per pixel; 8 bits each are used for
        //     the alpha, red, green, and blue components.
		PixelFormat_Format32bppArgb = 2498570,
        //
        // Summary:
        //     Specifies that the format is 64 bits per pixel; 16 bits each are used for
        //     the alpha, red, green, and blue components.
		PixelFormat_Format64bppArgb = 3424269,
	};
}
}
}
}
}
#endif
