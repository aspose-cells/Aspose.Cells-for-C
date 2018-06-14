#ifndef _SYSTEM_DRAWING_DRAWING2D_LINECAP_H_
#define _SYSTEM_DRAWING_DRAWING2D_LINECAP_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum LineCap
	{
        // Summary:
        //     Specifies a flat line cap.
		LineCap_Flat = 0,
        //
        // Summary:
        //     Specifies a square line cap.
		LineCap_Square = 1,
        //
        // Summary:
        //     Specifies a round line cap.
		LineCap_Round = 2,
        //
        // Summary:
        //     Specifies a triangular line cap.
		LineCap_Triangle = 3,
        //
        // Summary:
        //     Specifies no anchor.
		LineCap_NoAnchor = 16,
        //
        // Summary:
        //     Specifies a square anchor line cap.
		LineCap_SquareAnchor = 17,
        //
        // Summary:
        //     Specifies a round anchor cap.
		LineCap_RoundAnchor = 18,
        //
        // Summary:
        //     Specifies a diamond anchor cap.
		LineCap_DiamondAnchor = 19,
        //
        // Summary:
        //     Specifies an arrow-shaped anchor cap.
		LineCap_ArrowAnchor = 20,
        //
        // Summary:
        //     Specifies a mask used to check whether a line cap is an anchor cap.
		LineCap_AnchorMask = 240,
        //
        // Summary:
        //     Specifies a custom line cap.
		LineCap_Custom = 255,
	};
}

}
}
}
}
#endif
