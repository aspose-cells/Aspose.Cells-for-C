#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "IChartFrame.h"

namespace Aspose {
	namespace Cells {
		enum TextAlignmentType;
		class IFontSetting;
		enum TextDirectionType;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the frame object which contains text. 
			/// </summary>
	class ASPOSE_CELLS_API IChartTextFrame : virtual public Aspose::Cells::Charts::IChartFrame
	{
		public:
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual bool IsAutoText()=0;
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual void SetAutoText(bool value)=0;
			/// <summary>
			/// Indicates whether this data lables is deleted.
			/// </summary>
			 virtual bool IsDeleted()=0;
			/// <summary>
			/// Indicates whether this data lables is deleted.
			/// </summary>
			 virtual void SetDeleted(bool value)=0;
			/// <summary>
			/// Gets the text horizontal alignment.
			/// </summary>
			 virtual Aspose::Cells::TextAlignmentType GetTextHorizontalAlignment()=0;
			/// <summary>
			/// Sets the text horizontal alignment.
			/// </summary>
			 virtual void SetTextHorizontalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			/// Gets the text vertical alignment of text.
			/// </summary>
			 virtual Aspose::Cells::TextAlignmentType GetTextVerticalAlignment()=0;
			/// <summary>
			/// Sets the text vertical alignment of text.
			/// </summary>
			 virtual void SetTextVerticalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// <remarks><br>0: Not rotated.</br>
			/// <br>255: Top to Bottom.</br>
			/// <br>-90: Downward.</br>
			/// <br>90: Upward.</br>
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetRotationAngle()=0;
			/// <summary>
			/// Represents text rotation angle.
			/// </summary>
			/// <remarks><br>0: Not rotated.</br>
			/// <br>255: Top to Bottom.</br>
			/// <br>-90: Downward.</br>
			/// <br>90: Upward.</br>
			/// </remarks>
			 virtual void SetRotationAngle(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Returns a Characters object that represents a range of characters within the text.
			/// </summary>
			/// <param name="startIndex" >The index of the start of the character.</param>
			/// <param name="length" >The number of characters.</param>
			/// <returns>Characters object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IFontSetting> 		GetCharacters(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length)=0;
			/// <summary>
			/// Gets the text of a frame's title.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::System::String> GetText()=0;
			/// <summary>
			/// Sets the text of a frame's title.
			/// </summary>
			  virtual void SetText(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets a reference to the worksheet.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::System::String> GetLinkedSource()=0;
			/// <summary>
			/// Sets a reference to the worksheet.
			/// </summary>
			  virtual void SetLinkedSource(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			 virtual Aspose::Cells::TextDirectionType GetTextDirection()=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			 virtual void SetTextDirection(Aspose::Cells::TextDirectionType value)=0;
			/// <summary>
			/// Gets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual bool IsTextWrapped()=0;
			/// <summary>
			/// Sets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual void SetTextWrapped(bool value)=0;
			/// <summary>
			/// Gets whether a shape should be auto-fit to fully contain the text described within it. Auto-fitting is
			/// when text within a shape is scaled in order to contain all the text inside.
			/// </summary>
			 virtual bool IsResizeShapeToFitText()=0;
			/// <summary>
			/// Sets whether a shape should be auto-fit to fully contain the text described within it. Auto-fitting is
			/// when text within a shape is scaled in order to contain all the text inside.
			/// </summary>
			 virtual void SetResizeShapeToFitText(bool value)=0;

	};
}
}
}
