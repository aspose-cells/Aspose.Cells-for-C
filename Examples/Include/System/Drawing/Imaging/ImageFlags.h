#ifndef _SYSTEM_DRAWING_IMAGING_IMAGEFLAGS_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGEFLAGS_H_
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing {
namespace Imaging {
	enum ImageFlags
	{
        // Summary:
        //     There is no format information->
		ImageFlags_None = 0,
        //
        // Summary:
        //     The pixel data is scalable->
		ImageFlags_Scalable = 1,
        //
        // Summary:
        //     The pixel data contains alpha information->
		ImageFlags_HasAlpha = 2,
        //
        // Summary:
        //     Specifies that the pixel data has alpha values other than 0 (transparent)
        //     and 255 (opaque)->
		ImageFlags_HasTranslucent = 4,
        //
        // Summary:
        //     The pixel data is partially scalable, but there are some limitations->
		ImageFlags_PartiallyScalable = 8,
        //
        // Summary:
        //     The pixel data uses an RGB color space->
		ImageFlags_ColorSpaceRgb = 16,
        //
        // Summary:
        //     The pixel data uses a CMYK color space->
		ImageFlags_ColorSpaceCmyk = 32,
        //
        // Summary:
        //     The pixel data is grayscale->
		ImageFlags_ColorSpaceGray = 64,
        //
        // Summary:
        //     Specifies that the image is stored using a YCBCR color space->
		ImageFlags_ColorSpaceYcbcr = 128,
        //
        // Summary:
        //     Specifies that the image is stored using a YCCK color space->
		ImageFlags_ColorSpaceYcck = 256,
        //
        // Summary:
        //     Specifies that dots per inch information is stored in the image->
		ImageFlags_HasRealDpi = 4096,
        //
        // Summary:
        //     Specifies that the pixel size is stored in the image->
		ImageFlags_HasRealPixelSize = 8192,
        //
        // Summary:
        //     The pixel data is read-only->
		ImageFlags_ReadOnly = 65536,
        //
        // Summary:
        //     The pixel data can be cached for faster access->
		ImageFlags_Caching = 131072,
	};
}
}
}
}
}
#endif//_SYSTEM_DRAWING_IMAGING_IMAGEFLAGS_H_