#ifndef _SYSTEM_DRAWING_DRAWING2D_COMBINEMODE_H_
#define _SYSTEM_DRAWING_DRAWING2D_COMBINEMODE_H_

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Drawing {
namespace Drawing2D {
	enum CombineMode
	{
        // Summary:
        //     One clipping region is replaced by another.
		CombineMode_Replace = 0,
        //
        // Summary:
        //     Two clipping regions are combined by taking their intersection.
		CombineMode_Intersect = 1,
        //
        // Summary:
        //     Two clipping regions are combined by taking the union of both.
		CombineMode_Union = 2,
        //
        // Summary:
        //     Two clipping regions are combined by taking only the areas enclosed by one
        //     or the other region, but not both.
		CombineMode_Xor = 3,
        //
        // Summary:
        //     Specifies that the existing region is replaced by the result of the new region
        //     being removed from the existing region. Said differently, the new region
        //     is excluded from the existing region.
		CombineMode_Exclude = 4,
        //
        // Summary:
        //     Specifies that the existing region is replaced by the result of the existing
        //     region being removed from the new region. Said differently, the existing
        //     region is excluded from the new region.
		CombineMode_Complement = 5,
	};
}
}
}
}
}
#endif
