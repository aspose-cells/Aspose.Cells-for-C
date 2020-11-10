#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		class IComment;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the shape of the comment.
			/// </summary>
	class ASPOSE_CELLS_API ICommentShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the Commnet object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IComment> 		GetIComment()=0;

	};
}
}
}
