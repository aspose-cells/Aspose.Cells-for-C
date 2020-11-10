#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MirrorType;
			enum RectangleAlignmentType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents tile picture as texture.
			/// </summary>
	class ASPOSE_CELLS_API ITilePicOption : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the X offset for tiling picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOffsetX()=0;
			/// <summary>
			/// Sets the X offset for tiling picture.
			/// </summary>
			 virtual void SetOffsetX(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the Y offset for tiling picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOffsetY()=0;
			/// <summary>
			/// Sets the Y offset for tiling picture.
			/// </summary>
			 virtual void SetOffsetY(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the X scale for tiling picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetScaleX()=0;
			/// <summary>
			/// Sets the X scale for tiling picture.
			/// </summary>
			 virtual void SetScaleX(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the Y scale for tiling picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetScaleY()=0;
			/// <summary>
			/// Sets the Y scale for tiling picture.
			/// </summary>
			 virtual void SetScaleY(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the mirror type for tiling.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MirrorType GetMirrorType()=0;
			/// <summary>
			/// Sets the mirror type for tiling.
			/// </summary>
			 virtual void SetMirrorType(Aspose::Cells::Drawing::MirrorType value)=0;
			/// <summary>
			/// Gets the alignment for tiling.
			/// </summary>
			 virtual Aspose::Cells::Drawing::RectangleAlignmentType GetAlignmentType()=0;
			/// <summary>
			/// Sets the alignment for tiling.
			/// </summary>
			 virtual void SetAlignmentType(Aspose::Cells::Drawing::RectangleAlignmentType value)=0;

	};
}
}
}
