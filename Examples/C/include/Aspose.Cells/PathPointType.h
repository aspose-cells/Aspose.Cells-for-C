#pragma once
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	enum PathPointType 

	{

			PathPointType_Start = 0 ,
			PathPointType_Line = 1 ,
			PathPointType_Bezier = 3 ,
			PathPointType_Mask = 0x07 ,
			PathPointType_DashMode = 0x10 ,
			PathPointType_Marker = 0x20 ,
			PathPointType_CloseSubpath = 0x80 ,
			PathPointType_Bezier3 = 3 ,
			PathPointType_Invalid = -1 ,
	};


}

}

}

}
