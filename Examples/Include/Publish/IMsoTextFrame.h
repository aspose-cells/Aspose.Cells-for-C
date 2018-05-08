#pragma once
#include "System/Object.h"
#include "System/Double.h"

namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the text frame in a Shape object.
			/// </summary>
	class ASPOSE_CELLS_API IMsoTextFrame : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates if size of shape is adjusted automatically according to its content.
			/// </summary>
			 virtual bool GetAutoSize()=0;
			/// <summary>
			/// Indicates if size of shape is adjusted automatically according to its content.
			/// </summary>
			 virtual void SetAutoSize(bool value)=0;
			/// <summary>
			/// Indicates whether the margin is auto calculated.
			/// </summary>
			 virtual bool IsAutoMargin()=0;
			/// <summary>
			/// Indicates whether the margin is auto calculated.
			/// </summary>
			 virtual void SetAutoMargin(bool value)=0;
			/// <summary>
			/// Returnt the left margin in unit of Points
			/// </summary>
			 virtual Aspose::Cells::System::Double GetLeftMarginPt()=0;
			/// <summary>
			/// Returnt the left margin in unit of Points
			/// </summary>
			 virtual void SetLeftMarginPt(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Returnt the right margin in unit of Points
			/// </summary>
			 virtual Aspose::Cells::System::Double GetRightMarginPt()=0;
			/// <summary>
			/// Returnt the right margin in unit of Points
			/// </summary>
			 virtual void SetRightMarginPt(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Returns the top margin in unit of Points
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTopMarginPt()=0;
			/// <summary>
			/// Returns the top margin in unit of Points
			/// </summary>
			 virtual void SetTopMarginPt(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Returnt the bottom margin in unit of Points
			/// </summary>
			 virtual Aspose::Cells::System::Double GetBottomMarginPt()=0;
			/// <summary>
			/// Returnt the bottom margin in unit of Points
			/// </summary>
			 virtual void SetBottomMarginPt(Aspose::Cells::System::Double value)=0;

	};
}
}
}
