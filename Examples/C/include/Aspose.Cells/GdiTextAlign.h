#pragma once
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	enum GdiTextAlign 

	{

			GdiTextAlign_NoUpdateCP = 0 ,
			GdiTextAlign_UpdateCP = 1 ,
			GdiTextAlign_Left = 0 ,
			GdiTextAlign_Right = 2 ,
			GdiTextAlign_Center = 6 ,
			GdiTextAlign_Top = 0 ,
			GdiTextAlign_Bottom = 8 ,
			GdiTextAlign_Baseline = 24 ,
			GdiTextAlign_RtlReading = 256 ,
			GdiTextAlign_Horizontal = Aspose::Cells::Internal::Rendering::GdiTextAlign_Center|Aspose::Cells::Internal::Rendering::GdiTextAlign_Right|Aspose::Cells::Internal::Rendering::GdiTextAlign_Left ,
			GdiTextAlign_Vertical = Aspose::Cells::Internal::Rendering::GdiTextAlign_Baseline|Aspose::Cells::Internal::Rendering::GdiTextAlign_Bottom|Aspose::Cells::Internal::Rendering::GdiTextAlign_Top ,
	};


}

}

}

}
