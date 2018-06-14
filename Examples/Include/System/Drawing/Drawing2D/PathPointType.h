#ifndef _SYSTEM_DRAWING_DRAWING2D_PATHPOINTTYPE_H_
#define _SYSTEM_DRAWING_DRAWING2D_PATHPOINTTYPE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum PathPointType
	{
        // Summary:
        //     The starting point of a System.Drawing.Drawing2D.GraphicsPath object.
		PathPointType_Start = 0,
        //
        // Summary:
        //     A line segment.
		PathPointType_Line = 1,
        //
        // Summary:
        //     A cubic B¨¦zier curve.
		PathPointType_Bezier3 = 3,
        //
        // Summary:
        //     A default B¨¦zier curve.
		PathPointType_Bezier = 3,
        //
        // Summary:
        //     A mask point.
		PathPointType_PathTypeMask = 7,
        //
        // Summary:
        //     The corresponding segment is dashed.
		PathPointType_DashMode = 16,
        //
        // Summary:
        //     A path marker.
		PathPointType_PathMarker = 32,
        //
        // Summary:
        //     The endpoint of a subpath.
		PathPointType_CloseSubpath = 128,
	};
}
}
}
}
}
#endif
