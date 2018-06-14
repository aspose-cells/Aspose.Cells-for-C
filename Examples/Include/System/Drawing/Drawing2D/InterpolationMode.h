#ifndef _SYSTEM_DRAWING_DRAWING2D_INTERPOLATIONMODE_H_
#define _SYSTEM_DRAWING_DRAWING2D_INTERPOLATIONMODE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum InterpolationMode
	{
        // Summary:
        //     Equivalent to the System.Drawing.Drawing2D.QualityMode.Invalid element of
        //     the System.Drawing.Drawing2D.QualityMode enumeration.
		InterpolationMode_Invalid = -1,
        //
        // Summary:
        //     Specifies default mode.
		InterpolationMode_Default = 0,
        //
        // Summary:
        //     Specifies low quality interpolation.
		InterpolationMode_Low = 1,
        //
        // Summary:
        //     Specifies high quality interpolation.
		InterpolationMode_High = 2,
        //
        // Summary:
        //     Specifies bilinear interpolation. No prefiltering is done. This mode is not
        //     suitable for shrinking an image below 50 percent of its original size.
		InterpolationMode_Bilinear = 3,
        //
        // Summary:
        //     Specifies bicubic interpolation. No prefiltering is done. This mode is not
        //     suitable for shrinking an image below 25 percent of its original size.
		InterpolationMode_Bicubic = 4,
        //
        // Summary:
        //     Specifies nearest-neighbor interpolation.
		InterpolationMode_NearestNeighbor = 5,
        //
        // Summary:
        //     Specifies high-quality, bilinear interpolation. Prefiltering is performed
        //     to ensure high-quality shrinking.
		InterpolationMode_HighQualityBilinear = 6,
        //
        // Summary:
        //     Specifies high-quality, bicubic interpolation. Prefiltering is performed
        //     to ensure high-quality shrinking. This mode produces the highest quality
        //     transformed images.
		InterpolationMode_HighQualityBicubic = 7,
	};
}

}
}
}
}
#endif
