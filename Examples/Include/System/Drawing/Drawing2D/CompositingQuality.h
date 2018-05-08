#ifndef _SYSTEM_DRAWING_DRAWING2D_COMPOSITINGQUALITY_H_
#define _SYSTEM_DRAWING_DRAWING2D_COMPOSITINGQUALITY_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum CompositingQuality
	{
        // Summary:
        //     Invalid quality.
		CompositingQuality_Invalid = -1,
        //
        // Summary:
        //     Default quality.
		CompositingQuality_Default = 0,
        //
        // Summary:
        //     High speed, low quality.
		CompositingQuality_HighSpeed = 1,
        //
        // Summary:
        //     High quality, low speed compositing.
		CompositingQuality_HighQuality = 2,
        //
        // Summary:
        //     Gamma correction is used.
		CompositingQuality_GammaCorrected = 3,
        //
        // Summary:
        //     Assume linear values.
		CompositingQuality_AssumeLinear = 4,
	};
}
}
}
}
}
#endif
