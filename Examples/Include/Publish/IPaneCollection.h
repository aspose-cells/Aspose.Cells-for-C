#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum RectangleAlignmentType;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all Pane objects shown in the specified window.
			/// </summary>
	class ASPOSE_CELLS_API IPaneCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the first visible row of the bottom pane.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetFirstVisibleRowOfBottomPane()=0;
			/// <summary>
			/// Sets the first visible row of the bottom pane.
			/// </summary>
			 virtual void SetFirstVisibleRowOfBottomPane(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the first visible column of the right pane.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetFirstVisibleColumnOfRightPane()=0;
			/// <summary>
			/// Sets the first visible column of the right pane.
			/// </summary>
			 virtual void SetFirstVisibleColumnOfRightPane(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the active pane.
			/// </summary>
			 virtual Aspose::Cells::Drawing::RectangleAlignmentType GetAcitvePaneType()=0;
			/// <summary>
			/// Sets the active pane.
			/// </summary>
			 virtual void SetAcitvePaneType(Aspose::Cells::Drawing::RectangleAlignmentType value)=0;

	};
}
}
