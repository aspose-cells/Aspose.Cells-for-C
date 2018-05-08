#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Double.h"
#include "System/DateTime.h"

namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a item in a PivotField report.
			/// </summary>
	class ASPOSE_CELLS_API IPivotItem : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets whether the pivot item is hidden.
			/// </summary>
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Sets whether the pivot item is hidden.
			/// </summary>
			 virtual void SetHidden(bool value)=0;
			/// <summary>
			/// Specifying the position index in all the PivotItems,not the PivotItems under the same parent node.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Specifying the position index in the PivotItems under the same parent node.
			/// </summary>
			 virtual void SetPositionInSameParentNode(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Moves the item up or down
			/// </summary>
			/// <param name="count" >
			/// The number of moving up or down.
			/// Move the item up if this is less than zero;
			/// Move the item down if this is greater than zero.
			/// </param>
			/// <param name="isSameParent" >
			/// Specifying whether moving operation is in the same parent node or not
			/// </param>
			 virtual void Move(Aspose::Cells::System::Int32 count , bool isSameParent)=0;
			/// <summary>
			/// Moves the item up or down.
			/// </summary>
			/// <param name="count" >The number of moving up or down.
			/// Move the item up if this is less than zero;
			/// Move the item down if this is greater than zero.
			/// </param>
			/// <remarks>NOTE: This method is now obsolete. Instead,
			/// please use Move(int count, bool isSameParent) method.
			/// This method will be removed 12 months later since December 2014.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual void Move(Aspose::Cells::System::Int32 count)=0;
			/// <summary>
			/// Gets the string value of the pivot item
			/// If the value is null, it will return ""
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetStringValue()=0;
			/// <summary>
			/// Gets the double value of the pivot item
			/// If the value is null or not number ,it will return 0
			/// </summary>
			 virtual Aspose::Cells::System::Double GetDoubleValue()=0;
			/// <summary>
			/// Gets the date time value of the pivot item
			/// If the value is null ,it will return DateTime.MinValue
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeValue()=0;
			/// <summary>
			/// Gets the value of the pivot item
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue()=0;
			/// <summary>
			/// Gets the name of the pivot item.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Gets the index of the pivot item in the pivot field
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetIndex()=0;
			/// <summary>
			/// Gets the index of the pivot item in the pivot field
			/// </summary>
			 virtual void SetIndex(Aspose::Cells::System::Int32 value)=0;

	};
}
}
}
